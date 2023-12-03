#include "IScene.h"

//シーンの初期化
//最初はタイトル
int IScene::sceneNo_ = TITLE;

//シーン番号のゲッター
int IScene::GetSceneNo() { 
	return sceneNo_; 
}

IScene::~IScene() {

}
