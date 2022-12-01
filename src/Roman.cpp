//Roman.cpp
#include "Roman.h"
using namespace std;

void Roman::romanToInt(string str){

	bool validString;
	int size = str.size();

	map<char, int> rtoi({
		{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
		{'C', 100}, {'D', 500}, {'M', 1000}, });

	//String Validation
	map<char, int>::iterator it; //Iterate to check if each str char is Valid in the map
	for(int i = 0; i < size; i++){
		for(it = rtoi.begin(); it != rtoi.end(); it++){
			if(str[i] == it->first)
				validString = true;
		}
		if(validString == false){ //If char is not inside map we terminate the program
			cerr << "Your Input was not Valid. \nTerminating Program.";
			exit(EXIT_FAILURE);
		}
	}

	//Calculating
	int result = 0;

	for(int i = 0; i < size; i++){
		if(i != size - 1 && rtoi[str[i]] < rtoi[str[i+1]]){
			result -= rtoi[str[i]];
			continue;
		}
        result += rtoi[str[i]];
	}
	num = result;
}

void Roman::intToRoman(int n){

	map<int, string> itor({
		{1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X",},{40, "XL"}, {50, "L"},
		{90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}, });

    // rbegin() returns to the last value of map
    map<int, string>::reverse_iterator it;
    for (it = itor.rbegin(); it != itor.rend(); it++) {
    	while(n >= it->first){
    		answer += it->second;
    		n -= it->first;
    	}
    } //answer has the Roman Numerals Symbol
}

