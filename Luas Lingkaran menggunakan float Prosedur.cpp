#include <iostream>
#include <conio.h>
using namespace std;

float jari, phi = 3.14 , Luas;
//rumus luas lingkran = ( phi*jari )*2

void judul(){
	cout <<""<<endl<<endl;
	cout <<" == MENCARI LUAS LINGKARAN == "<<endl;
	cout <<"------------------------------"<<endl; 
}

void LusLing (){
	judul();
	cout <<" Masukan Jari-jari Lingkaran = ";cin>>jari;
	system("CLS");
	Luas = phi*jari*2;
	judul();
	cout <<" Luas L = phi x jari-jari x 2"<<endl;
	cout <<" Luas L = 3.14 x "<<jari<<" x 2"<<endl;
	cout <<" Luas L	= "<<Luas;
}
void profile(){
	cout<<endl<<endl;
	cout<<"=================================="<<endl;
	cout<<"Nama  \t\t: Moch. Fahdin "<<endl;cout<<"NMP  \t\t: 065121154"<<endl;cout<<"Judul Tugas\t: Mencari Luas lingkaran dengan float (prosedur)"<<endl;
}
int main (){
	LusLing();
	getch();
	profile();
}
