
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

#include "Thuvien.h"

void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int Kichthuocbanco;
	//toa do dau
	int x, y;

	//ma tran luu duong di cua ngua
	int h[MAX][MAX];
	int slg = 0;
	system("CLS");
	cout << endl << "Nhap kich thuoc ban co: n = ";
	cin >> Kichthuocbanco;
	cout << "\nNhap toa do dau ";
	cout << "\nx = ";
	cin >> x;
	cout << "\ny = ";
	cin >> y;
	Init(h, Kichthuocbanco);
	h[x][y] = 1;
	Try(2, x, y, h, Kichthuocbanco, slg);
	if (!slg)
		cout << "\nKhong co loi giai!";
	else
		cout << "\nSo loi giai : " << slg;
}