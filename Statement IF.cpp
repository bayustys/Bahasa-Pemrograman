#include<iostream>
using namespace std;

int a, b, c;
main(){
	cout<<"Input Number a	:";
	cin>>a;
	cout<<"Input Number b	:";
	cin>>b;
	cout<<"Input Number c	:";
	cin>>c;
	
	if(a>b){
		if(a>c){
			cout<<"Nilai Terbesar Adalah A";
		}
		else{
			cout<<"Nilai Terbesar Adalah C";
		}
	}
	else{
		if(b>c){
			cout<<"Nilai Terbesar Adalah B";
		}
		else{
			cout<<"Nilai Terbesar Adalah C";
		}
	}
}
