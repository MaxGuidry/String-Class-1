#pragma once

class Room
{
public:
	Room() {}
	Room(bool, bool, bool, bool, bool, const char *, bool, bool, bool, bool, bool, bool);
	Room(bool, bool, bool, bool, bool, const char *, bool, bool, bool, bool, bool, bool, bool,bool);
	bool m_EastDoor;
	bool m_NorthDoor;
	bool m_SouthDoor;
	bool m_WestDoor;
	bool m_Empty;
	void openDoor(Room);
	void PrintInfo();
	bool m_HasBossKey;
	bool m_HasTreasureKey;
	bool m_HasSword;
	bool m_HasEnemy;
	bool m_HasDeathButton;
	bool m_HasTrapHole;
	bool m_HiddenDoor;
	void printDatBoi();
	void printPepe();
	void printDoge();
	void printHarambe();
	void lockDoors();
	bool m_HasBoss;
	void printBoss();
private:
	const char * m_Text;
};