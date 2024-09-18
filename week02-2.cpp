//week02-2.cpp
// SOIT107 ADVANCE_006
// not OK, only string
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(c != '2') cout << c;
	}
	//cout << s;
	cout << "\n";
}