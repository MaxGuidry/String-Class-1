#pragma once

class Room
{
public:
	Room() {};
	Room(bool, bool, bool, bool, bool,char *);
	
private:
	bool m_EastDoor;
	bool m_NorthDoor;
	bool m_SouthDoor;
	bool m_WestDoor;
	bool m_Empty;
	const char * m_Text;
};