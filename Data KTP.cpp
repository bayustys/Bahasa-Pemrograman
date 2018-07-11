#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char nama [30];
	char alamat [30];
	char ttl [30];
	char tinggi [30];
	char pekerjaan [30];
	char no_sim [30];
	char berlaku_s_d [30];
	cout<<"INPUT DATA SIM\n";
	cout<<"Nama 		:";
	cin.getline(nama,30);
	cout<<"Alamat		:";
	cin.getline(alamat,30);
	cout<<"TTL		:";
	cin.getline(ttl,30);
	cout<<"Tinggi		:";
	cin.getline(tinggi,30);
	cout<<"Pekerjaan	:";
	cin.getline(pekerjaan,30);
	cout<<"No SIM		:";
	cin.getline(no_sim,30);
	cout<<"Berlaku s/d	:";
	cin.getline(berlaku_s_d,30);
getch();
}

