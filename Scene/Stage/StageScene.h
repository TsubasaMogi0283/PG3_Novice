#pragma once
#include "Scene/IScene.h"
#include "Object/Player/Player.h"
#include "Input/InputHandler/InputHandler.h"

class StageScene :public IScene{
public:
	//コンストラクタ
	StageScene();

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//デストラクタ
	~StageScene();



private:
	Player* player_ = nullptr;

	ICommand* command_ = nullptr;
	InputHandler* inputHandler_ = nullptr;

	float collisionDistance_ = 0.0f;

};
