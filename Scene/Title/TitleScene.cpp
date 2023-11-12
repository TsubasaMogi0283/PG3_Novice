#include "TitleScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "GameManager/GameManager.h"

TitleScene::TitleScene() {

}

void TitleScene::Initialize(GameManager* gamaManager) {

}

void TitleScene::Update(GameManager* gamaManager) {
	


	if (InputManager::GetInstance()->IsTriggerKey(DIK_SPACE) == true) {
		gamaManager->ChangeScene(new StageScene());
	}
}

void TitleScene::Draw(GameManager* gamaManager) {
	Novice::ScreenPrintf(0, 0, "TitleScene"); 


	Novice::ScreenPrintf(600, 300, "Space To Start");
}

TitleScene::~TitleScene() {

}
