#include <iostream>
#include <conio.h>
using namespace std;

void profile(){
	cout<<endl<<endl;
	cout<<"=================================="<<endl;
	cout<<"Nama  \t\t: Moch. Fahdin "<<endl;cout<<"NMP  \t\t: 065121154"<<endl;cout<<"Judul Tugas\t: Jumlah 5 angka"<<endl;
}

int Angka(){
	int a, f=0, jml;
	cout<< "---= PENJUMLAHAN 5 ANGKA (INPUTAN) =---"<<endl<<endl;
	cout<<" Masukan Jumlah angka = ";cin>>jml;
	cout<<endl;
	cout<<"============================="<<endl;
		
	for (int i=1; i<=jml; i++){
		cout<<" Masukan Angka ke-"<<i<<" = ";cin>>a;
	f = f + a;
	}
	cout<<" \n-----------------------------\nJumlah dari nilai diatas = "<<f;
	return f;
}

int main (){
	Angka();
	getch();
	profile();
}



