#include <iostream>
#include <conio.h>
using namespace std;

// 	Moch. Fahdin | 065121154

main(){
	int b,c,d, pilih;
	double celci,remur,fahren;
	
	cout<<"+------Masukan Pilihan------+"<<endl;
	cout<<"#===========================#\n"<<endl;
	cout<<"1. Konversi Celcius"<<endl;
	cout<<"2. Konversi Reamur"<<endl;
	cout<<"3. Konversi Fahrenhait"<<endl;
	cout<<"\nPilih = ";cin>>pilih;
	if (pilih == 1){
		system("cls");
		cout<<"=========================="<<endl;
		cout<<"     KONVERSI CELCIUS     "<<endl;
		cout<<"=========================="<<endl;
		cout<<"1. C to R\n2. C to F"<<endl;
		cout<<"\nPilih = ";cin>>b;
		if (b == 1){
			system("cls");
			cout<<"Masukan Nilai C = ";cin>>celci;
			double rumus6 = 0.8 * celci;
			cout<<"-----------------------"<<endl;
			cout<<"Rumus => R = 4/5 C"<<endl;
			cout<<"         R = 4/5 x "<<celci<<endl;
			cout<<"         R = "<<rumus6<<endl;
			cout<<"-----------------------"<<endl;
		}
		else if (b == 2){
			system("cls");
			cout<<"Masukan Nilai C = ";cin>>celci;
			double rumus5 = (1.8) * (celci+32);
			cout<<"-----------------------"<<endl;
			cout<<"Rumus => F = (9/5) C + 32"<<endl;
			cout<<"         F = (9/5) x "<<celci<<" + 32"<<endl;
			cout<<"         F = "<<rumus5<<endl;
			cout<<"-----------------------"<<endl;
		}}
		
	if (pilih == 2){
		system("cls");
		cout<<"=========================="<<endl;
		cout<<"      KONVERSI REAMUR     "<<endl;
		cout<<"=========================="<<endl;
		cout<<"1. R to C\n2. R to F"<<endl;
		cout<<"\nPilih = ";cin>>c;
		if (c == 1){
			system("cls");
			cout<<"Masukan Nilai R = ";cin>>remur;
			double rumus4 = 1.25 * remur;
			cout<<"-----------------------"<<endl;
			cout<<"Rumus => C = 5/4 R"<<endl;
			cout<<"         C = 5/4 x "<<remur<<endl;
			cout<<"         C = "<<rumus4<<endl;
			cout<<"-----------------------"<<endl;
		}
		if (c == 2){
			system("cls");
			cout<<"Masukan Nilai R = ";cin>>remur;
			double rumus3 = (2.25) * (remur+32);
			cout<<"-----------------------"<<endl;
			cout<<"Rumus => F = (9/4) R + 32"<<endl;
			cout<<"         F = 9/4 x "<<remur<<" + 32"<<endl;
			cout<<"         F = "<<rumus3<<endl;
			cout<<"-----------------------"<<endl;
	}
	}
	if (pilih == 3){
		system("cls");
		cout<<"=========================="<<endl;
		cout<<"    KONVERSI FAHRENHAIT   "<<endl;
		cout<<"=========================="<<endl;
		cout<<"1. F to C\n2. F to R"<<endl;
		cout<<"\nPilih = ";cin>>d;
		if(d == 1){
			system("cls");
			cout<<"Masukan Nilai F = ";cin>>fahren;
			double rumus1 = (0.555555) * (fahren-32);
			cout<<"-----------------------"<<endl;
			cout<<"Rumus => C = 5/9 (F-32)"<<endl;
			cout<<"         C = 5/9 x "<<fahren<<"-32"<<endl;
			cout<<"         C = "<<rumus1<<endl;
			cout<<"-----------------------"<<endl;
		}
		if (d == 2){
			system("cls");
			
			cout<<"Masukan Nilai F = ";cin>>fahren;
			double rumus = (0.444444) * (fahren-32);
			cout<<"-----------------------"<<endl;
			cout<<"Rumus => R = 4/9 (F-32)"<<endl;
			cout<<"         R = 4/9 x "<<fahren<<"-32"<<endl;
			cout<<"         R = "<<rumus<<endl;
			cout<<"-----------------------"<<endl;
		}
	}
	
	getch();
}
