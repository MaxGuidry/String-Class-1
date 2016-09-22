#include"Rooms.h"
#include<iostream>

Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, bool Empty,const char * Text) 
{
	m_EastDoor = EastDoor;
	m_WestDoor = WestDoor;
	m_NorthDoor = NorthDoor;
	m_SouthDoor = SouthDoor;
	m_Empty = Empty;
	m_Text = Text;
}

void Room::PrintInfo()
{
	std::cout << m_Text << std::endl;
}
