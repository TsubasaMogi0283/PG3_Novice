#include "ClearScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include <TitleScene.h>
#include "GameManager/GameManager.h"
#include "TitleScene.h"

ClearScene::ClearScene() {

}

void ClearScene::Initialize() {

}

void ClearScene::Update() {
	

	if (InputManager::GetInstance()->IsTriggerKey(DIK_SPACE) == true) {
		sceneNo_ = TITLE;
	}

}

void ClearScene::Draw() {
	Novice::ScreenPrintf(0, 0, "ClearScene"); 
	Novice::ScreenPrintf(600, 300, "Space To Title");
}

ClearScene::~ClearScene() {
	
}
