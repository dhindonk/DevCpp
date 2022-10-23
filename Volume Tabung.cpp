#include <iostream>
#include <cmath>
using namespace std;

int Luas(int r, int tinggi){
	const float phi = 3.14;
	float LuasL = phi*r*r*tinggi;
	return LuasL;		
}


int main (){
	int r,t;
	cout<<"Masukan Nilai Jari2 = ";cin>>r;
	cout<<"Masukan Nilai Tingginya = ";cin>>t;
	cout<<"\t\nVolume Tabung dengan jari2 "<<r<<" dan Tinggi "<<t<<" adalah "<<Luas(r,t);
	
	return 0;
}
