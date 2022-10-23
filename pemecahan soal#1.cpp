#include <iostream>
#include <conio.h>
using namespace std;

void profile(){
	cout<<endl<<endl;
	cout<<"=================================="<<endl;
	cout<<"Nama  \t\t: Moch. Fahdin "<<endl;cout<<"NMP  \t\t: 065121154"<<endl;cout<<"Judul Tugas\t: Jumlah 5 angka"<<endl;
}

int main (){
    cout<<"================== INILAH HASILNYA =================="<<endl<<endl;
    
	float a =0.2, f,x;	//untuk memenuhi syarat bilangan yg diinginkan	//yg float f itu menggantikan f(x)

    for (x = 10; x <= 15; x+=a){
        f = 2*x*x + 5*x - 8;
        cout <<x<<"\t\t\t\t"<<f<<endl;
    }
    
    getch();
	profile();
}

