#include <iostream>
using namespace std;

//METHOD
string siswa(){								//fungsi
	string nama = "Fahdin";					//tipe data dengn nilai yg sudah input gays 
	string prodi = "Ilmu Komputer";			
	return (nama+" adalah seorang mahasiswa dari prodi "+prodi+" Universitas Pakuan");	//nilai kembalian ke atas
}

string mahasiswa(string nama, string kampus){		//fungsi
	return (nama+" adalah seorang mahasiswa dari "+kampus);	//kembalian
}

bool kelulusan(int lus){	//ana pke boolean agar bisa ditentukan true or false nya
	if (lus>=70){			//pke if (pengecualian)
		return true;		//statment true
	}
	else {
		return false;
	}  
}
void lulus (string name,double lus){	//method prosedur beserta beberapa rangkaian kata-kata mutiara didalamnya
	kelulusan(lus);
	cout<<"# HASIL PTS	"<<endl;
	cout<<"Nama Anda	 	= "<<name<<endl;
	cout<<"Dengan Nilai	 	= "<<lus<<endl;
	cout<<"Status		 	= ";
	if (kelulusan(lus)){
		cout<<"Selamat Anda Lulus";
	}
	else {
		cout<<"Makanya Belajar yang Rajin nak";
	}
}

int main (){
	cout<<"================================================"<<endl;
	cout<<"                Moch. Fahdin\n                065121154"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"============================\n";
	cout<<"         Level Easy         \n";
	cout<<"============================\n";
	cout<<endl;
	cout<<"-> "<<siswa();					//pemanggilang terhdp fungsi diatas
	
	cout<<"\n\n--------------------------------------------------\n\n";
	
	cout<<"============================\n";
	cout<<"        Level Medium        \n";
	cout<<"============================\n";
	string nama, kampus;				
	
	cout<<"\n# ISI BIODATA #"<<endl;
	cout<<"==============="<<endl;
	cout<<"Masukan Nama        = ";getline (cin, nama);
	cout<<"Masukan Nama Kampus = ";getline (cin, kampus);
	cout<<endl;
	
	cout<<"-> "<<mahasiswa(nama, kampus);	//pemanggilang terhdp fungsi diatas
	
	cout<<"\n\n--------------------------------------------------\n\n";
	
	cout<<"============================\n";
	cout<<"         Level Hard         \n";
	cout<<"============================\n";
	double lus;
	string name;
	
	cout<<"Masukan Nama Lengkap		= ";getline(cin, name);
	cout<<"Masukan Nilai PTS		= ";cin>>lus;
	cout<<"\n-------------------------------"<<endl;
	lulus(name, lus);						//pemanggilang terhdp prosedur diatas
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
