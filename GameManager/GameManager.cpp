#include "GameManager.h"
#include "Novice.h"

//コンストラクタ
GameManager::GameManager() { 
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();


	
}



//この関数でゲームループを呼び出す
int GameManager::Run() { 

	const char kWindowTitle[] = "LE2B_20_モギ_ツバサ";
	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);
	gameManager = new GameManager();

	inputManager_ = InputManager::GetInstance();
	inputManager_->Initialize();

	
	// キー入力結果を受け取る箱
	//char keys[256] = {0};
	//char preKeys[256] = {0};

	//state_ = new TitleScene();
	//state_->Initialize();
	

	while (Novice::ProcessMessage() == 0) {

		Novice::BeginFrame();

		// キー入力を受け取る
		//memcpy(preKeys, keys, 256);
		//Novice::GetHitKeyStateAll(keys);

		//シーンのチェック
		preSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		if (preSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Initialize();
		}





		//更新
		inputManager_->Update();
		//state_->Update();
		sceneArr_[currentSceneNo_]->Update();

		//描画処理
		//state_->Draw();
		sceneArr_[currentSceneNo_]->Draw();

		//フレームの終了
		Novice::EndFrame();


		if (InputManager::GetInstance()->IsPushKey(DIK_ESCAPE)) {
			break;
		}

		

	}

	return 0;
	

}


//デストラクタ
GameManager::~GameManager() {
	// ライブラリの終了
	Novice::Finalize();
}