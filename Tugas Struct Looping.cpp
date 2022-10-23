#include <iostream>
#include <conio.h>
using namespace std;
profile(){
	cout<<"\n\n\n\n\n==================================\n";
	cout<<"Nama \t= Moch. Fahdin"<<endl;
	cout<<"NPM \t= 065121154"<<endl;
}
struct dataKTP{
	double nik;
	string nama, jenisKel, alamat, agama;
};

int main (){
	int jml;
	
	cout<<"Masukan Jumlah KTP \t : ";cin>>jml;
	
	dataKTP dat[jml];
	for (int a=0; a<jml; a++){
		cout<<endl<<endl;
		cout<<"["<<a+1<<"]--- ";
		
		cout<<"ISI DATA BERIKUT : "<<endl<<endl;
		cout<<"No.NIK \t\t: ";cin>>dat[a].nik;
		cin.ignore();
		cout<<"Nama \t\t: ";getline(cin,dat[a].nama);
		cout<<"Jenis Kelamin \t: ";getline(cin,dat[a].jenisKel);
		cout<<"Alamat \t\t: ";getline(cin,dat[a].alamat);
		cout<<"Agama \t\t: ";getline(cin,dat[a].agama);
	}
	system("cls");
	cout << "HASIL : \n";
	for (int a=0; a<jml; a++){
		cout<<endl<<endl;
		cout<<"["<<a+1<<"]--- ";
		
		cout<<"====== DATA YANG TERSIMPAN ======"<<endl<<endl;
		cout<<"No.NIK \t\t: "<<dat[a].nik<<endl;
		cout<<"Nama \t\t: "<<dat[a].nama<<endl;
		cout<<"Jenis Kelamin \t: "<<dat[a].jenisKel<<endl;
		cout<<"Alamat \t\t: "<<dat[a].alamat<<endl;
		cout<<"Agama \t\t: "<<dat[a].agama<<endl;
	}
	
	
	getch();
	profile();
}
