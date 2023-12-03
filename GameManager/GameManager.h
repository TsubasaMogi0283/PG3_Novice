#pragma once
#include <memory>

#include "Scene/Stage/StageScene.h"
#include "Scene/Title/TitleScene.h"
#include "Scene/Clear/ClearScene.h"

#include "Input/InputManager.h"
#include <Scene/IScene.h>

class GameManager {

public:
	//コンストラクタ
	GameManager();


	//この関数でゲームループを呼び出す
	int Run();

	
	//デストラクタ
	~GameManager();

private:
	GameManager* gameManager = nullptr;
	InputManager* inputManager_ = nullptr;

	std::unique_ptr<IScene> sceneArr_[3];

	int currentSceneNo_;
	int preSceneNo_;


};