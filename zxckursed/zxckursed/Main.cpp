#include "Menu.h"
#include "UserMenu.h"
#include "Registration.h"

#include <iostream>

using namespace std;

int main()
{
	Menu menu;

	menu.Greeting();

	Registration registration;

	registration.setPath("Data.txt");

	registration.CreateFile();

	registration.Greeting();

	registration.InputData();

	return 0;
}