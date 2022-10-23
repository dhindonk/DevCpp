#include <iostream>
#include <conio.h>
using namespace std;

void profile(){
	cout<<endl<<endl;
	cout<<"=================================="<<endl;
	cout<<"Nama  \t\t: Moch. Fahdin "<<endl;cout<<"NMP  \t\t: 065121154"<<endl;cout<<"Judul Tugas\t: Jumlah 5 angka"<<endl;
}

main(){
int i,j,matrik[10][10],matrik2[10][10];	
float hasilbagi,det,a,b,c,d;			

cout<<" Matrik 2 x 2 ? "<<endl;
for(i=0;i<=1;i++){		
for(j=0;j<=1;j++){
cout<<endl;
cout<<" matrik ["<<i<<"]["<<j<<"] = "; cin>>matrik[i][j];		
}
}
cout<<endl;
for(i=0;i<=1;i++){		
for(j=0;j<=1;j++){
cout<<matrik[i][j]<<" ";
}
cout<<endl;
}

getch();
profile();
return 0;
}
