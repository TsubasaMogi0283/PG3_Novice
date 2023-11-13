#pragma once
#include "Vector2.h"


class Player {
public:
	Player();

	void Initialize();

	void Update();

	void Draw();


	~Player();


private:
	//位置
	Vector2 position_ = {};
	//移動
	Vector2 move_ = {};
	//半径
	Vector2 radius_ = {};
};
