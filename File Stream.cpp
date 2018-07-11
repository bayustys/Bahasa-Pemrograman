#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

struct data
{
	char nama[30];
	char jurusan[40];
};
data mhs;

char file[15], file2[15], file3[15];

void inputdata()
{
	system("cls");
    cout<<"Input nama file (.txt): ";
    cin.getline(file,15);
    ofstream simpan (file);
    cout<<"\n\n Nama		: ";
    cin.getline(mhs.nama,30);
    simpan<<mhs.nama<<endl;
    cout<<"\n Jurusan	: ";
    cin.getline(mhs.jurusan,40);
    simpan<<mhs.jurusan;
    system("pause");
    system("cls");
}

void tambahdata()
{
	system("cls");
    cout<<"Input nama file (.txt): ";
    cin.getline(file,15);
    ofstream simpan (file, ios::app);
    cout<<"\n\n Nama		: ";
    cin.getline(mhs.nama,30);
    simpan<<endl<<mhs.nama<<endl;
    cout<<"\n Jurusan	: ";
    cin.getline(mhs.jurusan,40);
    simpan<<mhs.jurusan;
	system("pause");
	system("cls");

}

void bacadata()
{
	system("cls");
    cout<<"Input nama file (.txt): ";
    cin.getline(file,15);
    ifstream buka (file);
    if(buka.good())
    {
        while(!buka.eof())
        {
            while(buka)
            { 
                buka.getline(mhs.nama,30);    
                cout<<mhs.nama<<endl;
                buka.getline(mhs.jurusan,40);    
                cout<<mhs.jurusan<<endl;
            }
        }
        system("pause");
        system("cls");
    }
    else cout<<"File Tidak Ada"<<endl;
    system("pause");
    system("cls");
}

void gabungdata()
{
	system("cls");
    cout<<"Input nama file ke 1 (.txt): ";
    cin.getline(file2,15);
    cout<<"Input nama file ke 2 (.txt): ";    
    cin.getline(file3,15);
    ifstream buka1 (file2);
    ifstream buka2 (file3);
    
    ofstream gabung("gabung.txt");
    ofstream gabung2("gabung.txt", ios::app);
    
    while(buka1)
    {
        buka1.getline(mhs.nama,30);    
        gabung<<mhs.nama<<"\n";
        buka1.getline(mhs.jurusan,40);    
        gabung<<mhs.jurusan<<"\n";
        buka1.close();
        gabung.close(); 
    } 

    while(buka2)
    {
        buka2.getline(mhs.nama,30);    
        gabung2<<mhs.nama<<"\n";
        buka2.getline(mhs.jurusan,40);    
        gabung2<<mhs.jurusan<<"\n";
        buka2.close();
        gabung2.close();
    }
    system("pause");
    system("cls");    
}

void head()
{
	cout<<"-------------------------------------------------"<<endl;
	cout<<"|\t\tBayu Satya Saputra\t\t|"<<endl;
	cout<<"|\t\t   20170801174  \t\t|"<<endl;
	cout<<"-------------------------------------------------"<<endl;
}

main()
{	
	int pil;
	char out;
	menu:
	head();
	cout<<"\n -----Program Data File-----";
	cout<<"\n 1. Input Data";
	cout<<"\n 2. Tambah Data";
	cout<<"\n 3. Baca Data";
	cout<<"\n 4. Gabung Data";
	cout<<"\n 5. Keluar";
	cout<<"\nPilih Salah Satu : "; cin>>pil; cin.ignore();
	
	if(pil==1)
	{
		head(); inputdata(); goto menu;
	}
	if(pil==2)
	{
		head(); tambahdata(); goto menu;
	}
	if(pil==3)
	{
		head(); bacadata(); goto menu;
	}
	if(pil==4)
	{
		head(); gabungdata(); goto menu;
	}
	if(pil==5)
	{
		cout<<"\n Apakah Anda Ingin Keluar? [y]/[t] : "; cin>>out;
		if(out=='y'||out=='Y')
		{
			return 0;
		}
		if(out=='t'||out=='T')
		{
			cout<<endl; system("pause"); system("cls"); goto menu;
		}
		else
			cout<<"\n Maaf Pilihan tidak tersedia\n\n"; system("pause"); system("cls"); goto menu; 
	}
	else
		cout<<"\n Maaf Pilihan tidak tersedia\n\n"; system("pause"); system("cls"); goto menu; 

}
