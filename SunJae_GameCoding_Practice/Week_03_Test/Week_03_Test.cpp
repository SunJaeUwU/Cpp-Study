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


void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateRandomMonster();
void EnterBattle();


PlayerType playerType;
int hp;
int attack;
int defence;

MonsterType monsterType;
int MT_hp;
int MT_attack;
int MT_defence;






int main()
{
	srand(time(0));
	EnterLobby();
	return 0;
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
	cout << "------------------------------" << endl;
	cout << " 플레이어 직업을 선택하세요! " << endl;
	cout << "(1) 전사 (2) 궁수 (3) 마법사" << endl;
	cout << "선택: ";

	int choice;
	cin >> choice;


	while (true)
	{
		if (choice == PT_Warrior)
		{
			cout << "기사 생성중 . . . " << endl;
			hp = 150;
			attack = 10;
			defence = 5;
			playerType = PT_Warrior;
			break;
		}

		else if (choice == PT_Archer)
		{
			cout << "궁수 생성중 . . . " << endl;
			hp = 100;
			attack = 15;
			defence = 3;
			playerType = PT_Archer;
			break;
		}
		else if (choice == PT_Mage)
		{
			cout << "마법사 생성중 . . . " << endl;
			hp = 80;
			attack = 25;
			defence = 0;
			playerType = PT_Mage;
			break;
		}
	}
}

void EnterField()
{
	cout << "------------------------------" << endl;
	cout << " 필드에 입장했습니다! " << endl;
	cout << "------------------------------" << endl;

	cout << "[Player] Hp : " << hp << " / ATT : " << attack << " / DEF : " << defence << endl;

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
		cout << " 슬라임 생성중 . . . ! ( HP:30 / ATT:2 / DEF:0)" << endl;
		MT_hp = 30;
		MT_attack = 2;
		MT_defence = 0;
		break;
	case MT_Orc:
		cout << " 오크 생성중 . . . ! ( HP:30 / ATT:2 / DEF:0)" << endl;
		MT_hp = 40;
		MT_attack = 10;
		MT_defence = 3;
		break;
	case MT_Skeleton:
		cout << " 스켈레톤 생성중 . . . ! ( HP:30 / ATT:2 / DEF:0)" << endl;
		MT_hp = 80;
		MT_attack = 15;
		MT_defence = 5;
		break;
	}
}

void EnterBattle()
{
	while (true)
	{
		int damage = attack - MT_defence;
		if (damage < 0)
			damage = 0;

		// 선빵
		MT_hp -= damage;
		if (MT_hp < 0)
			MT_hp = 0;

		cout << "몬스터 남은 체력 : " << MT_hp << endl;

		if (MT_hp == 0)
		{
			cout << "몬스터를 처치했습니다!" << endl;
			return;	
		}

		//몬스터의 반격
		damage = MT_attack - defence;
	}
}
