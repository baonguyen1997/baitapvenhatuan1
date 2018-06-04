#include <stdio.h>
#include <iostream>
using namespace std;

long ucln(long a, long b)
{
while (a != b){
	if (a>b){
		a = a - b;
	}
	if (a<b){
		b = b - a;
	}
};
return b;
}

int main()
{
long a, b;
cout << "nhap a = ";
cin >> a;
cout << "nhap b = ";
cin >> b;
cout << "UCLN : " << ucln(a, b) << endl;
cout << "BCNN : " << a*b / ucln(a, b) << endl;
system("pause");
return 0;
}