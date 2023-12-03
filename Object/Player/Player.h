#pragma once
#include "Vector2.h"
#include <list>



class Player {
public:
	//初期化
	Player();

	//初期化
	void Initialize();


	//移動
	void Move();

	//更新
	void Update();

	//描画
	void Draw();

	//デストラクタ
	~Player();

	Vector2 GetPosition() { 
		return position_;
	}

private:
	//位置
	Vector2 position_ = {};
	//移動
	Vector2 move_ = {};
	//半径
	Vector2 radius_ = {};



};
