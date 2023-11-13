#pragma once

enum SCENE {
	TITLE,
	STAGE,
	CLEAR,
};

class IScene {
public:


	//初期化
	virtual void Initialize()=0;

	//更新
	virtual void Update()=0;

	//描画
	virtual void Draw()=0;

	//デストラクタ
	virtual ~IScene();

	int GetSceneNo();

protected:
	static int sceneNo_;


};
