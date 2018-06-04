#include<iostream>
#include<string>
using namespace std;

//xóa các khoảng trắng thừa ở đầu cuối
void Xoakhoangtrang_daucuoi(string &str)
{
//xóa ký tự trắng thừa đầu chuỗi
while (str[0]==' ')
{
str.erase(str.begin() + 0); //xóa ký tự tại vị trí 0
}

//xóa ký tự trắng cuối chuỗi
while (str[str.length()-1] == ' ')
{
str.erase(str.begin() + (str.length() - 1)); //xóa ký tự tại vị trí 0
}
}

//hàm xóa khoảng trắng thừa giữa cắc từ
void Xoakhoangtrang_giuacactu(string &str)
{
for (int i = 0; i < str.length(); i++)
{
if (str[i] == ' ' && str[i + 1] == ' '){
str.erase(str.begin() + i);
i--;
}
}
}

//xóa dấu cách trước dấu . ,
void Xoakhoangtrang_truocdau(string &str)
{
for (int j = 0; j < str.length(); j++)
{
if ((str[j] == ' ' && str[j + 1] == '.') || (str[j] == ' ' && str[j + 1] == ',')){
str.erase(str.begin() + j);
j--;
}
}
}

//thêm dấu cách trước dấu . ,
void Themkhoangtrang_truocdau(string &str)
{
for (int k = 0; k < str.length(); k++)
{
if ((str[k] == '.' && str[k + 1] != ' ') || (str[k] == ',' && str[k + 1] != ' '))
{
str.insert( (k + 1)," ");
}
}
}

//2 dấu chấm, phảy cạnh nhau
void Xoadau(string &str)
{
for (int m = 0; m < str.length(); m++)
{
if ((str[m] == ',' && str[m + 1] == ',') || (str[m] == '.' && str[m + 1] == '.')){
str.erase(str.begin() + m);
m--;
}
}
}

int main()
{
string str;
cout << "nhap chuoi:";
getline(cin, str);
cout << "\nDo dai chuoi:" << str.length();

Xoakhoangtrang_daucuoi(str);
Xoakhoangtrang_giuacactu(str);
Xoakhoangtrang_truocdau(str);
Xoadau(str);
Themkhoangtrang_truocdau(str);

cout << "\nChuoi sau khi xoa:" << str;
cout << "\nDo dai chuoi sau xoa:" << str.length();
cout << "\n";
system("pause");
return 0;
}