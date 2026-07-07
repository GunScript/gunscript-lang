#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::ifstream;
using std::getline;
using std::string;
using std::endl;

int main(int argc, char* argv[]){
	ifstream file("HELLO.gsf");
	if (!file) { // !file is for detecting if the file is loaded or not, else is for if the file is loaded
	cout << "file cant be loaded. Oh Noes!" << endl;	
	} else {
	cout << "It Works! gonna run the code :p" << endl;
	}
}