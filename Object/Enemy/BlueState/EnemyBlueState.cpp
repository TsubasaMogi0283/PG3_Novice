#include "EnemyBlueState.h"
#include "Object/Enemy/Enemy.h"
#include "Input/InputManager.h"

void EnemyBlueState::Initialize() { 
	stayTime_ = 0; 
}

void EnemyBlueState::Update(Enemy* enemy) {
	stayTime_ += 1;
	enemy->SetColor(BLUE);

	if (stayTime_ > 60) {
		sceneNo_ = S_RED;
		
	}


}

void EnemyBlueState::Draw() { Novice::ScreenPrintf(0, 100, "Time:%d", stayTime_);

}
