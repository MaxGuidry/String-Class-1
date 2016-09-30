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
void Room::printPepe()
{
	std::cout << "..................................-:::::-...........................................................\n";
	std::cout << "............................-+osyysssssssyyso+/...............-:/+++++++/:..........................\n";
	std::cout << ".........................:ossooooooooooooooooosyso/......-/+ssssooooooooosys+-......................\n";
	std::cout << "......................-+ssoooooooooooooooooooooooosyo/+ossoooooooooooooooooooyo-....................\n";
	std::cout << ".....................oyooooooooooooooooooooooooooooooyyooooooooooooooooooooooooy/...................\n";
	std::cout << ".................../ysoooooooooooooooossssssooooooooooshooooooooooooooooooooooooy+..................\n";
	std::cout << ".................-ssoooooooooooosyyyyyssssssyyyyyysooooshooooooooooooooooooooooooy:.................\n";
	std::cout << "................:ysooooooooosyyysooooooooooooooooosyyysoysoossssyssssssssssyssssooy.................\n";
	std::cout << "...............:yooooooooooyysoooooooooooooooooooooooosyhhyyssssosoooooooooossssyyyso/:-............\n";
	std::cout << "..............:yooooooooooooooooooooooooooooooooooooooooosysoooooooooooooooooooooooooosss+-.........\n";
	std::cout << ".............:yoooooooooooooooooooooooooosssyyyyyyyyyyyyyyyhhysoooooooosssssssyyyyysssssssso:.......\n";
	std::cout << ".............yooooooooooooooooooooooosyyysssssyyyyyyyyyyssssssyyssssyyyssssyyyyyyyyyyyyyssyyy+:.....\n";
	std::cout << ".........:+oyyooooooooooooooooooossyysssyyyyssso++++oooossssyyyyhyyyyyyyysssssssssyssssyyyyyyyss....\n";
	std::cout << "......-+sssohooooooooooooooossyyyssssyyso+++sshmmmhs:```.-:/+osysssssooso++oyhsdNNNmh/.-:/+yssyh+-..\n";
	std::cout << "...../ysoooshooooooooooooosssysssyyyso:.`.hNMosMNddMNy`      ``.:ssoo+:.`  :mMN+dMmydMNs   .:/+oyh-.\n";
	std::cout << "....+yoooooyyoooooooooooohsssssssso:.    oMMMmdMd::mMMo          .y /     .dMMMdmMy:oMMM:      `-y-.\n";
	std::cout << "..-oyooooooyooooooooooooosyyyyyyy-`      yMMMmdMMNNMMMy            /-     `NMMMdNMMNMMMM/        +/.\n";
	std::cout << "..oyooooooooooooooooooooooooooosso/-`    oMMMMMMMMMMMN:         `- +       hMMMMMMMMMMMh`    `.:++-.\n";
	std::cout << ".+yooooooooooooooooooooooooooooossooo+:-.`omNMMMMMNms-    `..:+ssh/---.```.odNMMMMMNdo:--:/+ossh:-..\n";
	std::cout << "+yoooooooooooooooooooooooooooooossysssssso++osyysso/::/+ooooososyyssssoooooooshhhhhyssssssssso+:....\n";
	std::cout << "yoooooooooooooooooooooooooooooooooosssyyysssyyyyyyyyssssssssyyyssoooooooooooooooooooooooooss-.......\n";
	std::cout << "soooooooooooooooooooooooooooooooooooooooossssssssssssssssyysooooooooooooooooooooooooooosss/.........\n";
	std::cout << "sooooooooooooooooooooooooooooooooooooooooooooooooooossyysssoooooooosyysssooossssssssys/:-...........\n";
	std::cout << "sooooooooooooooooooooooooooooooooooooooooooooosssyyysssoooooooooooooosssyhhyyyysssssss+-............\n";
	std::cout << "soooooooooooooooooooooooooooooooooooooooooooosysssoooooooooooooooooooooooossooooooooooss+-..........\n";
	std::cout << "soooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooss:.........\n";
	std::cout << "soooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooy-........\n";
	std::cout << "sooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooosy........\n";
	std::cout << "sooooooooooooooooooooooooooooooooossoooooooooooooooooooooooooooooooooooooooooooooooooooooooy-.......\n";
	std::cout << "sooooooooooooooooooooooooooossyyyyyyyyyyyysssssssooooooooooooooooooooooooooooooooooooooosssys+......\n";
	std::cout << "sooooooooooooooooooooooooosyysooooooooooosssssssyyyyysssssssooooooooooooooooooooosssssyyysssoy/.....\n";
	std::cout << "sooooooooooooooooooooooooshsoooossssssssssssoooooooossssyssyyyyyyyyyyyssssyyyyyyyyssssooooossy:.....\n";
	std::cout << "soooooooooooooooooooooooohsooooossssssssyyyyyyyssssssssooooooooooossssssssssoooooooooossssss/.......\n";
	std::cout << "sooooooooooooooooooooooooyysoooooooooooooooooossssyyyyyyyyyyyyysssssssssssssssyyyyyyyyyyyh:.........\n";
	std::cout << "sooooooooooooooooooooysooosyyyyyyyyyyyyyysssssssooooooooooosssssssssssssssssssssssoooooooy+.........\n";
	std::cout << "yoooooooooooooooooooooyyooooooooooooooooosssyyyyyyyysssssssssssssooooooooooooooooooooossys..........\n";
	std::cout << ":ssoooooooooooooooooooosyyyssoooooooooooooooooooooossssyyyyyyyyyyyyyyyyyyyyyyyyyyysssso+:...........\n";
	std::cout << "-:hyssooooooooooooooooooooossoooooooooooooooooooooooooooooooooooooooooooooooossss/..................\n";
	std::cout << "hhhhyyyyssooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooss+-....................\n";
	std::cout << "hyyyhhyysyyyyyssoooooooooooooooooooooooooooooooooooooooooooooooooooooooosso+-.......................\n";
	std::cout << "hyyyyyyyhhyyssssyyyyyyyysssooooooooooooooooooooooooooooooooooooooossss+/-...........................\n";
	std::cout << "hyyyyyyyyyyyhhhyyssoooossssyyyyyyyyyyyyyyyysssssssssssssyyyyyyyhhh+.................................\n";
	std::cout << "hyyyyyyyyyyyyyyyyhhhhyyyyysssssoooooooooooosssssssssssssssossyyhyyhs/...............................\n";
	std::cout << "hyyyyyyyyyyyyyyyyyyyyyyyyyyhhhhhhhhhhhhyyyyyyyyyyyyyyyyhhhhhhyyyyyyyhhs+-...........................\n";
	std::cout << "hyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhs:.........................\n";
	std::cout << "hyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyhs........................\n";
}

