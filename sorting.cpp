#include <iostream>
using namespace std;


int main(){
	int batas;
	int temp;
	cout << "Masukan Batas Indek : ";
	cin >> batas;
	int nilai[batas];
	
	for (int a=0; a<batas; a++){
		cout << "Input Nilai ke-"<<a+1<<" : ";
		cin >> nilai[a]; 
	}
	
	for (int a=1; a<batas; a++){
		for (int b=0; b<batas-a; b++){
			if(nilai[b]>nilai[b+1]){
				temp = nilai[b];
				nilai[b] = nilai[b+1];
				nilai[b+1] = temp;
			}
		}
	}
	cout << "Hasil disorting : ";
	for (int a=0; a<batas; a++){
		cout << nilai[a] << " ";
	}
	cout<<endl;
}
