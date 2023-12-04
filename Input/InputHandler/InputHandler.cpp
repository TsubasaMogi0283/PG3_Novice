#include "InputHandler.h"

#include <Input/InputManager.h>

#include "Command/MoveRightCommand/MoveRightCommand.h"
#include "Command/MoveLeftCommand/MoveLeftCommand.h"
#include "Command/MoveUpCommand/MoveUpCommand.h"
#include "Command/MoveDownCommand/MoveDownCommand.h"


ICommand* InputHandler::HandleInput() {
	if (InputManager::GetInstance()->IsPushKey(DIK_D)) {
		return pressKeyD_;
	}
	if (InputManager::GetInstance()->IsPushKey(DIK_A)) {
		return pressKeyA_;
	}
	if (InputManager::GetInstance()->IsPushKey(DIK_W)) {
		return pressKeyW_;
	}
	if (InputManager::GetInstance()->IsPushKey(DIK_S)) {
		return pressKeyS_;
	}


	return nullptr;
} 

void InputHandler::AssignMoveLeftCommandToPressKeyA() { 
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;


}

void InputHandler::AssignMoveRightCommandToPressKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;


}

//上
void InputHandler::AssignMoveUpCommandToPressKeyW() {
	ICommand* command = new MoveUpCommand();
	this->pressKeyW_ = command;

}

//下
void InputHandler::AssignMoveDownCommandToPressKeyS() {
	ICommand* command = new MoveDownCommand();
	this->pressKeyS_ = command;

}


InputHandler::~InputHandler() {
}


