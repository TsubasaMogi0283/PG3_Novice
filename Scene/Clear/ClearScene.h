#pragma once
#include "IScene.h"

class ClearScene  :public IScene{
	public:
	//コンストラクタ
	ClearScene();

	//初期化
	void Initialize(GameManager* gamaManager) override;

	//更新
	void Update(GameManager* gamaManager) override;

	//描画
	void Draw(GameManager* gamaManager) override;

	//デストラクタ
	~ClearScene();



private:


};
