#include "StageScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "GameManager/GameManager.h"
#include "ClearScene.h"

StageScene::StageScene() {

}

void StageScene::Initialize(GameManager* gamaManager) {

}

void StageScene::Update(GameManager* gamaManager) { 
	Novice::ScreenPrintf(0, 0, "StageScene"); 
	if (InputManager::GetInstance()->IsTriggerKey(DIK_SPACE) == true) {
		gamaManager->ChangeScene(new ClearScene());
	}
}

void StageScene::Draw(GameManager* gamaManager) {

}

StageScene::~StageScene() {

}
