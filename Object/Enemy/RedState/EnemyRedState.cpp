#include "EnemyRedState.h"
#include "Object/Enemy/Enemy.h"

EnemyRedState::EnemyRedState() {}

void EnemyRedState::Initialize() {
	stayTime_ = 0; 
}

void EnemyRedState::Update(Enemy* enemy) {
	stayTime_ += 1;
	enemy->SetColor(RED);

	if (stayTime_ > 60) {
		sceneNo_ = S_BLUE;
		
	}
}

void EnemyRedState::Draw() {
}

EnemyRedState::~EnemyRedState() { Novice::ScreenPrintf(100, 30, "Red");

}
