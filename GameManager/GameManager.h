#pragma once
#include <memory>
#include "IScene.h"
#include "Stage/StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

#include "Input/InputManager.h"

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