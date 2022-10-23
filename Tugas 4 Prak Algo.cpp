#include <iostream>
#include <conio.h>
using namespace std;
/*
   MENCARI LUAS & KELILING SEEGITIGA, PERSEGI & LINGKARAN
   RUMUS SEGITIGA
   luas = 1/2 x alas x tinggi
   k = s + s + s
   
   rumus persegi panjang 
   keliling = 2 (p+l)
   luas = p x l

	rumus lingkaran
	luas = phi x r x r
	k = 2 x phi x r
  
*/

main(){
	int pilih,aa;
	double alas, tinggi, panjang, lebar, sisi, jari;
	const float phi = 3.14;
	
	cout<<"+------Masukan Pilihan------+"<<endl;
	cout<<"#===========================#\n"<<endl;
	cout<<"1. Mencari Luas & Keliling Segitiga"<<endl;
	cout<<"2. Mencari Luas & Keliling Persegi Panjang"<<endl;
	cout<<"3. Mencari Luas & Keliling Lingkaran\n"<<endl;
	cout<<"Pilih (1/2/3) = ";cin>>pilih;

	switch (pilih){
		case 1 : 
		system("cls");
		cout<<"Masukan Alas     = ";cin>>alas;
		cout<<"Masukan Tinggi   = ";cin>>tinggi;
		cout<<"Masukan Sisi     = ";cin>>sisi;
		cout<<endl;
		system ("cls");
		cout<<"=========================="<<endl;
		cout<<"       LUAS SEGITIGA      "<<endl;
		cout<<"=========================="<<endl;
		cout<<"  L = 1/2 x alas x tinggi"<<endl;
		cout<<"  L = 1/2 x "<<alas<<" x "<<tinggi<<endl;
		cout<<"  L = "<<1/2*alas*tinggi;
		cout<<endl;
		cout<<endl;
		cout<<"=========================="<<endl;
		cout<<"     KELILING SEGITIGA    "<<endl;
		cout<<"=========================="<<endl;
		cout<<"  K = s + s + s"<<endl;
		cout<<"  K = "<<sisi+sisi+sisi;
		break;
		
		case 2 : 
		system("cls");
		cout<<"Masukan Panjang 	= ";cin>>panjang;
		cout<<"Masukan Lebar    = ";cin>>lebar;
		cout<<endl;
		system ("cls");
		cout<<"=========================="<<endl;
		cout<<"   LUAS PERSEGI PANJANG   "<<endl;
		cout<<"=========================="<<endl;
		cout<<"  L = p x l "<<endl;
		cout<<"  L = "<<panjang<<" x "<<lebar<<endl;
		cout<<"  L = "<<panjang*lebar;
		cout<<endl;
		cout<<endl;
		cout<<"=========================="<<endl;
		cout<<" KELILING PERSEGI PANJANG "<<endl;
		cout<<"=========================="<<endl;
		cout<<"  K = 2 (p+l)"<<endl;
		cout<<"  K = 2 ( "<<panjang<<" + "<<lebar<<" )"<<endl;
		cout<<"  K = "<<2*panjang+lebar;
		break;
		
		case 3 : 
		system("cls");
		cout<<"Masukan Jari-jari  = ";cin>>jari;
		
		cout<<endl;
		system ("cls");
		cout<<"=========================="<<endl;
		cout<<"       LUAS LINGKARAN     "<<endl;
		cout<<"=========================="<<endl;
		cout<<"  L = phi x r x r"<<endl;
		cout<<"  L = "<<phi<<" x "<<jari<<" x "<<jari<<endl;
		cout<<"  L = "<<phi*jari*jari;
		cout<<endl;
		cout<<endl;
		cout<<"=========================="<<endl;
		cout<<"    KELILING LINGKARAN    "<<endl;
		cout<<"=========================="<<endl;
		cout<<"  K = 2 x phi x r"<<endl;
		cout<<"  K = 2 x "<<phi<<" x "<<jari<<endl;
		cout<<"  K = "<<2*phi*jari;
		break;
		
		default :
		cout<<"TERIMA KASIH ATAS KUNJUNGANNYA wkwk";
	}

	getch();
}
