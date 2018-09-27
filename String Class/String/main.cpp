//#include "string.h"
#include <iostream>
//using namespace std;


#include "string.h"

int main(){
	
	string sa;
	string sb("proba");
	string sc(sb);

	sa = sb;
	sc = "proba";

	if (sc == sb) {
		std::cout << "Same string" << std::endl;
	}
	else {
		std::cout << "Strings are different" << std::endl;
	}

	if (sa == "proba") {
		std::cout << "Strings are the same" << std::endl;
	}
	
	else {
		std::cout << "Strings are diffenrent" << std::endl;
	}

	system("pause");
}