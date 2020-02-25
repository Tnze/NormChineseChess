#include "../core/Game.h"

using namespace std;
using namespace NormChineseChess;

void print_board(Game* g)
{
}

int main()
{
	cout << "Hello Chess." << endl;
	Game* g = new Game();
	// 双方棋手入场

	// 双方棋手轮流落子
	for (bool player = true; g->GetStatus() == Status::Gaming; player = !player) {
		Move m;
		if (player)
			m = Move(); // 红方
		else
			m = Move(); // 黑方

		g->Execute(m);
		print_board(g);
	}
	// 公布胜负
	if (g->GetStatus() == Status::RedWin)
		cout << "红方获胜!" << endl;
	else
		cout << "黑方获胜!" << endl;
	delete g;
	return 0;
}