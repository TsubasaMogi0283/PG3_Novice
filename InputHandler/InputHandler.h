#pragma once
#include <Command/ICommand.h>

class InputHandler {
public:
	ICommand* HandleInput();

	void AssignMoveLeftCommandToPressKeyA();
	void AssignMoveRightCommandToPressKeyD();

	~InputHandler();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;




};
