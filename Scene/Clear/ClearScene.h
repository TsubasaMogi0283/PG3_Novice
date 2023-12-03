#pragma once
#include "IScene.h"

class ClearScene  :public IScene{
	public:
	//コンストラクタ
	ClearScene();

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//デストラクタ
	~ClearScene();



private:


};
