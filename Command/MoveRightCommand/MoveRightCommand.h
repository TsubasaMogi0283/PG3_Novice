#pragma once
#include "Command/ICommand.h"
class Player;

class MoveRightCommand: public ICommand {
public:
	void Exec(Player& player) override;


};
