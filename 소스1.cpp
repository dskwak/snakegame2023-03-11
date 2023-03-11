#include <iostream>
#include <windows.h>
#include <string.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define PAUSE 112
#define ESC 27
using namespace std;
class main_ {
private:
	int s_len = 4;
	char size[100][100];
	
public:
	void snake_move();
	void apple_eat();
	void apple_random();
	void exit();
	void draw_map();
};

int main(void) { //메인화면
	main_ snake;
	system("color 7");
	snake.draw_map();

	
	return 0;
}
void main_::snake_move() { // 움직임과 박았을때 실행
	
};
void main_::apple_random() { //사과 랜덤 으로 생성 및 먹을떄 함수
	
};
void main_::apple_eat() { //먹음

};
void main_::exit() { //끝났을때
	
};
void main_::draw_map() {
	system("cls");
	memset(size, ' ', 100 * 100 * sizeof(char));

	
	for (int i = 0; i < 100; i++) {
		size[0][i] = '0';
		size[i][0] = '0';
		size[i][99] = '0';
		size[99][i] = '0';
	}
	


	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++)
		{
			cout << size[i][j];
		}
		cout << endl;
	}

	
};