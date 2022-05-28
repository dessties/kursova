#pragma once
#include <string>
#include <fstream>

#include "Menu.h"

using namespace std;

class Registration : public Menu
{
protected:
	string Username;
	string Password;
	string Path;
	bool Check = true;
public:
	void setPath(string path)
	{
		Path = path;
	}

	string getPath()
	{
		return Path;
	}

	void CreateFile()
	{
		if (Path == "")
		{
			throw invalid_argument("Enter correct path");
		}

		ofstream Data (Path, ofstream::app);
	}

	void Greeting() override
	{
		cout << "Enter username: ";

		cin >> Username;

		cout << endl << "Enter password: ";

		cin >> Password;
	}

	void InputData()
	{
		ofstream Data(Path, ofstream::app);

		Data << Username << " " << Password << endl;

		
	}

	string getPassword()
	{
		return Password;
	}

	string getUsername()
	{
		return Username;
	}
};

