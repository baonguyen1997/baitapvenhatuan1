#include <iostream>

using namespace std;

int main()
{
char a[100];
cout << "nhap chuoi: ";
cin.getline(a, 100);
for (int i = strlen(a) - 1; i >= 0; i--)
{
cout << a[i] <<"\n";
}
system("pause");
return 0;
}