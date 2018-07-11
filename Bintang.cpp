#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int jum;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"|\t\t\tProgram Bintang\t\t\t|"<<endl;
	cout<<"---------------------------------------------------------"<<endl<<endl;
	cout<<"Masukkan Jumlah =  "; cin>>jum;
	
	for (int i=jum; i>=0; i--){
		cout<<endl;
		for (int j=i; j>=0; j--){
			cout<<" *";
		}
		for (int k=i; k<jum; k++){
			cout<<"  ";
		}
		
		for (int k=i; k<jum; k++){
			cout<<"  ";
		}
		for (int j=i; j>=0; j--){
			cout<<" *";
		}
	}
		
	
	for (int i=jum; i>=0; i--){
		cout<<endl;
		for (int j=i; j<=jum; j++){
			cout<<" *";
		}
		for (int k=i; k>0; k--){
			cout<<"  ";
		}
		
		for (int k=i; k>0; k--){
			cout<<"  ";
		}
		for (int j=i; j<=jum; j++){
			cout<<" *";
		}		
	}
	cout<<endl<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"|\t\t\tBayu Satya Saputra\t\t\t|"<<endl;
	cout<<"|\t\t\t    20170801174    \t\t\t|"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<endl;
	getch();
}

