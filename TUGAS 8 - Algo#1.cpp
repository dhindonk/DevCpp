#include <iostream>
using namespace std;
/*-----------------------------------------
		Nama 	: Moch. Fahdin
		NPM		: 065121154
------------------------------------------- 		
*/
	//RUMUS SEGITIGA = 1/2 * ALAS * TINGGI
	//Luas nya = tinggal di tambah saja semua nya
double luas(double a, double t){	//fungsi & rumus luasnya
	double L = 0.5 * a * t;
	return L;		
}
void segitiga (double a, double b){		//disini ana pake prosedur biar mempercantik codingannya, dan biar simple aja gt.
	double L = luas(a, b);
	cout<<"LUAS SEGITIGA"<<endl;
	cout<<"L = 1/2 x alas x tinggi"<<endl;
	cout<<"L = 1/2 x "<<a<<"cm x "<<b<<"cm"<<endl;
	cout<<"L = "<<L<<"cm";	
}
double Keliling (double a, double b){
	cout<<endl;
	cout<<"=========================="<<endl;
	cout<<"KELILING SEGITIGA"<<endl;
	cout<<"K = alas + sisi + sisi"<<endl;
	cout<<"K = "<<a+b+b;
	return a+b+b;
}
int main (){
	cout<<"================================================"<<endl;
	cout<<"                Moch. Fahdin\n                065121154"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<endl;
	
	double a, b;	//tipe data ampe bawah
	string looping;
do{					//perulangan atau looping supaya bisa input beberapa kali sampe pegel
	system("cls");	// buat bersihin layarnya 
	cout<<"====== MENCARI LUAS & KELILING SEGITIGA ======\n"<<endl;
	cout<<"Masukan Nilai Alas   = ";cin>>a;		//inpt
	cout<<"Masukan Nilai Tinggi = ";cin>>b;		//inpt
	cout<<"--------------------------------";
	cout<<endl;
	
	segitiga(a, b);
	
	cout<<endl;			//kasih nafas
	Keliling(a, b);
	cout<<endl;
	cout<<endl;
	cout<<"Coba Lagi (y/t) ? = ";cin>>looping;
	
}while (looping == "y"|| looping == "ya");			//jika stetment nya true maka akan diulangi ke atas
	cout<<"------------------------------->"<<endl;
	cout<<"\nTerima Kasih, Mampir lagi ka:v"<<endl;
}
