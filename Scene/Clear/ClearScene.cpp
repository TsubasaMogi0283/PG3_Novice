#include "ClearScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include <TitleScene.h>
#include "GameManager/GameManager.h"
#include "TitleScene.h"

ClearScene::ClearScene() {

}

void ClearScene::Initialize(GameManager* gamaManager) {

}

void ClearScene::Update(GameManager* gamaManager) {
	

	if (InputManager::GetInstance()->IsTriggerKey(DIK_SPACE) == true) {
		gamaManager->ChangeScene(new TitleScene());
	}

}

void ClearScene::Draw(GameManager* gamaManager) {
	Novice::ScreenPrintf(0, 0, "ClearScene"); 
	Novice::ScreenPrintf(600, 300, "Space To Title");
}

ClearScene::~ClearScene() {
	
}