void Room::printDoge()
{
	std::cout << "::::::::::::::::::::////////:::::/++//::::-------........................--.......-.......--........\n";
	std::cout << ":::::::::::::::::/::///:::::---::/+oo+/:::--..................................-::://:-..............\n";
	std::cout << "::::::::://::::///:::::::------::/+ooo+/::--................................-:/+++ooo+-.............\n";
	std::cout << "::::::://////:///::::----------::/+ooooo+/:-..............................--:/++++osyso-........-...\n";
	std::cout << "//://////::::::::-------------:://++oooo+++/----........................--:/++++++osssso--......---.\n";
	std::cout << "::::::::---------------------- ://+++++++++++///::::------..-........-.--//+oo+++ooooosss+-..........\n";
	std::cout << "----------------------------:///+o+////////////////////////////:::::::/+++osoooosssssssss:..........\n";
	std::cout << "-------------:----:--:::::::////::::///////////////////////////+/++o++++osysooosssyyssoos+-.........\n";
	std::cout << "--------:::::::://///+++++//::::::::///////+++++++++/////////////++oooossysooosyhhhhhysoso:.........\n";
	std::cout << "::::://////++++oo++++++//::::::::::://///+++++++/+++++//////////++/++oyyysoooooshdddhysoss/-........\n";
	std::cout << "++++++oooooooooo+///:::::::::::::::///++++++++////++++////++/////+///++osssooooshdmdhyoooo/-........\n";
	std::cout << "ooooooooooo++++/::::::::::::::::::///++++++++/++////+/////++/++/+///////+osoosydmmmdhsoooo/--.-.....\n";
	std::cout << "oooooooo++++//::::::-::::::-----:://++o+++++++++////////////+++/+/////////+ooydmmddhso++oo:.........\n";
	std::cout << "oooo+++++++/::::::-:::::::::::::://+oo+++////////////////////+//+///////////+sshdhysoooooo:--.......\n";
	std::cout << "ooo+++++++/::::::--::://///::::://+++++++//:::://///++////////////////////////++ssooooshso/--.......\n";
	std::cout << "o+++++++//:--------:/osso++/::://++++o++/:::::::////++++/////////////////////////+ooooooo++:--......\n";
	std::cout << "++++////::---....--/yhymmds+://///+++++/:::::/:::////+++++++//////////////////:////+ooossso/:--.....\n";
	std::cout << "/::::::::--......--++hdmmdh+////://///////:///+oo++/++++oo++++//////////////////:://+oossso+/:--....\n";
	std::cout << ":---------......--:oohhdmh+/:::::/:::////+++shhhmNmhs+++++++++////////////////////////+oyyso/:--....\n";
	std::cout << "---------......--::+oyys+::::::::::://++oshmh++yhmNNNdso+++///////////////////////////++osso+/:--...\n";
	std::cout << "--------.......-::::::::::::::-::::::/+oshmms+hmNNNmdds++///////////////////////////////+oso+/:--...\n";
	std::cout << "--------.......--::---:::::::::::::://+++ohddyyddddyo//:/::::::::::::::::::::///////////++o++//-....\n";
	std::cout << "-:::---.........----::::::::::::::::://++///++ooo+/////:::-------::::::::::::::::::::////++++//:-...\n";
	std::cout << ":::::--.......-:/ooooooo++/::::-::::::////////////////::::------::/:::::::::::::::::://///++++/:--..\n";
	std::cout << "::/::---.....:yddmmmdddddhyo/:----::::://::::/://////:::::------------::::::::::::::::::////////--..\n";
	std::cout << ":://:-----.../dNNmNNNMMNNmddo:------:::::::::---:::::::::::----------::::::::::::::::::::///////:-..\n";
	std::cout << "//::-..-..--:+ydmmmNNMMMNNmho/:-:::-::::::::--------::::::::::::::::::::::----::::::::::::///////--.\n";
	std::cout << "/:::-.------/+hmmmNmmNNNNmhy+/:::::/::/::::::::::-----:::::::::::::::::::--:::::::::::::::///////:-.\n";
	std::cout << "//::------::/oyhdmNmmmmddhso+///:::::://::::::::::::---:::::::::::::::::::::::::::::::////+++////:--\n";
	std::cout << "//::-..---:/+syhhdmdddddyys+++/+/////////::::::::::::::::::::::::::::::::::::::::::///////+++/////:-\n";
	std::cout << "//:-------::+syyhhdhhhhhhyso++//////////////:/:::::::///:::::::::::::::::::://///////////+++++////::\n";
	std::cout << "//::--.---:::/ydmNNNNNddhhyso++++/+///+++++////////////:/://////:::::::::///////////////++++++/////:\n";
	std::cout << "//:----------:oyhddmmmmmNNmdyo++++oosyyhys++/////////:::::://:::::::::://////:::::::///++++++++++//:\n";
	std::cout << "-----.------::/+oyhdddddddddmmmhdddddhyys+/////////:::::/:::::::::://///:::::::::::////++++++++++//:\n";
	std::cout << ".....--------:::/+syssssssssyhhysssssoo+////://////:::://:::::::::////::::::::::::::////++++/++++//:\n";
	std::cout << ".....--------:::::/+ooooo++++++++o+++//////////////////:/::::::::::::::::::::::::::://+++++++++++///\n";
	std::cout << "......------:::::::://///////////////////////////////////::::::::::::/::::::::::::///++++++++++++///\n";
	std::cout << "......------:::::::::::://////////////////////////::///::::::::::::::::::::::://////+++++++++oo+++//\n";
	std::cout << "......------:::::::::::::::://////////////////////::::://////::/::::::::::/:///////++++++++ooooo+++/\n";
	std::cout << "-.....--::-:::::::::::::::://///////////////////:::::::::////:::::::::://////////+++++++++oooooo++++\n";
	std::cout << "--.-----::::::::::::::://////////////////////////:/:::::::::::::::::::://///////+++++++oooooooo++++/\n";
	std::cout << "--------:::::::::::::::::://////////////////////////::::::::::::::////////////++++++++ooooooo++++++/\n";
	std::cout << "--------:::::::::::::::////////////////////////////:::::::::::::://////////////+++++ooooooo++++++///\n";
	std::cout << "--------:::::::://:::::::///////////////////////////://:::://///////////////////++++oooooo++///////:\n";
	std::cout << "---------::::::::///////://///////////+///////////////////////////////////////+++++ooo++++/////////:\n";
	std::cout << "------------:::::://////////////////////++//+++++++++++++///////////////////////+++++++//////:::::::\n";
	std::cout << "------------::::::::///+++++++++++++++++++++++++++++++////////////////////////+++++////:::::::::::::\n";
	std::cout << "-------------::::::://////+++++++++++++++++++++++///////://///::////////////////::::::::::::::::::/:\n";
	std::cout << "------..------:::::://////////+++++++++//++//////:::::://///::////::::///://::::::::::::::::::::::/:\n";
}
void Room::printHarambe()
{
	std::cout << "NKNKKKKKKKNNNKKKKk!|!!!!)k     ')]K@NNKKKkkkkk!!)kkk))kNKNNKKNKkkkk)KKNNKkk)KKNNKk\n";
	std::cout << "kKkkNNNKKKKKNKKKNk!!| yk)kkL   |>]KNNNKMMM)kkkk>||||>))KKKKKKKNKNNMkkNKKKk>)kNNKKK\n";
	std::cout << "kkkkkNNKKNKMkkKKKWk!!)kkNM    .|>kKMNNKWkw|kkk!!!!!!!!)Y)KKNNKKKKkkkkkMkk!)kKkkMkN\n";
	std::cout << "kkkkkNNKKKKKKKKKNKkkkkkkk    ,{ \)MMM^|M(NKNNNw!!!!|!!!!|))k)KNKkkkk)kkkk!|)NKKk!|)\n";
	std::cout << "kkkkkkkkkkkNKKKKKKkkkkkM`<M`  /!|!|||/|Y)|)NMQKW|||!!!!|!!!!)kKkkkk|||Y|||)KMkk|||\n";
	std::cout << "kkk)kkkkkkkNNKKKKKkkkkk,))M<`|^||^ !   `',/w,y(kUWw!!!!!!!!))kKKkkvvv,;|||)kkk!|||\n";
	std::cout << ")kkkkkkNKKNKKNKKKKKkkk]KNM|)M^ | `   ,wWNNKNMNKKWK(MNW!v!!!!))NKKkkkNKKNk!)k||||||\n";
	std::cout << "kKNKKKNKKKKKKKKKKKKKK@K/M)@M| |  '|MMMY^'`''\"/`^)k%kMMU/k)k)kNNKNKNKKK@NK!)kKWw,,,\n";
	std::cout << "NKKKKK@@@@K@@@@@@@@N@Mk$U@M|/kk(|| \"`           'YMKMNWNW>))KK@@@@@@@@@NK)NNKKNKKK\n";
	std::cout << "NNN@@@@@@@@@@@@@@@@0NYk@@^/;Kkx|| '`       , ,,xwyyK(kKk)WkNKK@@@@@@@@@NK)KKKNNKKK\n";
	std::cout << "NNNN@@@@@@NNNNNNNNNNMK@@WKMMM\y><., , ,wWN)NNkKNNKMMM)M('*NKKKNN@@@@@@@NN]KNNNNN@@\n";
	std::cout << "NNKN@@@@@@@NNKKMM]N@)RKKKMjM(k/KM)KKNNW@W^^*````     ``')N@NN@@@@@@@@@@@@@@@@@@@\n";
	std::cout << "@@@@@@@@@@@@@@@@@@WNKN)ML /)MKKN`(`                   |!`K@KNN)KK@@@@@@@@@N@@@@N\n";
	std::cout << "@@@@@@@@@@@@@@@@NKNMMNMW`,XKM/r^'      .     ,w,,vK` |^. ]KMMNWM)ypXN@N@@@NKNNNN\n";
	std::cout << "NNNNNNNNNNN@@@@KMyM]MYMM!)NM^\      ~>~,r\KW@]kMw  .,'   KNK(<)MM|kk.|NNNNNNKMkM\n";
	std::cout << "!||||))kk)MKK)yWNNNHMMMyw)NN ' !        ')XMNKw@)   ,., !)NkW^k> || ^'!|k/KW/)kKk|\n";
	std::cout << "kkkk/)kkWW]@MN)K)kU@)Aw)k%NNV,           )@N%N0M`]W.KNKkW, | `'`'^ | )vNKN@UKMk\n";
	std::cout << "KKK@@NKKKK@N@$KNWMk^k(%\kMMKMM:'/ ,!.    ]W   ` ,@N\`   )|(|kk>~.'   ` ]k*MKNNMN\n";
	std::cout << "@@@@@@@@@&@@KM]Q@@KWY^ | '``v|M``' ```   >WU\"%@$@@@Nk|]w   '`'``\'`      '|)N@@@@@\n";
	std::cout << "@@@@@@@@@BNNN@M`|  !>`|,w,   `: `')Kk` `\"|M | ,,!|| .'       '.        '|0@@@@\n";
	std::cout << "@@@@@@@@@@K@M|'/.!!/k;L)k.v     `     '  ''``,awmvv*`           '         \"NNKN\n";
	std::cout << "KKN@@@@@@MMM|!`|/ k<\) || V\ | \".               ``           !                  ]K@N\n";
	std::cout << "MNNM)]0M)Vk```/|||`>||^`)|,!                              ,k|.   :             $@@@\n";
	std::cout << ")k)]@`|| M,,>K || `\!| !`,^'|' '                         ,'| .'.               |@@@\n";
	std::cout << "KNNMY/!:`,,(/M /k))Y|\^''|''                           ,|       ,>!|'           NK^\n";
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