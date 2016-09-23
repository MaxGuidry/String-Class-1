#include "Player.h"

Player::Player(char * Name,bool Sword,bool Key,bool BossKey,int x,int y)
{
	m_Name = Name;
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

