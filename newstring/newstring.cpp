#include <iostream>
#include <string>
using namespace std;
int main() {
	string name;
	// request name
	cout << "Please enter your name : ";
	// read the name
	//string name;
	// define the name
	getline(cin, name);
	// read the name
	// write the greeting
	cout << "Good Morning. Nice to meet you " << name << endl << "Your name has " << name.size() << " characters" << endl << "Oh mahn you are a genius!!!" << endl;
	return 0;
}
