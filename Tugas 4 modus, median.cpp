#include <iostream>
using namespace std;

//Moch. Fahdin | 065121154

main (){

int pil, banyak[100], x, modus[100], k=1;
float nilai[100], jumlah=0, rata, med;
int total;

	cout<<"  Masukan Jumlah Bilangan = ";cin>>total;   
	cout<<"=============================="<<endl;
	for(int a=0; a<total; a++){
	cout<<"Masukan Bilangan ke"<<a+1<<" = "; cin>>nilai[a];       
}   
   	cout<<"----------------------------"<<endl;
	cout<<"     Nilai yg diurutkan    "<<endl;
	cout<<"----------------------------"<<endl;
	for(int i=0; i<total; i++)
	{
     for(int j=(i+1);j<total;j++)
      {
       if(nilai[i]>nilai[j])
        {
         int tmp;
         tmp=nilai[i];
         nilai[i]=nilai[j];     //mengurutkan data
         nilai[j]=tmp;
        }
      }
    
      cout<<nilai[i]<<"  ";
   }
   	
	cout<<endl;
	//(3) mencari mean
	for(int i=0;i<total;i++){
	jumlah=jumlah+nilai[i];
	}
	
	rata=jumlah/total;   
	cout<<"---------------------------"<<endl;
	cout<<"Mean nya \t= "<<rata<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	
	//(4) mencari median
	if(total%2==0){
	    med=(nilai[(total/2)]+nilai[(total/2)-1])/2;
	}
	else{
	    med=nilai[(total/2)];
	}
	cout<<"---------------------------"<<endl;
	cout<<"Median nya \t= "<<med<<endl;
	cout<<"---------------------------"<<endl;	 
	}

