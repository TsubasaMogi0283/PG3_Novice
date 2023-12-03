#include "Enemy.h"
#include <Novice.h>
#include <memory>
#include "BlueState/EnemyBlueState.h"
#include "RedState/EnemyRedState.h"

//初期化
Enemy::Enemy() {
	sceneArr_[S_BLUE] = std::make_unique<EnemyBlueState>();
	sceneArr_[S_RED] = std::make_unique<EnemyRedState>();
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
	//シーンのチェック
	preSceneNo_ = currentSceneNo_;
	currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();
	if (preSceneNo_ != currentSceneNo_) {
		sceneArr_[currentSceneNo_]->Initialize();
	}
	
	
	sceneArr_[currentSceneNo_]->Update(this);

	



}

//描画
void Enemy::Draw() {
	//描画処理
	sceneArr_[currentSceneNo_]->Draw();

	if (isAlive_ == true) {
		Novice::DrawEllipse(
	    int(position_.x), int(position_.y), int(radius_.x), int(radius_.y), 0.0f, color_,
	    kFillModeSolid);
	}
	
}

//デストラクタ
Enemy::~Enemy() {

}

