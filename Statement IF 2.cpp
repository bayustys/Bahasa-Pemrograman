#include<iostream>
#include<conio.h>
using namespace std;
int jalan;
main(){
	cout<<"=====Test Keselamatan====="<<endl<<endl;
	cout<<"1. Jalan Yg Lurus Menuju Ridho Allah"<<endl;
	cout<<"2. Jalan Kemanggisan"<<endl;
	cout<<"3. Jalan-Jalan"<<endl;
	cout<<"4. Jalan Suka2"<<endl<<endl;
	cout<<"Pilih Jalan"<<endl;
	cin>>jalan;
	if(jalan==1){
		cout<<"Alhamdulillah Anda Selamat";
	}
	else if(jalan==2){
		cout<<"Hati2 dijalan";
	}
	else if(jalan==3){
		cout<<"Jalan2 sama siapa kan jomblo:(";
	}
	else if(jalan==4){
		cout<<"Suka2 nyanyi di pinggir jalan";
	}
	getch();
}
