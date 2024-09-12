// ClassCourse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Monster.h"

int main()
{

	Monster orc("Zorgk", 6, 150, 6, 4);
	Monster troll("fksmlfkgms", 1, 500, 15, 25);
	Monster elf("alelowin", 12, 10, 4, 3);
	Monster dwarf("morgir", 2, 25, 15, 8);

	orc.TellTheName();
	troll.TellTheName();

	do
	{
		orc.Heal(2);
		orc.GetDamage(5);
		std::cout << orc.get_name() << " hp = " << orc.Hp() << std::endl;
		

		if (orc.Hp() <= 0)
		{
			std::cout << orc.get_name() << " is dead......" << std::endl;
			// TO DO : Trumpet noise of death
		}


	} while (orc.Hp() > 0);


	Monster generic_monster;

	generic_monster = orc;
	generic_monster.TellTheName();

	generic_monster = troll;
	generic_monster.TellTheName();

	Monster empty_monster("empty_name");

}
