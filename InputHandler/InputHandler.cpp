#include "InputHandler.h"

#include <Input/InputManager.h>

#include "Command/MoveRightCommand/MoveRightCommand.h"
#include "Command/MoveLeftCommand/MoveLeftCommand.h"

ICommand* InputHandler::HandleInput() {
	if (InputManager::GetInstance()->IsPushKey(DIK_D)) {
		return pressKeyD_;
	}
	if (InputManager::GetInstance()->IsPushKey(DIK_A)) {
		return pressKeyA_;
	}

	return nullptr;
} 

void InputHandler::AssignMoveLeftCommandToPressKeyA() { 
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;


}

void InputHandler::AssignMoveRightCommandToPressKeyD() {
	//一応通っているっぽい
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;


}

InputHandler::~InputHandler() {
}


