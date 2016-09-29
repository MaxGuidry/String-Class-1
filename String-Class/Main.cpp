#include <iostream>
#include "MyString.h"
#include "Rooms.h"
#include"Player.h"
#include<Windows.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	//TODO make an actual fight for the boss
	//TODO make a puzzle of some sort for east door room 13
	//TODO stop info from printing after an action is performed
	bool isGameWon = false;
	char Name[255];
	std::cin.getline(Name, 255);
	Player PlayerOne = Player(Name, 0, 0, 0, 0, 0);
	std::cout << Name << std::endl;
	Room Room1 = Room(1, 0, 0, 1, 1, "There are doors to the east and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room2 = Room(1, 1, 0, 0, 1, "the dark and damp room. \nThere are doors to the east and west. \nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room3 = Room(1, 1, 0, 1, 0, "you notice a big red button on the wall.\nThere are doors to the east, west and south.\nWhat will you do?", 0, 0, 0, 0, 1, 0);
	Room Room4 = Room(1, 1, 0, 1, 1, "the room has doors to the east, west and south.\nYou smell fresh air coming from the east.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room5 = Room(0, 1, 0, 0, 0, "the room has only the door behind you and a dark hole in the ground,\nLooking down the hole you see nothing, but you can smell the fresh air.\nWhat will you do?", 0, 0, 0, 0, 0, 1);
	Room Room6 = Room(1, 0, 1, 1, 1, "the room has doors to the east, north and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room7 = Room(0, 1, 0, 0, 0, "you see a large chest with lock on it.\nThere is only a door behind you to the west.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room8 = Room(0, 0, 1, 1, 1, "the room has doors to the north and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room9 = Room(1, 0, 1, 1, 0, "you are frozen with fear when you see a large minotaur staring at you.\nThere are doors to the east, north and south , but the minotaur is blocking the way.\nWhat will you do?", 0, 0, 0, 1, 0, 0);
	Room Room10 = Room(0, 1, 0, 0, 0, "the room only has a door to the west where you came from.\nYou notice a key on the ground in front of you.\nWhat will you do?", 1, 0, 0, 0, 0, 0);
	Room Room11 = Room(1, 0, 1, 1, 1, "the room has doors to the east,north and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room12 = Room(1, 1, 0, 1, 0, "you are frozen with fear when you see a werewolf staring at you and licking its lips.\nThere are doors to the east, north and south , but the werewolf is blocking the way.\n", 0, 0, 0, 1, 0, 0);
	Room Room13 = Room(1, 1, 1, 0, 1, "the room has doors to the east, west and north.\nThe eastern door is closed and has some strange markings on it.\nWhat will you do?", 0, 0, 0, 0, 0, 0);//TODO COME BACK TO THIS SINCE EAST DOOR IS A PUZZLE DOOR
	Room Room14 = Room(1, 1, 1, 0, 0, "the room has doors to the east, west and north.\nIn the middle of the room there is a sword lying on the ground.\nWhat will you do?", 0, 0, 1, 0, 0, 0);
	Room Room15 = Room(0, 1, 0, 1, 0, "you are frozen with fear when you see a giant cyclops looking down on you.\nwThere are doors to the west and south.\nWhat will you do?", 0, 0, 0, 1, 0, 0);
	Room Room16 = Room(1, 0, 1, 0, 1, "the room has doors to the east and north.\nYou notice a large crack in the south wall.\nWhat will you do?", 0, 0, 0, 0, 0, 0, 1);
	Room Room17 = Room(1, 1, 1, 1, 1, "the room has doors on every side.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room18 = Room(1, 1, 0, 0, 1, "the room has doors to the east, west and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room19 = Room(1, 1, 0, 1, 1, "the room has doors to the east, west and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room20 = Room(0, 1, 1, 1, 1, "the room has doors to the west, north and south.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room21 = Room(0, 0, 1, 0, 0, "you enter through the secret door and find...\n", 0, 0, 0, 0, 0, 0);//TODO Make something funny and dumb happen here
	Room Room22 = Room(0, 0, 1, 0, 0, "you see a large key on the ground.\nThere is only a door to the north.\nWhat will you do?", 0, 1, 0, 0, 0, 0);
	Room Room23 = Room(0, 0, 1, 0, 0, "the room and see the ", 0, 0, 0, 1, 0, 0);//TODO name or describe boss here
	Room Room24 = Room(1, 0, 1, 0, 1, "the room has doors to the east and north.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
	Room Room25 = Room(0, 1, 1, 0, 0, "and you are staring at a large pool of swirling blue liquid.\nThe glow from the liquid entices you.\nWhat will you do?", 0, 0, 0, 0, 0, 0);
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
	while (isGameWon == false)
	{
		std::cout << "You enter ";
		Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].PrintInfo();
		if (PlayerOne.m_positionY == 4 && PlayerOne.m_positionX == 0)
		{
			Room21.printDatBoi();
		}

		int TempX = PlayerOne.m_positionX;
		int TempY = PlayerOne.m_positionY;
		MyString Response = MyString(PlayerOne.Response());
		Response.ToLower();
		if (PlayerOne.CheckResponse(Response, Rooms) == -1)
			break;
		(Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_HasEnemy == true) ? Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].lockDoors() : Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX];
		PlayerOne.setPrevious(TempX,TempY);
	}
	//PlaySound(TEXT("C:\\Users\\max.guidry\\Downloads\\Prayer Position Instrumental"), NULL, SND_ASYNC);
	system("pause");
	return 0;
}
