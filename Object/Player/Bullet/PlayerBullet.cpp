#include "PlayerBullet.h"
#include "Novice.h"

//コンストラクタ
PlayerBullet::PlayerBullet() {

}


//初期化
void PlayerBullet::Initialize(Vector2 position) { 
	//引数をここで設定
	position_ = position;

	radius_ = {10, 10};


}

//更新
void PlayerBullet::Update() {

	Vector2 move = {0, -4};
	position_.y += move.y;

	if (position_.y <-radius_.y) {
		isAlive_ = false;
	}


}

//描画
void PlayerBullet::Draw() {
	Novice::DrawEllipse(int(position_.x), int(position_.y), int(radius_.x), int(radius_.y), 0.0f, RED, kFillModeSolid);
}

//デストラクタ
PlayerBullet::~PlayerBullet() {

}

