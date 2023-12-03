#include "MoveLeftCommand.h"

#include "Object/Player/Player.h"

void MoveLeftCommand::Exec(Player& player) { 
	player.MoveLeft(); }

MoveLeftCommand::~MoveLeftCommand() {

}
