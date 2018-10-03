#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int huruf;
cout<<"masukkan huruf kecil : ";
cin>>huruf;
cout<<endl;
//seleksi pembanding OR, salah satu kondisi bernilaibenar
if ((huruf = 'a') || (huruf = 'i') || (huruf = 'u') || (huruf = 'e') || (huruf = 'o'))
{
	cout<<"anda memasukan huruf fokal";
} else
{
	cout<<"yang anda masukan adalah huruf konsonan";
}
return 0;
}
