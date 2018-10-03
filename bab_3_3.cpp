#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int angka;
	cout<<"Masukan angka : "; cin>>angka;
	cout<<endl;
	//seleksi pembanding AND, kedua kondisi harus bernilai benar
	if ((angka>0) &&(angka <10))
	{cout<<"Anda memasukan angka antara 1 sampai 9";
}else
{
	cout<<"yang anda masukan bukan antra 1 sampai 9";
}
return 0;
	}
