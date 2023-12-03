#pragma once
#include "Scene/IScene.h"

class TitleScene:public IScene {
public:
	//コンストラクタ
	TitleScene();

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//デストラクタ
	~TitleScene();



private:


};
