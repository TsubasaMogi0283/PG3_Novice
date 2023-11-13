#pragma once
#include "Vector2.h"

class Enemy {
public:
	
	//初期化
	Enemy();

	//初期化
	void Initialize();

	//更新
	void Update();

	//描画
	void Draw();

	//デストラクタ
	~Enemy();

private:
	//位置
	Vector2 position_ = {};
	//移動
	Vector2 move_ = {};
	//半径
	Vector2 radius_ = {};


};
