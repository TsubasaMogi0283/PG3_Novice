#include "StageScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "GameManager/GameManager.h"
#include "ClearScene.h"

StageScene::StageScene() {

}

void StageScene::Initialize() { 
	player_ = new Player();
	player_->Initialize();

	enemy_ = new Enemy();
	enemy_->Initialize();
}

void StageScene::Update() { 
	

	//更新
	player_->Update();
	enemy_->Update();

#pragma region 攻撃

	//スペースで攻撃
	if (InputManager::GetInstance()->IsTriggerKey(DIK_SPACE) == true){
		PlayerBullet* newBullet = new PlayerBullet();

		newBullet->Initialize(player_->GetPosition());
		bullets_.push_back(newBullet);

	}
#pragma endregion

	for (PlayerBullet* bullet : bullets_) {
		bullet->Update();



		//当たり判定
		Vector2 distance = {
		    enemy_->GetPosition().x - bullet->GetPosition().x,
		    enemy_->GetPosition().y - bullet->GetPosition().y};
		
		collisionDistance_ = sqrtf(distance.x * distance.x + distance.y * distance.y);

		if (collisionDistance_<enemy_->GetRadius().x+bullet->GetRadius().x) {
			enemy_->SetIsAlive(false);
		}

	}

	bullets_.remove_if([](PlayerBullet* bullet) {
		if (bullet->IsAlive()==false) {
			delete bullet;
			return true;
		}
		return false;
	});


	if (InputManager::GetInstance()->IsTriggerKey(DIK_1) == true) {
		sceneNo_ = CLEAR;
	}
}

void StageScene::Draw() {
	Novice::ScreenPrintf(0, 0, "StageScene");

	//プレイヤーの描画
	player_->Draw();
	enemy_->Draw();

	
	for (PlayerBullet* bullet : bullets_) {
		bullet->Draw();
	


	}

	


}

StageScene::~StageScene() { 
	delete player_; 
	delete enemy_;

	for (PlayerBullet* bullet : bullets_) {
		delete bullet;
	}

}
