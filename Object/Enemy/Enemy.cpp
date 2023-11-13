#include "Enemy.h"
#include <Novice.h>

//初期化
Enemy::Enemy() {

}

//初期化
void Enemy::Initialize() {
	//位置
	position_ = {100,20};
	//移動
	move_ = {3,0};
	//半径
	radius_ = {30,30};
}

//更新
void Enemy::Update() { 
	position_.x += move_.x;
	if (position_.x > 1280 - radius_.x) {
		move_.x *= -1;
	}
	if (position_.x < radius_.x) {
		move_.x *= -1;
	}
}

//描画
void Enemy::Draw() {
	if (isAlive_ == true) {
		Novice::DrawEllipse(
	    int(position_.x), int(position_.y), int(radius_.x), int(radius_.y), 0.0f, BLUE,
	    kFillModeSolid);
	}
	
}

//デストラクタ
Enemy::~Enemy() {

}

