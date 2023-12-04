#include "MoveDownCommand.h"


void MoveDownCommand::Exec(Player& player) { 
	player.MoveDown();
}