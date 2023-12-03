#pragma once
#include "Object/Enemy/IEnemy/IEnemy.h"
#include "Novice.h"
class Enemy;


class EnemyRedState :public IEnemy{
public:
	EnemyRedState();

	void Initialize() override;

	void Update(Enemy* enemy) override;

	void Draw() override;

	~EnemyRedState();

private:
	int stayTime_ = 0;
};
