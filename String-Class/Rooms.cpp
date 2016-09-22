#include"Rooms.h"

Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, bool Empty,const char * Text) 
{
	m_EastDoor = EastDoor;
	m_WestDoor = WestDoor;
	m_NorthDoor = NorthDoor;
	m_SouthDoor = SouthDoor;
	m_Empty = Empty;
	m_Text = Text;
}