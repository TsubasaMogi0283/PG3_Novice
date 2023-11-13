#include "StageScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "GameManager/GameManager.h"
#include "ClearScene.h"

StageScene::StageScene() {

}

void StageScene::Initialize(GameManager* gamaManager) { 
	player_ = new Player();
	player_->Initialize();

	enemy_ = new Enemy();
	enemy_->Initialize();
}

void StageScene::Update(GameManager* gamaManager) { 
	

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
	}

	if (InputManager::GetInstance()->IsTriggerKey(DIK_1) == true) {
		gamaManager->ChangeScene(new ClearScene());
	}
}

void StageScene::Draw(GameManager* gamaManager) {
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
