#pragma once
#include "Object/Player/Player.h"

class Player;

class ICommand {
public:

	virtual void Exec(Player& player) = 0;

	virtual ~ICommand(){};


private:



};
