#pragma once


//前方宣言
class GameManager;

class IScene {
public:


	//初期化
	virtual void Initialize(GameManager* gamaManager)=0;

	//更新
	virtual void Update(GameManager* gamaManager)=0;

	//描画
	virtual void Draw(GameManager* gamaManager)=0;

	//デストラクタ
	virtual ~IScene();




};
