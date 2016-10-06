#include <iostream>
#include "MyString.h"
#include "Rooms.h"
#include"Player.h"
#include<Windows.h>
#include<time.h>

int main()
{
	std::cout << "Welcome to: Meme Dungeon.\nTo move around type things like \"move east\" or \"move north\"\nIf at any time you need help just type \"help\""<< std::endl;
	srand(time(NULL));
	//TODO stop info from printing after an action is performed
	bool isGameOver = false;
	Player PlayerOne = Player( 0, 0, 0, 0, 0);
	Room Room1 = Room(1, 0, 0, 1, 1, "The room you are in doors to the east and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room2 = Room(1, 1, 0, 0, 1, "The room you are in has doors to the east and west. \nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room3 = Room(1, 1, 0, 1, 0, "you notice a big red button on the wall.\nThere are doors to the east, west and south.\nWhat will you do?", 0, 0, 0, 0, 1, 0);
	Room Room4 = Room(1, 1, 0, 1, 1, "the room you are in has doors to the east, west and south.\nYou smell fresh air coming from the east.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room5 = Room(0, 1, 0, 0, 0, "the room you are in has only the door behind you and a dark hole in the ground,\nLooking down the hole you see nothing, but you can smell the fresh air.\nWhat will you do?", 0, 0, 0, 0, 0, 1);
	Room Room6 = Room(1, 0, 1, 1, 1, "the room you are in has doors to the east, north and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room7 = Room(0, 1, 0, 0, 0, "you see a large chest with lock on it.\nThere is only a door behind you to the west.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room8 = Room(0, 0, 1, 1, 1, "the room you are in has doors to the north and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room9 = Room(1, 0, 1, 1, 0, "you are frozen with fear when you the rarest Pepe staring at you.\nThere are doors to the east, north and south , but the Pepe is blocking the way.\nWhat will you do?", 0, 0, 0, 1, 0, 0);
	Room Room10 = Room(0, 1, 0, 0, 0, "the room you are in only has a door to the west where you came from.\nYou notice a key on the ground in front of you.\nWhat will you do?", 1, 0, 0, 0, 0, 0);
	Room Room11 = Room(1, 0, 1, 1, 1, "the room you are in has doors to the east,north and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room12 = Room(1, 1, 0, 1, 0, "you are frozen with fear when you see the fantastic Doge staring at you and licking its lips.\nThere are doors to the east, north and south , but the Doge is blocking the way.\n", 0, 0, 0, 1, 0, 0);
	Room Room13 = Room(1, 1, 1, 0, 1, "the room you are in has doors to the east, west and north.\nThe eastern door is closed and has some strange markings on it.\nWhat will you do?", 0, 0, 0, 0, 0, 0);//TODO COME BACK TO THIS SINCE EAST DOOR IS A PUZZLE DOOR
	Room Room14 = Room(1, 1, 1, 0, 0, "the room you are in has doors to the east, west and north.\nThere is a shortsword on the ground.\nWhat will you do?", 0, 0, 1, 0, 0, 0);
	Room Room15 = Room(0, 1, 0, 1, 0, "you are frozen with fear when you see Harambe the Great looking down on you.\nwThere are doors to the west and south.\nWhat will you do?", 0, 0, 0, 1, 0, 0);
	Room Room16 = Room(1, 0, 1, 0, 1, "the room you are in has doors to the east and north.\nYou notice a large crack in the south wall.\nWhat will you do?", 0, 0, 0, 0, 0, 0, 1,0);
	Room Room17 = Room(1, 1, 1, 1, 1, "the room you are in has doors on every side.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room18 = Room(1, 1, 0, 0, 1, "the room you are in has doors to the east, west and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room19 = Room(1, 1, 0, 1, 1, "the room you are in has doors to the east, west and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room20 = Room(0, 1, 1, 1, 1, "the room you are in has doors to the west, north and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room21 = Room(0, 0, 1, 0, 0, "you enter through the secret door and find...\n", 0, 0, 0, 0, 0, 0);//TODO Make something funny and dumb happen here
	Room Room22 = Room(0, 0, 1, 0, 0, "you see a large key on the ground.\nThere is only a door to the north.\nWhat will you do?", 0, 1, 0, 0, 0, 0);
	Room Room23 = Room(0, 0, 1, 0, 0, "the room and see the boss ", 0, 0, 0, 1, 0, 0,0,1);//TODO name or describe boss here
	Room Room24 = Room(1, 0, 1, 0, 1, "the room you are in has doors to the east and north.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room25 = Room(0, 1, 1, 0, 0, "You see a large pool of swirling blue liquid.\nThe glow of the liquid entices you.\nThere are doors to the north and west.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Rooms[5][5] =
	{
		{Room1,Room2,Room3,Room4,Room5},
		{Room6,Room7,Room8,Room9,Room10},
		{Room11,Room12,Room13,Room14,Room15},
		{Room16,Room17,Room18,Room19,Room20},
		{Room21,Room22,Room23,Room24,Room25}
	};
	Room OriginalCopy[5][5] =
	{
		{ Room1,Room2,Room3,Room4,Room5 },
		{ Room6,Room7,Room8,Room9,Room10 },
		{ Room11,Room12,Room13,Room14,Room15 },
		{ Room16,Room17,Room18,Room19,Room20 },
		{ Room21,Room22,Room23,Room24,Room25 }
	};
	while (isGameOver == false)
	{
		Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].PrintInfo();
		if (PlayerOne.m_positionY == 4 && PlayerOne.m_positionX == 0 && Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_HasEnemy == true)
		{
			Room21.printDatBoi();
		}
		if (PlayerOne.m_positionY == 1 && PlayerOne.m_positionX == 3 && Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_HasEnemy == true)
		{
			Room9.printPepe();
		}
		if (PlayerOne.m_positionY == 2 && PlayerOne.m_positionX == 1 && Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_HasEnemy == true)
		{
			Room12.printDoge();
		}
		if (PlayerOne.m_positionY == 2 && PlayerOne.m_positionX == 4 && Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_HasEnemy == true)
		{
			Room15.printHarambe();
		}
		if (Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_HasBoss == true)
		{
			Room23.printBoss();
		}
		int TempX = PlayerOne.m_positionX;
		int TempY = PlayerOne.m_positionY;
		MyString Response = MyString(PlayerOne.Response());
		Response.ToLower();
		int GameStatus = PlayerOne.CheckResponse(Response, Rooms);
		(GameStatus == -1) ? isGameOver = true : (GameStatus == 1) ? isGameOver = true : isGameOver = false;
		(Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_HasEnemy == true) ? Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].lockDoors() : (PlayerOne.m_positionY+1==4&&PlayerOne.m_positionX==2)? Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].openDoor(Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX]):Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].openDoor(OriginalCopy[PlayerOne.m_positionY][PlayerOne.m_positionX]);
		PlayerOne.setPrevious(TempX,TempY);
	}
	if (Rooms[4][2].m_HasBoss == false)
	{
		std::cout << "CONGRATS...YOU ESCAPED THE DUNGEON!!!\n";
	}
	system("pause");
	return 0;

}