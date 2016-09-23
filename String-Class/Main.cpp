#include <iostream>
#include "MyString.h"
#include "Rooms.h"
#include"Player.h"
#include<Windows.h>

int main()
{
	bool isGameWon = false;
	char Name[255];
	std::cin.getline(Name, 255);
	Player PlayerOne = Player(Name, 0, 0, 0, 0, 0);
	std::cout << Name << std::endl;
	Room Room1 = Room(1, 0, 0, 1, 1, "There are doors to the east and south.\nWhat will you do?");
	Room Room2 = Room(1, 1, 0, 0, 1, "You are in a dark and damp room. \nThere are doors to the east and west. \nWhat will you do?");
	Room Room3 = Room(1, 1, 0, 1, 0, "You walk in and notice a big red button on the wall.\nThere are doors to the east, west and south.\nWhat will you do?");
	Room Room4 = Room(1, 1, 0, 1, 1, "You enter a room with doors to the east, west and south.\nYou smell fresh air coming from the east.\nWhat will you do?");
	Room Room5 = Room(0, 1, 0, 0, 0, "You enter the room with only the door behind you and a dak hole in the ground,\nLooking down the hole you see nothing, but you can smell the fresh air.\nWhat will you do?");
	Room Room6 = Room(1, 0, 1, 1, 1, "You enter a room with doors to the east, west, north.\nWhat will you do?");
	Room Room7 = Room(0, 1, 0, 0, 0, "You enter a room and see a large chest with lock on it.\nWhat will you do?");
	Room Room8 = Room(0, 0, 1, 1, 1, "You enter a room with doors to the north and south.\nWhat will you do?");
	Room Room9 = Room(1, 0, 1, 1, 0, "You enter the room and see a large minotaur staring at you.\nThere are doors to the east, north and south , but the minotaur is blocking the way.\nWhat will you do?");
	Room Room10 = Room(0, 1, 0, 0, 0, "You enter the room with only a door to the west where you came from.\nYou notice a key on the ground in front of you.\nWhat will you do?");
	Room Room11 = Room(1, 0, 1, 1, 1, "You enter the room with doors to the east,north and south.\nWhat will you do?");
	Room Room12 = Room(1, 1, 0, 1, 0, "You enter the room and see a werewolf staring at you and licking its lips.\nThere are doors to the east, north and south , but the werewolf is blocking the way.\n");
	Room Room13 = Room(1, 1, 1, 0, 1, "You enter the room with doors to the east, west and north.\nThe eastern door is closed and has some strange markings on it.\nWhat will you do?");//TODO COME BACK TO THIS SINCE EAST DOOR IS A PUZZLE DOOR
	Room Room14 = Room(1, 1, 1, 0, 0, "You enter the room with doors to the east, west and north.\nIn the middle of the room there is a sword lying on the ground.\nWhat will you do?");
	Room Room15 = Room(0, 1, 0, 1, 0, "You enter the room and see a giant cyclops looking down on you.\nwThere are doors to the west and south.\nWhat will you do?");
	Room Room16 = Room(1, 0, 1, 1, 1, "You enter the room with doors to the east and north.\nYou notice a large crack in the south wall.\nWhat will you do?");//TODO COME BACK TO THIS SOUTH DOOR IS A HIDDEN DOOR 
	Room Room17 = Room(1, 1, 1, 1, 1, "You enter the room with doors on every side.\nWhat will you do?");
	Room Room18 = Room(1, 1, 0, 1, 1, "You enter the room with doors to the east, west and south.\nWhat will you do?");//TODO COME BACK TO THIS SOUTH DOOR NEEDS KEY
	Room Room19 = Room(1, 1, 0, 1, 1, "You enter the room with doors to the east, west and south.\nWhat will you do?");
	Room Room20 = Room(0, 1, 1, 1, 1, "You enter the room with doors to the west, north and south.\nWhat will you do?");
	Room Room21 = Room(0, 0, 1, 0, 0, "You enter through the secret door and find...");//TODO Make something funny and dumb happen here
	Room Room22 = Room(0, 0, 1, 0, 0, "You enter the room and see a large key on the ground.\nThere is only a door to the north.\nWhat will you do?");
	Room Room23 = Room(0, 0, 1, 0, 0, "You enter the room and see the ");//TODO name or describe boss here
	Room Room24 = Room(1, 0, 1, 0, 1, "You enter the room with doors to the east and north.\nWhat will you do?");
	Room Room25 = Room(0, 1, 1, 0, 0, "You enter the room looking at a large pool of swirling blue liquid.\nThe glow from the liquid entices you.\nWhat will you do?");
	Room Rooms[5][5] =
	{
		{Room1,Room2,Room3,Room4,Room5},
		{Room6,Room7,Room8,Room9,Room10},
		{Room11,Room12,Room13,Room14,Room15},
		{Room16,Room17,Room18,Room19,Room20},
		{Room21,Room22,Room23,Room24,Room25}
	};
	while (isGameWon == false)
	{
		Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].PrintInfo();
		char PlayerResponse[255];
		std::cin.getline(PlayerResponse, 255);
		MyString Response = MyString(PlayerResponse);
		Response.ToLower();
		if (Response.findSubString("move east") == true&&Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_EastDoor==true)
		{
			PlayerOne.moveEast();
		}
		else if (Response.findSubString("move south") == true && Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_SouthDoor == true)
		{
			PlayerOne.moveSouth();
		}
		else if (Response.findSubString("move west") == true && Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_WestDoor == true)
		{
			PlayerOne.moveWest();
		}
		else if (Response.findSubString("move north") == true && Rooms[PlayerOne.m_positionY][PlayerOne.m_positionX].m_NorthDoor == true)
		{
			PlayerOne.moveNorth();
		}
		
	}

	//testing the print function
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			Rooms[j][i].PrintInfo();
			//Sleep(100);
		}
	}
	//PlaySound(TEXT("C:\\Users\\max.guidry\\Downloads\\Prayer Position Instrumental"), NULL, SND_ASYNC);
	system("pause");
	return 0;
}
