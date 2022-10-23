#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int xx;
	//Tekan ESC untuk mengakhiri program
	do{
		xx = getch();
		system("cls");
		if (xx == 224){
		xx = getch();
			
			switch (xx){		
				case 77 : cout<<"Kanan\n";
				break;
				case 75 : cout<<"Kiri\n";
				break;
				case 72 : cout<<"Atas\n";
				break;
				case 80 : cout<<"Bawah\n";
				break;
			}
		}
		else
		{
		cout<<(char)xx<<endl;	
		}
		
		
	}while (xx != 27);
	

}
