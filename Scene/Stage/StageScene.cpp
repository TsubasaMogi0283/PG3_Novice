#include "StageScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "GameManager/GameManager.h"


StageScene::StageScene() {

}

void StageScene::Initialize() { 
	player_ = new Player();
	player_->Initialize();

}

void StageScene::Update() { 
	

	//更新
	player_->Update();



}

void StageScene::Draw() {
	Novice::ScreenPrintf(0, 0, "StageScene");

	//プレイヤーの描画
	player_->Draw();


}

StageScene::~StageScene() { 
	delete player_; 


}
