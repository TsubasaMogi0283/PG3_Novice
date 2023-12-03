#pragma once
#include "Object/Enemy/IEnemy/IEnemy.h"

class Enemy;

class EnemyBlueState :public IEnemy{
public:
	//初期化
	void Initialize()override;

	//更新
	void Update(Enemy* enemy)override;

	//描画
	void Draw()override;

	//デストラクタ
	~EnemyBlueState(){};


private:
	Enemy* enemy_ = nullptr;
	int stayTime_ = 0;
};
