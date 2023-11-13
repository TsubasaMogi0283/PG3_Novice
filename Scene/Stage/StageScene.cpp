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
}

void StageScene::Update(GameManager* gamaManager) { 
	

	//更新
	player_->Update();





	if (InputManager::GetInstance()->IsTriggerKey(DIK_1) == true) {
		gamaManager->ChangeScene(new ClearScene());
	}
}

void StageScene::Draw(GameManager* gamaManager) {
	Novice::ScreenPrintf(0, 0, "StageScene");

	//プレイヤーの描画
	player_->Draw();
}

StageScene::~StageScene() { 
	delete player_; 
}
