#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	char q = 34;
	string l[] = {
	"	",
	"=================<<<<<<<<<<<< C++ Code >>>>>>>>>>>>>>>================",
	"#include <iostream>",
	"#include <string>",
	"using namespace std;",
	"",
	"int main(int argc, char* argv[])",
	"{",
	"	char q = 34;",
	"	string l[] =",
	"	};",
	"	for(int i = 20; i <= 25; i++)",
	"		cout << l[i] << endl;",
	"	for(int i = 0; i <= 34; i++)",
	"		cout << l[i] << endl;",
	"	return 0;",
	"}",
	};
	for(int i = 20; i <= 25; i++)
        	cout << l[i] << endl;
    	for(int i = 0; i <= 34; i++)
        	cout << l[0] + q + l[i] + q + ',' << endl;
    	for(int i = 26; i <= 34; i++)
        	cout << l[i] << endl;
    	return 0;
	}
}
