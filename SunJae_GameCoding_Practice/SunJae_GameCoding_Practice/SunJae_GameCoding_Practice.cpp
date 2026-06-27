#include <iostream>
using namespace std;

// [타입] [이름];

// char   1
// short  2
// int    4
// long long   8

// 문자 char , string

// ==
// !=
// <
// <=
// >
// >=

// ! not
// && and
// || or

// if ( ) { }
// if - else



int hp;
int choice;

int main()
{
	hp = 100;

	if (hp > 0)
	{
		cout << "살았습니다" << endl;	// 플레이어 생존
	}
	else
	{
		cout << "죽었습니다" << endl;   // 플레이어 사망
	}
	



	// if - else if - else

	// 0 가위  1 바위  2 보

	choice = 1;
	
	if (choice == 0)
	{
		cout << "가위를 냈습니다" << endl;
	}
	else if (choice == 1)
	{
		cout << "바위를 냈습니다" << endl;
	}
	else if (choice == 2)
	{
		cout << "보를 냈습니다" << endl;
	}
	else
	{
		cout << "오류" << endl;
	}
	


	// switch - case - break
	choice = 3;

	switch (choice)
	{
		case 0:
			cout << "가위를 냈습니다" << endl;
			break;
		case 1:
			cout << "바위를 냈습니다" << endl;
			break;
		case 2:
			cout << "보를 냈습니다" << endl;
			break;
		default :
			cout << "오류" << endl;
			break;
	}
}