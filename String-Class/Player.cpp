#include "Player.h"
#include<iostream>
#include<Windows.h>
Player::Player(bool Sword, bool Key, bool BossKey, int x, int y)
{
	m_hasSword = Sword;
	m_hasTreasure = Key;
	m_hasBossKey = BossKey;
	m_positionX = x;
	m_positionY = y;
}

int Player::moveWest()
{
	m_positionX--;
	return m_positionX;
}

int Player::moveEast()
{
	m_positionX++;
	return m_positionX;
}

int Player::moveSouth()
{
	m_positionY++;
	return m_positionY;
}

int Player::moveNorth()
{
	m_positionY--;
	return m_positionY;
}

void Player::setPrevious(int tempX, int tempY)
{
	m_PreviousX = tempX;
	m_PreviousY = tempY;
}

char * Player::Response()
{
	char PlayerResponse[255];
	std::cin.getline(PlayerResponse, 255);
	system("cls");
	return PlayerResponse;
}

int Player::CheckResponse(MyString Answer, Room Rooms[][5])
{
	if (Answer.compare("help") == true)
	{
		std::cout << "To move type in \"move\" and then the direction you want to move... ex-> \"move east\"\n";
		std::cout << "At any time if you want to return to the previous room type \"go back\"\n";
		std::cout << "If you encounter an enemy type\"fight\" to attack it.\n";
		std::cout << "Other words that could be useful to try at certain times are \"grab\" \"pickup\" \"check\" \"press\" \"go down\" \"drink\"\n\n";
		Rooms[m_positionY][m_positionX].PrintInfo();
		CheckResponse(Response(), Rooms);
	}
	else if (Answer.findSubString("move") == true)
	{
		if (Answer.findSubString("east") == true)
		{
			if (Rooms[m_positionY][m_positionX].m_EastDoor == false)
			{
				std::cout << "Are you retarded? Try again." << std::endl;
				CheckResponse(Response(), Rooms);
			}
			else
			{
				moveEast();
			}
		}
		else if (Answer.findSubString("south") == true)
		{
			if (Rooms[m_positionY][m_positionX].m_SouthDoor == false)
			{
				std::cout << "Are you retarded? Try again." << std::endl;
				CheckResponse(Response(), Rooms);
			}
			else
			{
				moveSouth();
			}
		}
		else if (Answer.findSubString("west") == true)
		{
			if (Rooms[m_positionY][m_positionX].m_WestDoor == false)
			{
				std::cout << "Are you retarded? Try again." << std::endl;
				CheckResponse(Response(), Rooms);
			}
			else
			{
				moveWest();
			}
		}
		else if (Answer.findSubString("north") == true)
		{
			if (Rooms[m_positionY][m_positionX].m_NorthDoor == false)
			{
				std::cout << "Are you retarded? Try again." << std::endl;
				CheckResponse(Response(), Rooms);
			}
			else
			{
				moveNorth();
			}
		}
	}
	else if (Answer.findSubString("grab") == true || Answer.findSubString("pickup") == true)
	{
		if (Answer.findSubString("key") && Rooms[m_positionY][m_positionX].m_HasTreasureKey == true)
		{
			std::cout << "You picked up the treasure key." << std::endl;

			m_hasTreasure = true;
		}
		else if (Answer.findSubString("sword") && Rooms[m_positionY][m_positionX].m_HasSword == true)
		{
			std::cout << "You picked up the shining shortsword." << std::endl;
			m_hasSword = true;
		}
		else if (Answer.findSubString("key") && Rooms[m_positionY][m_positionX].m_HasBossKey == true)
		{
			std::cout << "You picked up the key to the boss room." << std::endl;

			m_hasBossKey = true;
			Rooms[3][2].m_SouthDoor = true;
		}
	}
	else if (Answer.findSubString("fight") && (Rooms[m_positionY][m_positionX].m_HasEnemy == true || Rooms[m_positionY][m_positionX].m_HasBoss == true))
	{
		if (Rooms[m_positionY][m_positionX].m_HasBoss == true && m_hasSword == true)
		{
			Rooms[m_positionY][m_positionX].m_HasBoss = false;
			return 1;
		}
		if (m_hasSword == false)
		{
			std::cout << "You charged forward and were decimated.\n\nGAME OVER" << std::endl;
			Sleep(2000);
			return -1;
		}
		else
		{
			std::cout << "You stabbed the creature in the chest and killed it.\nWhat will you do?";
			Rooms[m_positionY][m_positionX].m_HasEnemy = false;
			Rooms[m_positionY][m_positionX].openDoor(Rooms[m_positionY][m_positionX]);
		}

	}
	else if (Answer.findSubString("press") && Rooms[m_positionY][m_positionX].m_HasDeathButton == true)
	{
		std::cout << "You pressed the button and spikes shot out from in front of you impaling you in 50 different places...\n\nGAMEOVER" << std::endl;
		Sleep(2000);
		return -1;
	}
	else if ((Answer.findSubString("go down") || Answer.findSubString("jump down") || Answer.findSubString("down")) && Rooms[m_positionY][m_positionX].m_HasTrapHole == true)
	{
		std::cout << "You went down into the hole and landed on a bed of spikes...\n\nGAME OVER" << std::endl;
		Sleep(2000);
		return -1;
	}
	else if ((Answer.findSubString("drink") || Answer.findSubString("eat")) && m_positionY == 4 && m_positionX == 4)
	{
		std::cout << "You drank the strange liquid and you were teleported to a random room." << std::endl;
		do
		{
			m_positionX = rand() % 5;
			m_positionY = rand() % 5;
		} while (Rooms[m_positionY][m_positionX].m_Empty == false);
	}
	else if ((Answer.findSubString("check") || Answer.findSubString("open")) && Rooms[m_positionY][m_positionX].m_HiddenDoor == true)
	{
		if (Answer.findSubString("crack"))
		{
			std::cout << "You managed to open a secret door.\n";
			moveSouth();
		}
	}
	else if (Answer.findSubString("go back") || Answer.findSubString("back"))
	{
		m_positionX = m_PreviousX;
		m_positionY = m_PreviousY;
	}
	else if (Answer.findSubString("open") && m_positionY == 1 && m_positionX == 1)
	{
		if (m_hasTreasure == true)
		{
			std::cout << "You opened the treasure chest and it was completely empty...\n";
		}
		else
		{
			std::cout << "You need the key.\n";
		}
	}
	else
	{
		std::cout << "Are you retarded? Try again." << std::endl;
		CheckResponse(Response(), Rooms);
	}
	return 0;
}
