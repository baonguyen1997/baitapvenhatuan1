
#include <iostream>
using namespace std;

void xau(char *S){
	int chuthuong = 0, chuhoa = 0, i = 0, j = 0;
	for (int i = 0; i<strlen(S); i++){
		if (S[i] >= 'A'&& S[i] <= 'Z'){
			++chuhoa;
		}
		if (S[j] >= 'a'&& S[j] <= 'z'){
			++chuthuong;
		}
	}
	cout << "So ki tu in  hoa: " << chuhoa << endl;
	cout << "So ki tu thuong: " << chuthuong << endl;

}


int main()
{
	char S[100];
	cout << "nhap chuoi: ";
	cin.getline(S, 100);
	xau(S);
	system("pause");
	return 0;
}