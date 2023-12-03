#include "TitleScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "GameManager/GameManager.h"

TitleScene::TitleScene() {

}

void TitleScene::Initialize() {

}

void TitleScene::Update() {
	


	if (InputManager::GetInstance()->IsTriggerKey(DIK_SPACE) == true) {
		sceneNo_ = STAGE;
	}
}

void TitleScene::Draw() {
	Novice::ScreenPrintf(0, 0, "TitleScene"); 


	Novice::ScreenPrintf(600, 300, "Space To Start");
}

TitleScene::~TitleScene() {

}
