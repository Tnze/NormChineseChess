#include "../core/Game.h"

using namespace std;
using namespace NormChineseChess;

int main()
{
	cout << "Hello Chess." << endl;
	Game* g = new Game();
	// ˫�������볡

	// ˫��������������
	for (bool player = true; g->GetStatus() == Status::Gaming; player = !player) {
		Move m;
		if (player)
			m = Move();// �췽
		else
			m = Move();


	}
	// ����ʤ��
	if (g->GetStatus() == Status::RedWin)
		cout << "�췽��ʤ!" << endl;
	else
		cout << "�ڷ���ʤ!" << endl;
	delete g;
	return 0;
}