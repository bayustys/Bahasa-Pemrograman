#include<iostream>	//untuk menampilkan perintah dengan bahasa c++
#include<string>	//untuk menampilkan karakter
#include<conio.h>	//untuk menampilkan getch
using namespace std;

void header()								//function void untuk tampilan header
{
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"|\t\tProgram Daftar NIilai\t\t\t|"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
}

void name()									//function void untuk tampilan nama pembuat program
{
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|\t\tBayu Satya Saputra\t\t|"<<endl;
	cout<<"|\t\t   20170801174  \t\t|"<<endl;
	cout<<"-------------------------------------------------"<<endl;

}

int main()									//function main program
{
	system("color A");						//function system color untuk mengubah warna output
	float i,bi3,bi4,bi5,bing3,bing4,bing5,mtk3,mtk4,mtk5,fis3,fis4,fis5,kim3,kim4,kim5,bio3,bio4,bio5;		//deklarasi variabel sebagai float
	float n,usbi,usbing,usmtk,usfis,uskim,usbio,unbi,unbing,unmtk,unfis,unkim,unbio;
	float nrbi,nrbing,nrmtk,nrfis,nrkim,nrbio;
	float nsbi,nsbing,nsmtk,nsfis,nskim,nsbio;
	float nabi,nabing,namtk,nafis,nakim,nabio;
	float rtsm3,rtsm4,rtsm5,rtnr,rtus,rtns,rtun,rtna;
	string nama;							//deklarasi variabel nama sebagai string
	header();								//untuk memanggil void header
	name();									//untuk memanggil void name
	
	cout<<"Jumlah Siswa : "; cin>>n;		//untuk menentukan jumlah siswa yg akan di input
	
	for(i=0; i<n; i++){						//untuk looping sesuai input jumlah siswa
	cout<<"\n\nDATA KE "<<i+1;
	cout<<"\n\nNama Siswa	: "; cin>>nama;
	cout<<endl<<endl;
	cout<<"Bahasa Indonesia"<<endl;
	cout<<"\nsemester 3 : "; cin>>bi3;
	cout<<"\nsemester 4 : "; cin>>bi4;
	cout<<"\nsemester 5 : "; cin>>bi5;
	
	nrbi=(bi3+bi4+bi5)/3;					//rumus untuk mencari nilai NR B Indonesia
	
	cout<<"\nNR	: "<<nrbi;
	cout<<"\n----------------------------------------------------------------------";
	
	cout<<endl;
	cout<<"Bahasa Inggris"<<endl;
	cout<<"\nsemester 3 : "; cin>>bing3;
	cout<<"\nsemester 4 : "; cin>>bing4;
	cout<<"\nsemester 5 : "; cin>>bing5;
	
	nrbing=(bing3+bing4+bing5)/3;			//rumus untuk mencari nilai NR B Inggris
	
	cout<<"\nNR	: "<<nrbing;
	cout<<"\n----------------------------------------------------------------------";
	
	cout<<endl;
	cout<<"Matematika"<<endl;
	cout<<"\nsemester 3 : "; cin>>mtk3;
	cout<<"\nsemester 4 : "; cin>>mtk4;
	cout<<"\nsemester 5 : "; cin>>mtk5;
	
	nrmtk=(mtk3+mtk4+mtk5)/3;				//rumus untuk mencari nilai NR Matematika
	
	cout<<"\nNR	: "<<nrmtk;
	cout<<"\n----------------------------------------------------------------------";
	
	cout<<endl;
	cout<<"Fisika"<<endl;
	cout<<"\nsemester 3 : "; cin>>fis3;
	cout<<"\nsemester 4 : "; cin>>fis4;
	cout<<"\nsemester 5 : "; cin>>fis5;	
	
	nrfis=(fis3+fis4+fis5)/3;				//rumus untuk mencari nilai NR Fisika
	
	cout<<"\nNR	: "<<nrfis;
	cout<<"\n----------------------------------------------------------------------";

	cout<<endl;
	cout<<"Kimia"<<endl;
	cout<<"\nsemester 3 : "; cin>>kim3;
	cout<<"\nsemester 4 : "; cin>>kim4;
	cout<<"\nsemester 5 : "; cin>>kim5;
	
	nrkim=(kim3+kim4+kim5)/3;				//rumus untuk mencari nilai NR Kimia
	
	cout<<"\nNR	: "<<nrkim;
	cout<<"\n----------------------------------------------------------------------";
	
	cout<<endl;
	cout<<"Biologi"<<endl;
	cout<<"\nsemseter 3 : "; cin>>bio3;
	cout<<"\nsemseter 4 : "; cin>>bio4;
	cout<<"\nsemseter 5 : "; cin>>bio5;
		
	nrbio=(bio3+bio4+bio5)/3;				//rumus untuk mencari nilai NR Biologi
	
	cout<<"\nNR	: "<<nrbio;
	cout<<"\n----------------------------------------------------------------------";
	
	cout<<endl;
	cout<<"Input Nilai US"<<endl;
	cout<<"\nB Indonesia	: "; cin>>usbi;
	cout<<"\nB Inggris	: "; cin>>usbing;
	cout<<"\nMatematika	: "; cin>>usmtk;
	cout<<"\nFisika		: "; cin>>usfis;
	cout<<"\nKimia		: "; cin>>uskim;
	cout<<"\nBiologi		: "; cin>>usbio;
	cout<<"\n----------------------------------------------------------------------";

	
	cout<<endl;
	cout<<"Input Nilai UN"<<endl;
	cout<<"\nB Indonesia	: "; cin>>unbi;
	cout<<"\nB Inggris	: "; cin>>unbing;
	cout<<"\nMatematika	: "; cin>>unmtk;
	cout<<"\nFisika		: "; cin>>unfis;
	cout<<"\nKimia		: "; cin>>unkim;
	cout<<"\nBiologi		: "; cin>>unbio;
	cout<<"\n----------------------------------------------------------------------";
	
	cout<<endl;
	
	nsbi = 70*nrbi/100 + 30*usbi/100;			//rumus untuk mencari nilai NS
	nsbing = 70*nrbing/100 + 30*usbing/100;
	nsmtk = 70*nrmtk/100 + 30*usmtk/100;
	nsfis = 70*nrfis/100 + 30*usfis/100;
	nskim = 70*nrkim/100 + 30*uskim/100;
	nsbio = 70*nrbio/100 + 30*usbio/100;
	
	cout<<"NS	:"<<endl;
	cout<<"\nB Indonesia	: "<<nsbi; 
	cout<<"\nB Inggris	: "<<nsbing;
	cout<<"\nMatematika	: "<<nsmtk;
	cout<<"\nFisika		: "<<nsfis;
	cout<<"\nKimia		: "<<nskim;
	cout<<"\nBiologi		: "<<nsbio;
	cout<<"\n----------------------------------------------------------------------";
	
	cout<<endl;
	
	nabi = 40*nsbi/100 + 60*unbi/100;			//rumus untuk mencari nilai NA
	nabing = 40*nsbing/100 + 60*unbing/100;
	namtk = 40*nsmtk/100 + 60*unmtk/100;
	nafis = 40*nsmtk/100 + 60*unfis/100;
	nakim = 40*nskim/100 + 60*unkim/100;
	nabio = 40*nsbio/100 + 60*unbio/100;
	
	cout<<"NA	:"<<endl;
	cout<<"\nB Indonesia	: "<<nabi; 
	cout<<"\nB Inggris	: "<<nabing;
	cout<<"\nMatematika	: "<<namtk;
	cout<<"\nFisika		: "<<nafis;
	cout<<"\nKimia		: "<<nakim;
	cout<<"\nBiologi		: "<<nabio;
	cout<<"\n----------------------------------------------------------------------";
	
	cout<<endl;
	
	rtsm3=(bi3+bing3+mtk3+fis3+kim3+bio3)/6;	//rumus untuk mencari nilai rata-rata
	rtsm4=(bi4+bing4+mtk4+fis4+kim4+bio4)/6;
	rtsm5=(bi5+bing5+mtk5+fis5+kim5+bio5)/6;
	rtnr=(nrbi+nrbing+nrmtk+nrfis+nrkim+nrbio)/6;
	rtus=(usbi+usbing+usmtk+usfis+uskim+usbio)/6;
	rtns=(nsbi+nsbing+nsmtk+nsfis+nskim+nsbio)/6;
	rtun=(unbi+unbing+unmtk+unfis+unkim+unbio)/6;
	rtna=(nabi+nabing+namtk+nafis+nakim+nabio)/6;

	
	cout<<"Rata-Rata";
	cout<<"\nSemester 3	: "<<rtsm3;
	cout<<"\nSemester 4	: "<<rtsm4;
	cout<<"\nSemester 5	: "<<rtsm5;
	cout<<"\nNR		: "<<rtnr;
	cout<<"\nUS		: "<<rtus;
	cout<<"\nNS		: "<<rtns;
	cout<<"\nUN		: "<<rtun;
	cout<<"\nNA		: "<<rtna;
	cout<<"\n----------------------------------------------------------------------";
	
	if(nabi >= 4.0 && nabing >= 4.0 && namtk >= 4.0 && nakim >= 4.0 && nabio >= 4.0 && rtna >= 5.5)			//function reprtition untuk menentukan lulus atau tidak sesuai condition
	{
		cout<<"\nLulus";
		cout<<endl;
	}
	else
	{
		cout<<"\nTidak Lulus";
		cout<<endl;
	}
	}
	getch();									//untuk menghentikan proses yg berjalan
}
