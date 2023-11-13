#pragma once
class Enemy;

class IEnemy {
	//初期化
	virtual void Initialize(Enemy* gamaManager)=0;

	//更新
	virtual void Update(Enemy* gamaManager)=0;

	//描画
	virtual void Draw(Enemy* gamaManager)=0;

	//デストラクタ
	virtual ~IEnemy();

};
