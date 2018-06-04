#include<iostream>
using namespace std;

int main()
{
	int m;
	int giaca = 0;
	cout << "nhap so met da di: "; cin >> m;
	cout << "\nso met da di la: " << m << "  Met";

	if (m <= 1000) {
		cout << "\nSo tien phai tra la 10.000 VND \n";
	}
	else{
		if ((1000<m) && (m <= 30000))  {
			giaca = 10000 + (m - 1000)*7.5;
			cout << "So tien phai tra la: " << giaca << "VND \n";
		}

		else
		{  
			giaca = 10000 + (30000 - 1000)*7.5 + (m - 30000) * 8;
			cout << "So tien phai tra la: " << giaca << "VND \n";
		}
	}

	system("pause");
	return 0;
}
