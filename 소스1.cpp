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
//int main(void) { //����ȭ��
//	main_ snake;
//	system("color 7");
//	snake.draw_map();
//	snake.snake_move();
//	
//	return 0;
//}
//void main_::snake_move() { // �����Ӱ� �ھ����� ����
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
//		cout << size[A][H];
//		Key = _getch();
//		Key = _getch();
//		if (Key != 72 || Key != 224)
//			break;
//	}
//}
//void main_::apple_random() { //��� ���� ���� ���� �� ������ �Լ�
//	
//};
//void main_::apple_eat() { //����
//
//};
//void main_::exit() { //��������
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
//using namespace std;
//bool out_true(int Key,int integer_);
//class  main_ {
//private:
//	int len = 3;
//	int snakex[10];
//	int snakey[10];
//	int hx = 6;
//	int hy = 3;
//	int Key = 0;
//	char Map[20][20];
//public:
//	void snake_setting();
//	void snake_move();
//	void snake_move_up();
//	void snake_move_down();
//	void snake_move_right();
//	void snake_move_left();
//	void draw_map();
//};
//
//int main(void) {
//	main_ snake;
//	snake.snake_setting();
//	snake.draw_map();
//}
//void main_::snake_setting() {
//	snakex[0] = 5;
//	snakex[1] = 4;
//	snakex[2] = 3;
//
//	snakey[0] = 3;
//	snakey[1] = 3;
//	snakey[2] = 3;
//}
//
//void main_::snake_move() {
//	while (true)
//	{
//		Key = _getch();
//		Key = _getch();
//		switch (Key)
//		{
//		case UP:
//			main_::snake_move_up();
//		case LEFT:
//			break;;
//		case RIGHT:
//			break;
//		case DOWN:
//			main_::snake_move_down();
//		case PAUSE: //P
//			break;
//		case ESC:
//			break;
//		}
//	}
//}
//
//	void main_::draw_map()
//	{
//		system("cls");
//		memset(Map, ' ', 20 * 20 * sizeof(char));
//		for (int i = 0; i < 20; i++)
//		{
//			Map[0][i] = '0';
//			Map[i][0] = '0';
//			Map[19][i] = '0';
//			Map[i][19] = '0';
//
//		}
//
//		for (int i = 0; i < 20; i++)
//		{
//			for (int k = 0; k < 20; k++)
//				cout << Map[i][k];
//			cout << endl;
//		}
//		main_::snake_move();
//	}
//void main_::snake_move_up()	
//{
//	while (1)
//	{
//		for (int i = 1; i  <=len; i++)
//		{
//			snakex[i] = snakex[i - 1];
//			snakey[i] = snakey[i - 1];
//		}
//		snakey[0]++;
//	}
//}
//
//void main_::snake_move_down()
//{
//	int Key;
//	int integer = DOWN;
//	while (1)
//	{
//		for (int i = 1; i < len + 1; i++)
//		{
//			Key = _getch();
//			if (out_true(Key, integer) == true)
//			{
//
//				snakex[i] = snakex[i - 1];
//				snakey[i] = snakey[i - 1];
//			}
//			else
//				main_::snake_move();
//		}
//		snakey[0]  --;
//	}
//}
//
//void main_::snake_move_right()
//{
//	while (1)
//	{
//		for (int i = 1; i < len + 1; i++)
//		{
//			snakex[i] = snakex[i - 1];
//			snakey[i] = snakey[i - 1];
//		}
//		snakex[0]  ++;
//	}
//}
//void main_::snake_move_left()
//{
//	while (1)
//	{
//		for (int i = 1; i < len + 1; i++)
//		{
//			snakex[i] = snakex[i - 1];
//			snakey[i] = snakey[i - 1];
//		}
//		snakex[0]  --;
//	}
//}
//bool out_true(int Key,int integer_) {
//	if (Key != integer_)
//	{
//		return false;
//	}
//	else if(Key == integer_) {
//		return true;
//	}
//	else
//	{
//		return false;
//	}
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

#define SNAKE_MAX_LENGTH 10
#define MAP_BORDER_SIZE 20

