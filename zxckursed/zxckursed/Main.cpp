#include "Menu.h"
#include <iostream>
using namespace std;

int main()
{
	Menu MainMenu;

	string main_txt = "Welcome to our taxi service";

	string main_header = "Log in/Registration";

	MainMenu.setHeader(main_header);

	cout << MainMenu.getHeader();

	MainMenu.setText(main_txt);

	cout << "\n" << MainMenu.getText();
}