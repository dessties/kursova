#pragma once
#include <iostream>
using namespace std;
class Menu
{
private:
public:
	virtual void Greeting()
	{
		cout << "Login/Registration" << endl << "Hello, its our taxi service! Choose one: " << endl;
	}
};