using namespace std;

void init(); //���� ���� �Ӹ� �� �ʱ�ȭ
void poll_input(); // Ű�Է�
void update(int Key);  // ������Ʈ(����Ű ������ �����ϴ�  ��, ��� ���� ���)
void draw(); //������ ����Ʈ �ϱ� 
void shutdown(); // ���α׷� ����
bool out_true(int Key, int integer_); //������ ��������Ȯ�� ����Ű�� �Լ� ���࿩��

char Map[MAP_BORDER_SIZE][MAP_BORDER_SIZE] = { 0, }; //���� �ִ� ũ��
int head_x = 6; // �Ӹ�x ��ǥ
int head_y = 3;//�Ӹ�y ��ǥ
int snake_x[SNAKE_MAX_LENGTH]; //������ũ �� x ��ǥ 
int snake_y[SNAKE_MAX_LENGTH];//������ũ �� y��ǥ
int snake_len = 3; //������ũ �ʹ� ����
int key=0; //Ű �Է� ��

void init() {
	system("cls");
	memset(Map, ' ', MAP_BORDER_SIZE * MAP_BORDER_SIZE * sizeof(char));
	snake_x[0] = 6;
	snake_x[1] = 5;
	snake_x[2] = 4;
	snake_y[0] = 3;
	snake_y[2] = 3;
	snake_y[1] = 3;
	

	//�츸��� �ݺ���
	for (int i = 0; i < snake_len; i++)
	{
		Map[snake_y[i]][snake_x[i]] = '1'; 
	}


	// �� ����� �ݺ���
	for (int i = 0; i < MAP_BORDER_SIZE; i++)
	{
		Map[0][i] = '0';
		Map[i][0] = '0';
		Map[MAP_BORDER_SIZE-1][i] = '0';
		Map[i][MAP_BORDER_SIZE-1] = '0';
	}

}

//Ű �Է�
void poll_input() {
	key = _getch();
	key = _getch();
	//update(key);
}

//������Ʈ
void update(int Key) {
	//�� �̵� ���� 
	switch (Key)
	{
	case UP:
		
		while (out_true(Key,UP))
		{
			for (int i = snake_len+1; i > 0; i--)
			{
				snake_x[i] = snake_x[i + 1]; // �̰� �����ؾ��� �ι��� ���� �տ� �ϳ��� �ٲ� 
				snake_y[i] = snake_y[i + 1];
			}
			snake_y[0]  ++;
		}
	case LEFT:
		while (out_true(Key, LEFT))
		{
			for (int i = snake_len + 1; i > 0; i--)
			{
				snake_x[i] = snake_x[i + 1];
				snake_y[i] = snake_y[i + 1];
			}
			snake_x[0]  --;
		}
	case RIGHT:
		while (out_true(Key, RIGHT))
		{
			for (int i = snake_len + 1; i > 0; i--)
			{
				snake_x[i] = snake_x[i + 1];
				snake_y[i] = snake_y[i + 1];
			}
			snake_x[0]  ++;
		}
	case DOWN:
		while (out_true(Key, DOWN))
		{
			for (int i = snake_len + 1; i > 0; i--)
			{
				snake_x[i] = snake_x[i + 1];
				snake_y[i] = snake_y[i + 1];
			}
			snake_y[0]  --;
		}
	case PAUSE: //P
		break;
	case ESC: // ����
		break;
	}
}

//������
void draw() {
	for (int i = 0; i < MAP_BORDER_SIZE; i++)
	{
		for (int k = 0; k < MAP_BORDER_SIZE; k++)
			cout << Map[i][k];
		cout << endl;
	}
}

//Ű �� �� ���� Ȯ��
bool out_true(int Key,int integer_) {
	if (Key != integer_)
	{
		return false;
	}
	else if(Key == integer_) {
		return true;
	}
	else
	{
		return false;
	}
}
int main(void) {
	init(); //���� ���� �Ӹ� �� �ʱ�ȭ 

	while (true) {
		poll_input(); // ����Ű �Է�
		update(key);
		draw(); //������ 
	}

	//shutdown();
}