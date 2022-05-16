// шаблон проекта с++
#include<iostream>
#include<conio.h>
#include"Windows.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n;
	//задача

	char sym;
	int timer = 0;

	while (true) {

		if (_kbhit()) {
			sym = _getch();
			cout << sym << endl;
			switch (sym) {
			case 'w': case 'W': system("cls"); cout << "UP\n"; break;
			case 'a': case 'A': system("cls"); cout << "LEFT\n"; break;
			case 's': case 'S': system("cls"); cout << "DOWN\n"; break;
			case 'd': case 'D': system("cls"); cout << "RIGHT\n"; break;
			}

		}
		
		Sleep(100);
		timer += 100;
		if (timer % 1000 == 0) {
			cout << ".\n";
			timer = 0;
		}
	}







	return 0;
}