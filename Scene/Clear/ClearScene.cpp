#include "ClearScene.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "Scene/Title/TitleScene.h"
#include "GameManager/GameManager.h"


ClearScene::ClearScene() {

}

void ClearScene::Initialize() {

}

void ClearScene::Update() {
	


}

void ClearScene::Draw() {
	Novice::ScreenPrintf(0, 0, "ClearScene"); 
	Novice::ScreenPrintf(600, 300, "Space To Title");
}

ClearScene::~ClearScene() {
	
}
