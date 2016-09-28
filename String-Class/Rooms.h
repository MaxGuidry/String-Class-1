#pragma once

class Room
{
public:
	Room() {};
	Room(bool, bool, bool, bool, bool, const char *,bool,bool,bool,bool);
	Room(bool, bool, bool, bool, bool, char *, const char *);
	bool m_EastDoor;
	bool m_NorthDoor;
	bool m_SouthDoor;
	bool m_WestDoor;
	bool m_Empty;
	char * m_Item;
	bool openDoor();
	void PrintInfo();
	bool m_HasBossKey;
	bool m_HasTreasureKey;
	bool m_HasSword;
	bool m_HasEnemy;
private:

	const char * m_Text;
};