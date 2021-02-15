#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	using namespace std;
	
	//dichiarazione 
	
	cout<<"Calcola il fattoriale ";
	int num,fatt=1;
	
	//Input
	
	cin>>num;
	
	//Processo
	
	for(num;num>=1;num--)
	{
	
	
	fatt=fatt*num;	
		
		
		
	}
	
	cout<<fatt;
	
	
	return 0;
}


