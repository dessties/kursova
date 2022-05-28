#pragma once
#include "Menu.h"
class UserMenu : public Menu
{
public:
	void Greeting() override
	{
		cout << "Choose one: " << endl;
	}
};

