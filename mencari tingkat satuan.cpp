#include <iostream>
#include <string.h>
using namespace std;

main(){
	string nama[] = {"km","hm","dam","m","dm","cm","mm"};
	string one;
	
	cout << "mm\n  cm\n    dm\n      m\n        dam\n          hm\n            km"<<endl;
	
	cout << "\nKetik salah satu yg diatas --> ";cin>>one;
	int batas = sizeof(nama)/sizeof(*nama);
	
	for(int a=0; a<batas; a++){
		if (one == nama[a]){
			cout<<"Ini Berada disatuan ke- "<<a+1<<endl;
		}
	}
	
}


