#include <iostream>
using namespace std;

enum PlayerType
{
	PT_None = 0,
	PT_Warrior = 1,
	PT_Archer = 2,
	PT_Mage = 3,
};

enum MonsterType
{
	MT_None = 0,
	MT_Slime = 1,
	MT_Orc = 2,
	MT_Skeleton = 3,
};

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

PlayerType playerType;
StatInfo playerStat;

MonsterType monsterType;
StatInfo monsterStat;





void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateRandomMonster();
void EnterBattle();
void WaitForNextKey();




int main()
{
	srand(time(0));
	EnterLobby();
}






void EnterLobby()
{
	while (true)
	{
		cout << "------------------------------" << endl;
		cout << " 로비에 입장했습니다! " << endl;
		cout << "------------------------------" << endl;

		// 플레이어 직업 선택
		SelectPlayer();

		cout << "------------------------------" << endl;
		cout << " (1) 필드 입장 (2) 게임 종료 " << endl;
		cout << "------------------------------" << endl;

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterField();
		}
		else
		{
			return;
		}
	}
}

void SelectPlayer()
{
	while (true)
	{
		cout << "------------------------------" << endl;
		cout << " 플레이어 직업을 선택하세요! " << endl;
		cout << "(1) 전사 (2) 궁수 (3) 마법사" << endl;
		cout << "선택: ";

		int choice;
		cin >> choice;

		system("cls");

		if (choice == PT_Warrior)
		{
			cout << "기사 생성중 . . . " << endl;
			playerStat.hp = 150;
			playerStat.attack = 10;
			playerStat.defence = 5;
			playerType = PT_Warrior;
			break;
		}

		else if (choice == PT_Archer)
		{
			cout << "궁수 생성중 . . . " << endl;
			playerStat.hp = 100;
			playerStat.attack = 15;
			playerStat.defence = 3;
			playerType = PT_Archer;
			break;
		}
		else if (choice == PT_Mage)
		{
			cout << "마법사 생성중 . . . " << endl;
			playerStat.hp = 80;
			playerStat.attack = 25;
			playerStat.defence = 0;
			playerType = PT_Mage;
			break;
		}
	}
}

void EnterField()
{
	system("cls");

	cout << "------------------------------" << endl;
	cout << " 필드에 입장했습니다! " << endl;
	cout << "------------------------------" << endl;

	cout << "[Player] Hp : " << playerStat.hp << " / ATT : " << playerStat.attack << " / DEF : " << playerStat.defence << endl << endl;

	// 몹 스폰
	CreateRandomMonster();

	while (true)
	{
		cout << "------------------------------" << endl;
		cout << "(1) 전투 (2) 도주" << endl;
		cout << "> ";

		int input;
		cin >> input;

		if (input == 1)
		{
			EnterBattle();

			if (playerStat.hp == 0)
				return;
			else if (monsterStat.hp == 0)
				return;
		}
		else
		{
			return;
		}
	}
}

void CreateRandomMonster()
{
	int randomChoice = 1 + (rand() % 3);

	switch (randomChoice)
	{
	case MT_Slime:
		cout << "슬라임 생성중 . . . ! ( HP:30 / ATT:2 / DEF:0)" << endl;
		monsterStat.hp = 30;
		monsterStat.attack = 2;
		monsterStat.defence = 0;
		break;
	case MT_Orc:
		cout << "오크 생성중 . . . ! ( HP:40 / ATT:10 / DEF:3)" << endl;
		monsterStat.hp = 40;
		monsterStat.attack = 10;
		monsterStat.defence = 3;
		break;
	case MT_Skeleton:
		cout << "스켈레톤 생성중 . . . ! ( HP:80 / ATT:15 / DEF:5)" << endl;
		monsterStat.hp = 80;
		monsterStat.attack = 15;
		monsterStat.defence = 5;
		break;
	}
}

void EnterBattle()
{
	while (true)
	{
		int damage = playerStat.attack - monsterStat.defence;
		if (damage < 0)
			damage = 0;

		// 선빵
		monsterStat.hp -= damage;
		if (monsterStat.hp < 0)
			monsterStat.hp = 0;

		cout << "몬스터 남은 체력 : " << monsterStat.hp << endl;

		if (monsterStat.hp == 0)
		{
			cout << "몬스터를 처치했습니다!" << endl << endl;
			WaitForNextKey();
			return;	
		}

		//몬스터의 반격
		damage = monsterStat.attack - playerStat.defence;
		if (damage < 0)
			damage = 0;

		playerStat.hp -= damage;
		if (playerStat.hp < 0)
			playerStat.hp = 0;

		cout << "플레이어의 남은 체력 : " << playerStat.hp << endl;

		if (playerStat.hp == 0)
		{
			cout << "당신은 사망했습니다 . . . Game Over" << endl;
			WaitForNextKey();
			return;
		}
	}
}

void WaitForNextKey()
{
	cout << "계속하려면 1을 눌러주세요" << endl;
	cout << "> ";

	int input;
	cin >> input;

	system("cls");

}