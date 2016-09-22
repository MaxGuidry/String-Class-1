#include <iostream>
#include "MyString.h"
#include "Rooms.h"

int main()
{
	Room Room1 = Room(1, 0, 0, 1, 1, "There are doors to the east and south.\n What will you do?");
	Room Room2 = Room(1, 1, 0, 0, 1, "You are in a dark and damp room. \nThere are doors to the east and west. \n What will you do?");
	Room Room3 = Room(1, 1, 0, 1, 0, "You walk in and notice a big red button on the wall.\n There are doors to the east, west and south.\n What will you do?");
	Room Room4 = Room(1, 1, 0, 1, 1, "You enter a room with doors to the east, west and south.\n You smell fresh air coming from the east.\n What will you do?");
	Room Room5 = Room(0, 1, 0, 0, 0, "You enter the room with only the door behind you and a dak hole in the ground,\n Looking down the hole you see nothing, but you can smell the fresh air.\n What will you do?");
	Room Room6 = Room(1, 0, 1, 1, 1, "You enter a room with doors to the east, west, north.\n What will you do?");
	Room Room7 = Room(0, 1, 0, 0, 0, "You enter a room and see a large chest with lock on it.\n What will you do?");
	Room Room8 = Room(0, 0, 1, 1, 1, "");
	Room Room9 = Room(1, 0, 1, 1, 0, "");
	Room Room10 = Room(0, 1, 0, 0, 0, "");
	Room Room11 = Room(1, 0, 1, 1, 1, "");
	Room Room12 = Room(1, 1, 0, 1, 0, "");
	Room Room13 = Room(1, 1, 1, 0, 1, "");//COME BACK TO THIS SINCE EAST DOOR IS A PUZZLE DOOR
	Room Room14 = Room(1, 1, 1, 0, 0, "");
	Room Room15 = Room(0, 1, 0, 1, 0, "");
	Room Room16 = Room(1, 0, 1, 1, 1, "");//COME BACK TO THIS SOUTH DOOR IS A HIDDEN DOOR 
	Room Room17 = Room(1, 1, 1, 1, 1, "");
	Room Room18 = Room(1, 1, 0, 1, 1, "");//COME BACK TO THIS SOUTH DOOR NEEDS KEY
	Room Room19 = Room(1, 1, 0, 1, 1, "");
	Room Room20 = Room(0, 1, 1, 1, 1, "");
	Room Room21 = Room(0, 0, 1, 0, 0, "");
	Room Room22 = Room(0, 0, 1, 0, 0, "");
	Room Room23 = Room(0, 0, 1, 0, 0, "");
	Room Room24 = Room(1, 0, 1, 0, 1, "");
	Room Room25 = Room(0, 1, 1, 0, 0, "");
	Room Rooms[5][5] =
	{
		{Room1,Room2,Room3,Room4,Room5},
		{Room6,Room7,Room8,Room9,Room10},
		{Room11,Room12,Room13,Room14,Room15},
		{Room16,Room17,Room18,Room19,Room20},
		{Room21,Room22,Room23,Room24,Room25}
	};
	//testing the print function
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			Rooms[j][i].PrintInfo();
		}
	}
	system("pause");
	return 0;
}
