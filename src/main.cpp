//*****************
//Program Name: Roman/Integer Coverter
//Author: Daniel Arlegui
//IDE Used: Eclipse
//*****************

//Libraries
#include "Roman.h"
#include <limits>
#include <iostream>
using namespace std;

//Function(s)
bool intValid(int, int, int&); //max, min, "saves int value"

int main()
{
	//Variables
	Roman Roman;
	string strInput;
	int select, integer;
	cout << "Roman/Integer Coverter" << endl;

	//Menu
	do{
		integer = 0;
		cout << "\n1: Roman to Integer \n2: Integer to Roman \n3: Quit";
		while(!intValid(3,1,select)); //Select Validation 1 - 3 choices

		switch(select){
			case 1:	cout << "Enter Roman Chars\n--> ";
				cin >> strInput;
				Roman.romanToInt(strInput);
				cout << strInput << " = " << Roman.getNum() << endl;
				Roman.clearNum();
				break;
			case 2:
				cout << "Enter Integer";
				while(!intValid(3999,1,integer)); //user Integer Validation (1 - 3999 Roman Range)
				Roman.intToRoman(integer);
				cout << integer << " = " << Roman.getAns() << endl;
				Roman.clearAns();
				break;
			default: cout << "You have chosen to quit.\nProgram Ending..." << endl;
		}
	} while (select != 3);

	return 0;
}

//Integer Validation Function
bool intValid(int max, int min, int& n){
	int userInput;
	bool valid = false;
	do{
		cout << "\n--> ";
		cin >> userInput;
		if(!cin.fail()){
			if(userInput >= min && userInput <= max)
				valid = true; //Valid Integer
			else
				cout << "Out of range!" << endl;
		}
		else{
			cout << "Error with input!" << endl;
			cin.clear();
			cin.ignore(INT_MAX,'\n');
		}
	}while(!valid);

	n = userInput; //Saves the users input

	return valid;
}
