#include "Game.h"

namespace NormChineseChess
{
	Status Game::GetStatus()
	{
		return Status::Gaming;
	}

	Piece Game::GetPiece(Vec2 pos)
	{
		return Piece::Empty;
	}

	void Game::Execute(Move m)
	{
		Piece eatten = board.Execute(m);
		// TODO：Record for retract
	}

	void Game::Retract()
	{
	}
}