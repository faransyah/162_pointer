#include<iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklrasi method
};


void mahasiswa::showNim() {     //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };     //project mhs
	mhs.showNim();          //member acces operator

	mahasiswa& ref = mhs;
}