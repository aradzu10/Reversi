/*
Name: Arad Zulti
ID: 315240564
*/

#include "Player.h"

Player::Player(Checker color, const BoardManager& board_, Graphic* graphic_) : player_color(color), board(board_), graphic(graphic_) {
}

Player::~Player() {
}

Point Player::GetPointFromPlayer() {
	return Point(-1, -1);
}

Point Player::PointIsntAvialabe() {
	return Point(-1, -1);
}