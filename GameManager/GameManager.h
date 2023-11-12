#pragma once
#include <memory>
#include "IScene.h"
#include "Stage/StageScene.h"
#include "TitleScene.h"
#include "ClearScene.h"

class GameManager {

public:
	//コンストラクタ
	GameManager();


	//シーンチェンジ
	void ChangeScene(IScene* newGameScene);

	//この関数でゲームループを呼び出す
	void Run();

	
	//デストラクタ
	~GameManager();

private:

	IScene* currentGamaScene_ = nullptr;



};