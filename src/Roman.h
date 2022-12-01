//Roman.h
/*
 * ----------------
 * 		Roman
 * ----------------
 * - num1 	: int
 * - symbol : str
 * ----------------
 * + Roman()
 * + Roman(int, str)
 * + setNum(int) 	 : void
 * + setTemp(str) 	 : void
 * + clearNum()	 	 : void
 * + clearStr()		 : void
 * + getNum() 		 : int
 * + getTemp()		 : str
 * + romanToInt(str) : void
 * + intToRoman(int) : void
 */

#ifndef ROMAN_H_
#define ROMAN_H_
#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;

class Roman
{
private:
	int num;
	string answer;

public:
	Roman()						{num = 0, answer = "";}
	Roman(int n, string str)  	{num = n, answer = str;}

	//Setters & Getters
	void setNum(int n) 			{num = n;}
	void setStr(string str) 	{answer = str;}
	void clearNum()				{num = 0;}
	void clearAns()				{answer = "";}
	int getNum()				{return num;}
	string getAns()				{return answer;}

	//Methods
	void romanToInt(string str);
	void intToRoman(int n);
};

#endif /* ROMAN_H_ */
