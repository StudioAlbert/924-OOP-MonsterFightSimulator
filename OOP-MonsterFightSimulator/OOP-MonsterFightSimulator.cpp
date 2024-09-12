// OOP-MonsterFightSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Fight.h"
#include "Menu.h"

int main()
{

    int monster_a = 0;
    int monster_b = 0;

    std::cout << "Welcome to monster wars !!!!!!!!!!!!" << std::endl;
    std::cout << "Pick the first monster : " << std::endl;
    monster_a = PickAMonster();

    std::cout << "Pick the second monster : " << std::endl;
    monster_b = PickAMonster();

    Fight(monster_a, monster_b);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
