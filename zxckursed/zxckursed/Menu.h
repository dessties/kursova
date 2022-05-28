#pragma once
#include <iostream>
using namespace std;
class Menu
{
private:
	string Header, Text;
public:
	string getText()
	{
		return Text;
	};
	void setText(string text)
	{
		Text = text;
	};

	string getHeader()
	{
		return Header;
	};
	void setHeader(string header)
	{
		Header = header;
	};
};

