//#include <iostream>
//#include <windows.h>
//#include <string.h>
//#include <conio.h>
//#define LEFT 75
//#define RIGHT 77
//#define UP 72
//#define DOWN 80
//#define PAUSE 112
//#define ESC 27
//int A = 40;
//int B = 40;
//int C = 40;
//int D = 40;
//int E = 6;
//int F = 7;
//int G = 8;
//int H = 9;
//using namespace std;
//class main_ {
//private:
//	char len[20][20] = {  };
//	char  sn__len[20] = { };
//	int sn_len = 4;
//
//	int Key = 0;
//	char size[100][100];
//	
//public:
//	void snake_move();
//	void apple_eat();
//	void apple_random();
//	void exit();
//	void draw_map();
//	void snake_up();
//	void snake_down();
//	void snake_right();
//	void snake_left();
//	
//};
//
//void gotoxy(int x, int y);
//
//int main(void) { //메인화면
//	main_ snake;
//	system("color 7");
//	snake.draw_map();
//	snake.snake_move();
//	
//	return 0;
//}
//void main_::snake_move() { // 움직임과 박았을때 실행
//	while (true)
//	{
//		Key = _getch();
//		Key = _getch();
//		switch (Key)
//		{
//		case UP:
//			main_::snake_up();
//		case LEFT:
//			break;
//		case RIGHT:
//			break;
//		case DOWN:
//			break;
//		case PAUSE: //P
//			break;
//		case ESC:
//			break;
//		}
//	}
//};
//void main_::snake_up() {
//	while (Key = 72) {
//		A = A - 1;
//		size[A][H] = '1';
//		//cout << size[A][H];
//		Key = _getch();
//		Key = _getch();
//		if (Key != 72 || Key != 224)
//			break;
//	}
//}
//void main_::apple_random() { //사과 랜덤 으로 생성 및 먹을떄 함수
//	
//};
//void main_::apple_eat() { //먹음
//
//};
//void main_::exit() { //끝났을때
//	
//};
//void main_::draw_map() {
//	system("cls");
//	memset(size, ' ', 20*20 * sizeof(char));
//	memset(len, ' ', 20*20 * sizeof(char));
//	size[A][E] = '1';
//	size[B][F] = '1';
//	size[C][G] = '1';
//	size[D][H] = '1';
//
//	for (int i = 0; i < 20; i++) {
//		size[0][i] = '0';
//		size[i][0] = '0';
//		size[i][19] = '0';
//		size[19][i] = '0';
//	}
//	
//
//
//	for (int i = 0; i < 20; i++) {
//		for (int j = 0; j < 20; j++)
//		{
//			cout << size[i][j];
//		}
//		cout << endl;
//	}
//};
//
//void gotoxy(int x, int y)
//{
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
#include <iostream>
#include <windows.h>
#include <string.h>
#include <conio.h>
#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define PAUSE 112
#define ESC 27
using namespace std;
class  main_ {
private:
	int len = 3;
	int snakex[10];
	int snakey[10];
	int hx = 6;
	int hy = 3;
	int Key = 0;
	char Map[20][20];
public:
	void snake_setting();
	void snake_move();
	void snake_move_up();
	void draw_map();
};

int main(void) {
	main_ snake;
	snake.snake_setting();
	snake.draw_map();
}
void main_::snake_setting() {
	snakex[0] = 5;
	snakex[1] = 4;
	snakex[2] = 3;

	snakey[0] = 3;
	snakey[1] = 3;
	snakey[2] = 3;
}

void main_::snake_move() {
	while (true)
	{
		Key = _getch();
		Key = _getch();
		switch (Key)
		{
		case UP:
			main_::snake_move_up();
		case LEFT:
			break;;
		case RIGHT:
			break;
		case DOWN:
			break;
		case PAUSE: //P
			break;
		case ESC:
			break;
		}
	}
}

	void main_::draw_map()
	{
		system("cls");
		memset(Map, ' ', 20 * 20 * sizeof(char));
		for (int i = 0; i < 20; i++)
		{
			Map[0][i] = '0';
			Map[i][0] = '0';
			Map[19][i] = '0';
			Map[i][19] = '0';

		}

		for (int i = 0; i < 20; i++)
		{
			for (int k = 0; k < 20; k++)
				cout << Map[i][k];
			cout << endl;
		}
		main_::snake_move();
	}
void main_::snake_move_up()	
{
	while (1)
	{
		--hx;
		for (int i = 0; i < len; i++)
		{
			snakex[i] = snakex[i - 1];
		}
	}
}