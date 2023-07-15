#include <iostream>
#include <windows.h>
#include <string.h>
#include <time.h>
#include <iomanip>
#include <map>
#include <random>
#include <conio.h>
#include <Windows.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define PAUSE 112
#define ESC 27

#define SNAKE_MAX_LENGTH 10
#define MAP_BORDER_SIZE 20

using namespace std;

void init(); //뱀의 꼬리 머리 맵 초기화
void poll_input(); // 키입력
void update(int Key);  // 업데이트(방향키 누르면 실행하는  것, 사과 랜덤 등등)
void draw(); //렌더링 프린트 하기 
void shutdown(); // 프로그램 종료
bool out_true(int Key, int integer_); //참인지 거짓인지확인 방향키와 함수 실행여부

char Map[MAP_BORDER_SIZE][MAP_BORDER_SIZE] = { 0, }; //맵의 최대 크기
int head_x = 6; // 머리x 좌표
int head_y = 3;//머리y 좌표
int snake_x[SNAKE_MAX_LENGTH]; //스네이크 총 x 좌표 
int snake_y[SNAKE_MAX_LENGTH];//스네이크 총 y좌표
int snake_len = 3; //스네이크 초반 길이
int key = 0; //키 입력 값
char blank[20][20] = { 0, };
int applex = 0;
int appley = 0;
char apple[20][20] = { 0, };

void init() {
	system("cls");
	memset(Map, ' ', MAP_BORDER_SIZE * MAP_BORDER_SIZE * sizeof(char));
	snake_x[0] = 6;
	snake_x[1] = 5;
	snake_x[2] = 4;
	snake_y[0] = 3;
	snake_y[2] = 3;
	snake_y[1] = 3;
	blank[snake_len - 1][snake_len - 1] = ' ';
	srand((unsigned int)time(NULL));
	//뱀만들기 반복문
	for (int i = 0; i < snake_len; i++)
	{
		Map[snake_y[i]][snake_x[i]] = '1';
	}
	// 맵 만들기 반복문
	for (int i = 0; i < MAP_BORDER_SIZE; i++)
	{
		for (int k = 0; k < MAP_BORDER_SIZE; k++) {
			Map[i][k] = ' ';
		}
	}
	for (int i = 0; i < MAP_BORDER_SIZE; i++)
	{
		Map[0][i] = '0';
		Map[i][0] = '0';
		Map[MAP_BORDER_SIZE - 1][i] = '0';
		Map[i][MAP_BORDER_SIZE - 1] = '0';
	}
	// 사과 만들기
	Map[10][10] = '2';
}
void gotoxy(int x, int y)

{

	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
//키 입력
void poll_input() {
	key = _getch();
	key = _getch();
	//update(key);
}

//업데이트
void update() {
	//뱀 이동 관련 

	switch (key)
	{
	case UP:
		for (int i = snake_len - 1; i > 0; i--)
		{
			snake_x[i] = snake_x[i - 1];
			snake_y[i] = snake_y[i - 1];
		}
		--head_y;
		snake_x[0] = head_x;
		snake_y[0] = head_y;

		
		break;
	case LEFT:
		for (int i = snake_len + 1; i > 0; i--)
		{
			snake_x[i] = snake_x[i - 1];
			snake_y[i] = snake_y[i - 1];
		}
		--head_x;
		snake_x[0] = head_x;
		snake_y[0] = head_y;

		
		break;
	case RIGHT:

		for (int i = snake_len + 1; i > 0; i--)
		{
			snake_x[i] = snake_x[i - 1];
			snake_y[i] = snake_y[i - 1];
		}

		
		++head_x;
		snake_x[0] = head_x;
		snake_y[0] = head_y;
		
		break;
	case DOWN:
		for (int i = snake_len + 1; i > 0; i--)
		{
			snake_x[i] = snake_x[i - 1];
			snake_y[i] = snake_y[i - 1];
		}
		
		++head_y;
		snake_x[0] = head_x;
		snake_y[0] = head_y;

		break;
	case PAUSE: //P
		break;
	case ESC: // 종료
		break;
	}
}


//렌더링
void draw() {
	
	//Map[MAP_BORDER_SIZE][MAP_BORDER_SIZE] = { 0, };

	
	
	for (int i = 0; i < snake_len; i++) {
		if (Map[snake_x[i]][snake_y[i]] == '2') {
			applex = rand() % 20;
			appley = rand() % 20;
			if (Map[applex][appley] == '0') {
				while (Map[applex][appley] == ' ') {
					applex = rand() % 20;
					appley = rand() % 20;
				}
			}
			Map[applex][appley] = '2';

		}
	}
	for (int i = 0; i < snake_len; i++)
	{
		Map[snake_y[i]][snake_x[i]] = '1';
	}
	for (int i = 0; i < MAP_BORDER_SIZE; i++)
	{
		for (int k = 0; k < MAP_BORDER_SIZE; k++) {
			cout << Map[i][k];
		}
		cout << endl;
	}
}

//키 값 참 거짓 확인
bool out_true(int Key, int integer_) {
	if (Key != integer_)
	{
		return false;
	}
	else if (Key == integer_) {
		return true;
	}
	else
	{
		return false;
	}
}
int main(void) {
	init(); //뱀의 꼬리 머리 맵 초기화 

	while (true) {
		draw(); //렌더링 
		poll_input(); // 방향키 입력
		update();
		Sleep(200);
		system("cls");
	}

	//shutdown();
}