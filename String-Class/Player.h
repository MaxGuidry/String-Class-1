#pragma once

class Player
{
public:
	Player() {};
	Player(char*,bool,bool,bool,int,int);
	int moveNorth();
	int m_positionX;
	int m_positionY;
	int moveSouth();
	int moveEast();
	int moveWest();
private:
	char *m_Name;
	bool m_hasSword;
	bool m_hasTreasure;
	bool m_hasBossKey;
	
};