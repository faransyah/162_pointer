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

	mahasiswa& ref = mhs;   //pointer reference refmhs
	ref.nim = 2; 
	mhs.showNim();

	mahasiswa* pMhs = &mhs;         //pointer dereference pMhs
	pMhs->nim = 3;                  //Arrow Operator 
	mhs.showNim();
	system("pause");
	return 0;
}