// ChineseChess.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once
#pragma execution_character_set("utf-8")

#include <iostream>
#include <vector>
#include <stack>

namespace NormChineseChess
{

	enum class Piece {
		Sentry, //出界
		Empty,	//空位

		// 红方棋子
		R_Rooks,	 //车
		R_Knights,	 //马
		R_Elephants, //相
		R_Mandarins, //仕
		R_General,	 //帅
		R_Cannons,	 //炮
		R_Pawns,	 //兵

		// 黑方棋子
		B_Rooks,	 //车
		B_Knights,	 //马
		B_Elephants, //象
		B_Mandarins, //士
		B_General,	 //将
		B_Cannons,	 //炮
		B_Pawns		 //卒
	};

	class Vec2
	{
		int x, y;
	};
	// 一着棋
	class Move
	{
		Vec2 from, to;
	};

	// 象棋棋盘
	class Board
	{
		// TODO: 棋盘的计算机表示
	public:
		// 在棋盘上应用一着棋，并返回被吃掉的棋子
		Piece Execute(Move);
		// 类似于Execute，但是反方向移动棋子，并把被吃掉的棋子放回原位
		void Rollback(Move, Piece);
	};

	enum class Status { Gaming,
		RedWin,
		BlackWin };

	// 象棋游戏
	class Game
	{
		Board board;

	public:
		Status GetStatus();
		// 棋盘横置，黑方在左，红方在右
		// X正方向向右，Y正方向向下
		// 开局时(0, 0)位置为黑方左车
		Piece GetPiece(Vec2 pos);

		// 下棋
		void Execute(Move move);
		// 悔棋
		void Retract();

		// 将棋语指令解析为Move
		Move ParseMove(std::string);
		// 将动作用棋语表示
		std::string SpeekMove(Move);
	};
}class CantMoveException : public std::exception
{
	const char *reason = "Cannot move like this";

public:
	const char *what() const throw()
	{
		return this->reason;
	}
};
enum class Direction
{
	FORWARD,	//前进趋势
	BACKWARD,   //后退趋势
	TRANSLATION //平移
};
enum class Rela_Pos
{
	NONE,
	FRONT,  //前面的
	CENTER, //中间的
	BACK	//后面的
};
struct Move
{
	Piece piece;
	Direction direction; //进退
	int length;
	//以下标识用于消歧义
	Rela_Pos relative_position; //前后
};
class MoveGenerate
{
	//根据棋子及指令，特化它的生成移动
public:
	void operator()(Move instruction, Piece type) throw()
	{
		switch (type)
		{
		case Piece::Sentry:
			/* code */
			break;

		default:
			break;
		}
	}
};
