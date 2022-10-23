#include "iostream"
#include "conio.h"
using namespace std;

profile(){
	cout<<"\n\n\n\n\n==================================\n";
	cout<<"Nama \t= Moch. Fahdin"<<endl;
	cout<<"NPM \t= 065121154"<<endl;
}

int main (){
	
	struct Lib{
	double kodBuk, TaTer, Harga;
	string NameBuk, Pengarang;
};
Lib work;
	
	work.kodBuk		= 32;
	work.NameBuk	= "\"Karangan Masa lalu bersama dia\"";
	work.TaTer		= 2020;
	work.Pengarang	= "H. Abdul Hamdi";
	work.Harga		= 12000;
	
	cout<<"============================================"<<endl;
	cout<<"===== BERIKUT 1 KARYA BUKU BUATAN SAYA ====="<<endl;
	cout<<"Kode Buku \t= "<<work.kodBuk<<endl;
	cout<<"Nama Buku \t= "<<work.NameBuk<<endl;
	cout<<"Tahun Terbit \t= "<<work.TaTer<<endl;
	cout<<"Nama Pengarang \t= "<<work.Pengarang<<endl;
	cout<<"Harga \t\t= Rp."<<work.Harga<<endl;
	
	
getch();
	profile();
}
