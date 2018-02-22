#include "stdafx.h"
#include <string.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

char *my_strchr(char *str, int ch) {
	while (*str != '\0') {
		if (*str == ch) return str;
		str++;
	}
	return nullptr;
}


int main(){
	string inputStr;
	cout << "Enter str\n";
	cin >> inputStr;
	char ch;
	cout << "Enter symbol to find in str\n";
	cin >> ch;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	char* str = new char[inputStr.length()];
	strcpy(str, inputStr.c_str());
	char*  res = my_strchr(str,ch);

	if (res != nullptr)
		cout << (*res) << " found in '" << str << "' at " << (int)(res-str) << " position.";
	else cout << ch << " not found in '" << str << "'.";
	cin.ignore();
	return 0;
}

