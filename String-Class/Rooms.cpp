#include"Rooms.h"
#include<iostream>
#include<Windows.h>


Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, bool Empty, const char * Text, bool Key, bool BossKey, bool Sword, bool Enemy, bool RedButton, bool TrapHole)
{
	m_EastDoor = EastDoor;
	m_WestDoor = WestDoor;
	m_NorthDoor = NorthDoor;
	m_SouthDoor = SouthDoor;
	m_Empty = Empty;
	m_Text = Text;
	m_HasTreasureKey = Key;
	m_HasBossKey = BossKey;
	m_HasSword = Sword;
	m_HasEnemy = Enemy;
	m_HasDeathButton = RedButton;
	m_HasTrapHole = TrapHole;
}

Room::Room(bool EastDoor, bool WestDoor, bool NorthDoor, bool SouthDoor, bool Empty, const char * Text, bool Key, bool BossKey, bool Sword, bool Enemy, bool RedButton, bool TrapHole, bool HiddenDoor)
{
	m_EastDoor = EastDoor;
	m_WestDoor = WestDoor;
	m_NorthDoor = NorthDoor;
	m_SouthDoor = SouthDoor;
	m_Empty = Empty;
	m_Text = Text;
	m_HasTreasureKey = Key;
	m_HasBossKey = BossKey;
	m_HasSword = Sword;
	m_HasEnemy = Enemy;
	m_HasDeathButton = RedButton;
	m_HasTrapHole = TrapHole;
	m_HiddenDoor = HiddenDoor;
}

void Room::PrintInfo()
{
	for (int i = 0; m_Text[i] != '\0'; i++)
	{
		std::cout << m_Text[i];
		Sleep(18);
	}
	std::cout << std::endl;

}

void Room::printDatBoi()
{
	std::cout << "\n\nMMMMMMMMMMMMMMMMMMMN`                                                          `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                         ``..-://+o/`                     `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                        .sssssosshNho.                    `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                         :mmddhyysyyys-                   `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                          -dNNNNmdhysss.                  `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                           `+ddddhhysos+`                 ";
	std::cout << "`NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                            .yhhyyysooos/`                ";
	std::cout << "`NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                          `.shhhyyyyysosy/                `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                  ``..-/osyyhsyhyyyyyyysos:               `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`              `.:/+osyyyyso:`.yyysssyyyysoo+-`            `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`         .-//+ss++++/-`      :hysssyyyyssyh-              `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`          `-/o/`             ";
	std::cout << ":hyyyyyyyyyyyh`              `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                             .hhhhhhhhhhyoo-              `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                            `+hdddhhhhdddyos+`            ";
	std::cout << "`NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                           `+yyhdmddddmmmdsoso:.          `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                          `oyhhhdmysdmNNNy/yso++/`        `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                         `ohddmdyoyddmmmNNs.oys+++.       `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                        `/hddy/.ooosy/////-``-++++/`      ";
	std::cout << "`NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                       `+ydy-`     -:     `````.ooo.      `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                       -syh-``     :-      ```.++oo.      `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                       ./+oo.``   .+:`    ````:ooso`      `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                       `///+``-/symdoo/. ````.+oss/       `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                        .//++hmNmmNysmNNh/.``.+osy.       ";
	std::cout << "`NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                         -odmmy:.oh-s--yNmh-..oss+        `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                        `+mds.::`/y-o`./-ymd--oss`        `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                        ";
	std::cout << "+mhhs` :-.s-/`/`.:hNh:sy-         `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                      .+mdyoo--`:/s/::`..`-NNss/          `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                      .yNy++o:-:-ohso-.`-::dNys`          `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                       dms..-:++shdyo/-:-.`ymy/           `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                      `dms..-:::+odms//+o/-dms:           `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                       ";
	std::cout << "dmh-.``-::osso-::--+dmso/:-`       `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                       +Nd/`.-`-/:/o-/-.--hNh```          `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                       ";
	std::cout << "`dNd/` .:`/.::./-`yNd.             `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`  ``..``....://////////:+mNd+::`./`-/`-odmh.              `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                ``.:/+:/+sdNmmdsss/+sydNms`               `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                  `-/+/:--/sdmNNNNNNNNdy+:-..`            `NMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMN`                   .::-....-..:+++/:-.`                   `NMMMMMMMMMMMMMMMMMMM\n\n\n                                                 O SHIT WADDUP\n\nWhat will you do?\n";
}

void Room::lockDoors()
{
	m_EastDoor = false;
	m_WestDoor = false;
	m_NorthDoor = false;
	m_SouthDoor = false;
}

void Room::openDoor(Room Original)
{
	(Original.m_EastDoor == true) ? m_EastDoor = true : m_EastDoor = false;
	(Original.m_WestDoor == true) ? m_WestDoor = true : m_WestDoor = false;
	(Original.m_NorthDoor == true) ? m_NorthDoor = true : m_NorthDoor = false;
	(Original.m_SouthDoor == true) ? m_SouthDoor = true : m_SouthDoor = false;
}