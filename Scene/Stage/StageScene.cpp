#include "StageScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "GameManager/GameManager.h"


StageScene::StageScene() {

}

void StageScene::Initialize() { 
	player_ = new Player();
	player_->Initialize();

	inputHandler_ = new InputHandler();

	//初期化の時に割り当てる
	//AssignCommand
	inputHandler_->AssignMoveRightCommandToPressKeyD();
	inputHandler_->AssignMoveLeftCommandToPressKeyA();


}

void StageScene::Update() { 
	

	command_ = inputHandler_->HandleInput();

	//SetCommand
	if (this->command_) {
		command_->Exec(*player_);
	}

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
