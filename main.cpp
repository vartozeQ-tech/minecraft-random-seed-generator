/*
Minecraft challenger by vartozeq
github:https://github.com/vartozeQ-tech?tab=repositories
license:GPL3
*/
#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

using namespace std;

void seed() {
	
	system("title Minecraft speedruner");

	srand(time(0));

	cout << "your new seed is: ";

	while (rand() %16) {                                                 
		
		cout << rand() % 9 + 1; //This function is responsible for randomly selecting numbers in the range 1-9 using the rand function

		system("color 1"); 
		Sleep(100);
		system("color 2");
		Sleep(100);
		system("color 3");
		Sleep(100);
		system("color 4");
		Sleep(100);
		system("color 5");
		Sleep(100);
		//this part is responsible for changing the colors using the system() function 
		} 
	
	Sleep(1000);

	cout << "\n";
    system("pause"); //this part stops the program from shutting down

}

void nick() {
	cout << "\nnickname:\nStart! GL HF";
	string nick;
	cin >> nick;
	system("pause");

	//This part is only for displaying the nickname in the console
}


int main() {
	seed();
	nick();
	}