#pragma once
#include "IScene.h"
#include "Object/Player/Player.h"
#include <Object/Enemy/Enemy.h>
#include "Object/Player/Bullet/PlayerBullet.h"

class StageScene :public IScene{
public:
	//コンストラクタ
	StageScene();

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//デストラクタ
	~StageScene();



private:
	Player* player_ = nullptr;
	Enemy* enemy_ = nullptr;


	std::list<PlayerBullet*> bullets_;

	float collisionDistance_ = 0.0f;

};
