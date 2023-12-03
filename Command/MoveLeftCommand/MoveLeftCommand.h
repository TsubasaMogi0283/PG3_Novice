#pragma once
#include "Command/ICommand.h"
class Player;

class MoveLeftCommand: public ICommand {
public:
	void Exec(Player& player) override;

	~MoveLeftCommand();
};
