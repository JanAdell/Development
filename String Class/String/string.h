#ifndef _STRING
#define _STRING

class string {
private:
	
	char* txt;

public:

	string() {
	}

	string(const string &strA) {
		txt = strA.txt;
	}

	string(const char* txt) {
		this->txt = (char*)txt;
	}

	string operator= (const string &strA) {
		txt = strA.txt;
		return *this;
	}

	string operator= (const char* txtA) {
		txt = (char*)txtA;
		return *this;
	}

	bool operator== (const char* txtA) {
		return(txt == txtA);
	}

	bool operator== (const string &strA) {
		return(txt == strA.txt);
	}



};

#endif