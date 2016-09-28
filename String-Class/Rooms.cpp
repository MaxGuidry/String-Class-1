#include"Rooms.h"
#include<iostream>
#include<Windows.h>

Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, bool Empty, const char * Text, bool Key, bool BossKey, bool Sword, bool Enemy)
{
	m_EastDoor = EastDoor;
	m_WestDoor = WestDoor;
	m_NorthDoor = NorthDoor;
	m_SouthDoor = SouthDoor;
	m_Empty = Empty;
	m_Text = Text;
	m_HasTreasureKey = Key;
	m_HasBossKey = BossKey;
	m_HasSword = Sword;
	m_HasEnemy = Enemy;
}
Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, bool Empty, char * Item,const char * Text)
{
	m_EastDoor = EastDoor;
	m_WestDoor = WestDoor;
	m_NorthDoor = NorthDoor;
	m_SouthDoor = SouthDoor;
	m_Empty = Empty;
	m_Text = Text;
	m_Item = Item;
}

bool Room::openDoor()
{
	return false;
}

void Room::PrintInfo()
{
	for (int i = 0; m_Text[i] != '\0'; i++)
	{
		std::cout << m_Text[i];
		Sleep(18);
	}
	std::cout << std::endl;
	
}
