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

void Player::MoveRight() {
	this->position_.x += move_.x;
	Novice::ScreenPrintf(0, 30, "Right");
}


void Player::MoveLeft() {
	this->position_.x -= move_.x;
	Novice::ScreenPrintf(0, 30, "Left");
}

//上
void Player::MoveUp() {
	this->position_.y -= move_.y;
	Novice::ScreenPrintf(0, 30, "Up");
}
//下
void Player::MoveDown() {
	this->position_.y += move_.y;
	Novice::ScreenPrintf(0, 30, "Down");
}

void Player::Update() {

	//移動
	//Move();


}

void Player::Draw() {
	//とりあえず丸で
	Novice::DrawEllipse(
	    int(position_.x), int(position_.y), int(radius_.x), int(radius_.y), 0.0f, WHITE, kFillModeSolid);


}

Player::~Player() {
	

}
