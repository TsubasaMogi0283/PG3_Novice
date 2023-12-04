#pragma once
#include "Command/ICommand.h"
class Player;

class MoveDownCommand : public ICommand {
public:
	void Exec(Player& player) override;

};
