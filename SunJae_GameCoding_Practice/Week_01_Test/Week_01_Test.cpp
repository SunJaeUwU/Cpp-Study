#include <iostream>
using namespace std;


enum SRP { Scissors = 1, Rock = 2, Paper = 3 };



int main()
{

	// 별찍기
	/*int N;
	cin >> N;

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < N; i++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// 별찍기 응용
	/*int K;
	cin >> K;

	for (int a = 0; a < K; a++)
	{
		for (int b = 0; b <= a; b++)
		{
			cout << "*";
		}
		cout << endl;
	}*/
	






	// 구구단

	/*for (int j = 2; j <= 9; j++)
	{
		for (int i = 2; i <= 9; i++)
		{
			cout << j << " * " << i << " = " << j * i << endl;
		}
	}*/
	







	// 간단한 텍스트 전투 게임
	int round = 1;
	int hp = 100;
	int damage = 45;

	while (true)
	{
		hp -= damage;

		if (hp < 0)
		{
			hp = 0;
		}

		cout << "Round : " << round << " 몬스터 체력 : " << hp << endl;

		if (hp == 0)
		{
			cout << "몬스터 처치!" << endl;
			break;
		}

		if (round == 5)
		{
			cout << "제한 5라운드 달성으로 강제 종료" << endl;
			break;
		}

		round++;

	}








	// 가위 바위 보 게임

	srand(time(0));

	int roundnum = 1;

	while (roundnum <= 10)
	{
		cout << "현재 라운드는 " << roundnum << " 라운드 입니다! " << "가위(1) 바위(2) 보(3) 중에 골라주세요! " << endl;
		cout << "> ";
		
		// 사용자
		int value;
		cin >> value;
		
		// 컴퓨터
		int RandomNum = rand() % 3 + 1;


		if (value == 1)  // 가위
		{
			switch (RandomNum)
			{
				case Scissors:  // 가위
					cout << "가위(Player) vs 가위(Computer) : 비겼습니다!" << endl;
					break;
				case Rock:	 // 바위
					cout << "가위(Player) vs 바위(Computer) : 졌습니다!" << endl;
					break;
				case Paper:  // 보
					cout << "가위(Player) vs 보(Computer) : 이겼습니다!" << endl;
					break;
				default:  // 예외처리
					cout << "오류입니다." << endl;
					break;
			}
		}
		else if (value == 2) // 바위
		{
			switch (RandomNum)
			{
			case Scissors:  // 가위
				cout << "바위(Player) vs 가위(Computer) : 이겼습니다!" << endl;
				break;
			case Rock:	 // 바위
				cout << "바위(Player) vs 바위(Computer) : 비겼습니다!" << endl;
				break;
			case Paper:  // 보
				cout << "바위(Player) vs 보(Computer) : 졌습니다!" << endl;
				break;
			default:  // 예외처리
				cout << "오류입니다." << endl;
				break;
			}
		}
		else if (value == 3)  // 보
		{
			switch (RandomNum)
			{
			case Scissors:  // 가위
				cout << "보(Player) vs 가위(Computer) : 졌습니다!" << endl;
				break;
			case Rock:	 // 바위
				cout << "보(Player) vs 바위(Computer) : 이겼습니다!" << endl;
				break;
			case Paper:  // 보
				cout << "보(Player) vs 보(Computer) : 비겼습니다!" << endl;
				break;
			default:  // 예외처리
				cout << "오류입니다." << endl;
				break;
			}
		}
		else
		{
			cout << "오류입니다." << endl;
			break;
		}

		roundnum++;

		cout << endl;
		cout << endl;
	}
}