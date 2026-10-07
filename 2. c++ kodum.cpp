#include <iostream>
#include <string>
#include <sstream>
//KLAVYEDEN GÝRÝLEN BÝR SAYININ KATINI ALAN PROGRAM
int main(int argc, char** argv) {
	using namespace std;
	string say,say2;
	
	int b,a;
	cout<<"lutfen bir sayi giriniz"<<endl;
	getline(cin,say);
	cout<<"lutfen bir sayi daha giriniz"<<endl;
	getline(cin,say2);
	stringstream(say)>>a;
	stringstream(say2)>>b;
	cout<<a*b;
	
	

	return 0;
}
