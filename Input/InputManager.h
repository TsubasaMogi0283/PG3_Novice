#pragma once

//ここでDirectXInputのバージョン設定をする
#define DIRECTINPUT_VERSION	0x0800
#include "WinApp.h"
#include <dinput.h>
#include <Xinput.h>
#include <wrl.h>
using namespace Microsoft::WRL;


#include "Input/Mouse/MouseInformation.h"
#include <cstdint>

#pragma comment(lib,"dinput8.lib")
#pragma comment(lib,"dxguid.lib")
#pragma comment(lib,"xinput.lib")




class InputManager {
private:

	//コンストラクタ
	InputManager();
	
	//デストラクタ
	~InputManager();

public:
	//シングルインスタンスにするための関数
	
	//コピーコンストラクタ禁止
	InputManager(const InputManager& input) = delete;

	//代入演算子を無効にする
	InputManager& operator=(const InputManager& input) = delete;

	//シングルインスタンス
	static InputManager* GetInstance();


public:

	void Initialize();

	void Update();


#pragma region キーボード
	//Push状態
	bool IsPushKey(uint8_t keyNumber);

	//Trigger状態
	bool IsTriggerKey(uint8_t keyNumber);

	//Releaseいるかな・・・
	//必要になったら追加する

#pragma endregion

#pragma region マウス

	//intがいいのかな
	//Noviceではint32_tだった
	//Push状態
	bool IsPushMouse(int32_t keyNumber);

	//Trigger状態
	bool IsTriggerMouse(int32_t keyNumber);

#pragma endregion

#pragma region コントローラー

	bool GetJoystickState(XINPUT_STATE& state);


	bool IsPushLeft(XINPUT_STATE& state);
	bool IsPushRight(XINPUT_STATE& state);




#pragma endregion
	

	

	

private:


	//DirectInputの初期化
	ComPtr<IDirectInput8> directInput_ = nullptr;

	//キーボードデバイスの生成
	ComPtr<IDirectInputDevice8> keyboard_ = nullptr;
	//マウスのデバイスを生成
	ComPtr<IDirectInputDevice8> mouseDevice_ = nullptr;

	//全キーの入力状態を取得する
	BYTE preKey_[256] = {};
	BYTE currentKey_[256] = {};

	//マウスの入力状態を取得
	DIMOUSESTATE currentMouse_ = {};
	DIMOUSESTATE preMouse_ = {};


	//コントローラー
	XINPUT_STATE state_{};




};

