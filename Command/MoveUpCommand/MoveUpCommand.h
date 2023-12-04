#pragma once
#include "Command/ICommand.h"
class Player;

class MoveUpCommand: public ICommand  {
public:
	void Exec(Player& player) override;


};
