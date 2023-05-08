#include<iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklrasi method
};


void mahasiswa::showNim() {
	cout << "No Induk = " << nim << endl;
}