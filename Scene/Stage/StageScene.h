#pragma once
#include "IScene.h"

class StageScene :public IScene{
public:
	//コンストラクタ
	StageScene();

	//初期化
	void Initialize(GameManager* gamaManager) override;

	//更新
	void Update(GameManager* gamaManager) override;

	//描画
	void Draw(GameManager* gamaManager) override;

	//デストラクタ
	~StageScene();



private:



};
