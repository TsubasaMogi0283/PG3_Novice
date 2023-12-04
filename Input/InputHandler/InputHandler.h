#pragma once
#include <Command/ICommand.h>

class InputHandler {
public:
	ICommand* HandleInput();

	//右
	void AssignMoveLeftCommandToPressKeyA();
	//左
	void AssignMoveRightCommandToPressKeyD();
	//上
	void AssignMoveUpCommandToPressKeyW();
	//下
	void AssignMoveDownCommandToPressKeyS();



	~InputHandler();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
	ICommand* pressKeyW_;
	ICommand* pressKeyS_;




};
