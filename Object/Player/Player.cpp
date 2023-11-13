#include "Player.h"
#include "Input/InputManager.h"
#include "Novice.h"
#include "Bullet/PlayerBullet.h"

Player::Player() {
}

void Player::Initialize() {
	position_ = {600,300};
	move_ = {3,3};
	radius_ = {40, 40};
}


//移動
void Player::Move() {
	//右
	if ((InputManager::GetInstance()->IsPushKey(DIK_D) == true)||
		(InputManager::GetInstance()->IsPushKey(DIK_RIGHT) == true)) {
		position_.x += move_.x;
	}
	//左
	if ((InputManager::GetInstance()->IsPushKey(DIK_A) == true)||
		(InputManager::GetInstance()->IsPushKey(DIK_LEFT) == true)) {
		position_.x -= move_.x;
	}
	//上
	if ((InputManager::GetInstance()->IsPushKey(DIK_W) == true)||
		(InputManager::GetInstance()->IsPushKey(DIK_UP) == true)) {
		position_.y -= move_.y;
	}
	//下
	if ((InputManager::GetInstance()->IsPushKey(DIK_S) == true)||
		(InputManager::GetInstance()->IsPushKey(DIK_DOWN) == true)) {
		position_.y += move_.y;
	}
}


void Player::Update() {

	//移動
	Move();


	


}

void Player::Draw() {
	//とりあえず丸で
	Novice::DrawEllipse(
	    int(position_.x), int(position_.y), int(radius_.x), int(radius_.y), 0.0f, WHITE, kFillModeSolid);


}

Player::~Player() {
	

}
