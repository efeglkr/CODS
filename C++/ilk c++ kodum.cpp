#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char** argv) {
	using namespace std;
	
	string say; 
	int a;
	cout<<"bir sayi giriniz\n";
	getline(cin,say);
	stringstream(say)>>a;
	cout<<a*25;

		
	

	return 0;
}
