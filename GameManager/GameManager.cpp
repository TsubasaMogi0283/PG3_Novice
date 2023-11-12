#include "GameManager.h"
#include "Novice.h"
#include "Input/InputManager.h"

//コンストラクタ
GameManager::GameManager() {
	

}



void GameManager::ChangeScene(IScene* newGameScene) {
	//一度消してから次のシーンにいく
	delete currentGamaScene_;

	currentGamaScene_ = newGameScene;
	//今は言っているシーンが引数
	currentGamaScene_->Initialize(this);
}

//この関数でゲームループを呼び出す
void GameManager::Run() { 


	const char kWindowTitle[] = "LE2B_20_モギ_ツバサ";
	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	GameManager* gameManager = new GameManager();
	InputManager* inputManager_ = InputManager::GetInstance();

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	currentGamaScene_ = new TitleScene();
	currentGamaScene_->Initialize(this);
	inputManager_->Initialize();

	while (Novice::ProcessMessage() == 0) {

		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);



		//更新
		inputManager_->Update();
		currentGamaScene_->Update(this);

		//描画処理
		currentGamaScene_->Draw(this);

		//フレームの終了
		Novice::EndFrame();


		if (InputManager::GetInstance()->IsPushKey(DIK_ESCAPE)) {
			break;
		}

		

	}
	// ライブラリの終了
	Novice::Finalize();

}


//デストラクタ
GameManager::~GameManager() {

}