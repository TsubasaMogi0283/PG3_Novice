#pragma once
enum ENEMY_STATE {
	S_BLUE,
	S_RED,
};

class Enemy;

class IEnemy {

public:

	//初期化
	virtual void Initialize()=0;

	//更新
	virtual void Update(Enemy* enemy)=0;

	//描画
	virtual void Draw()=0;

	//デストラクタ
	virtual ~IEnemy(){};

	int GetSceneNo();

protected:
	static int sceneNo_;
	

};
