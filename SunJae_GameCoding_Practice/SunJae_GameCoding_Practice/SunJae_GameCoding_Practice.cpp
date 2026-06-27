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
// if - else if - else

int hp;

int main()
{
	hp = 100;

	if (hp <= 0)
	{
		// 플레이어 사망
		cout << "죽었습니다" << endl;
		cout << "살았습니다" << endl;
	}
}