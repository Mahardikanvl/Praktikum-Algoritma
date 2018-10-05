#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main ()
{
	double TB, BB;
	cout<<"Masukan data TB : ";
	cin>>TB;
	BB = TB - 100 - (0.1 *(TB -100));
	cout<<BB<<"BB";
	return 0;
}
