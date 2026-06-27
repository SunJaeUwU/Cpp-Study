#include <iostream>
using namespace std;

// [타입] [이름];

// char   1
// short  2
// int    4
// long long   8
// 문자 char , string


int hp;
int choice;

int main()
{

	// 비교연산 : == , != , < , <= , > , >=
	// 논리 연산 : ! , && , ||

	hp = 100;

	if (hp > 0)
	{
		cout << "살았습니다" << endl;	// 플레이어 생존
	}
	else
	{
		cout << "죽었습니다" << endl;   // 플레이어 사망
	}
	



	// 분기문 : if - else if - else

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




	// 분기문 : switch -> cace - default

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




	// 반복문 : for , while

	for (int i = 0; i < 3; i++)
	{

	}
}