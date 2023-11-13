#pragma once
#include "Vector2.h"

class PlayerBullet {
public:
	//コンストラクタ
	PlayerBullet();

	//初期化
	void Initialize(Vector2 position);

	//更新
	void Update();

	//描画
	void Draw();

	//デストラクタ
	~PlayerBullet();

	Vector2 GetRadius() { 
		return radius_;
	}

	//アクセッサ
	bool IsAlive() { 
		return isAlive_;
	}

private:
	//位置
	Vector2 position_ = {};
	//移動
	Vector2 move_ = {};
	//半径
	Vector2 radius_ = {};

	bool isAlive_ = true;


};