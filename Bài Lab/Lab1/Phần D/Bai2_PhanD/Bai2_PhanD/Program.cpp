//(Bài toán hoán đổi 2 phần trong 1 dãy.)
//a[1..n] là một mảng gồm n phần tử.Ta cần chuyển m(1 ≤ m ≤ n) phần tử đầu tiên của mảng với phần còn lại của
//mảng(n - m phân tử) mà không dùng một mảng phụ .
	//Chẳng hạn, với n = 8, a[8] = (1, 2, 3, 4, 5, 6, 7, 8)
	//Nếu m = 3, thì kết quả là : (4, 5, 6, 7, 8, 1, 2, 3)
	//Nếu m = 5, thì kết quả là : (6, 7, 8, 1, 2, 3, 4, 5)
	//Nếu m = 4, thì kết quả là : (5, 6, 7, 8, 1, 2, 3, 4)


#include <iostream>
using namespace std;
#include "Thuvien.h"

void ChayChuongTrinh();
int main()
{
	cout << "Lab1 Bai 2" << endl;
	
	int a[MAX], n;
	int m;
	cout << "\nNhap so n = "; cin >> n;
	NhapDay(a, n);
	cout << "\nNhap so m = "; cin >> m;
	cout << "\nDay ban dau:\n";
	XuatDay(a, n);
	Transpose(a, n, m);
	cout << "\nDay ket qua:\n";
	XuatDay(a, n);
	cout << endl;
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	system("PAUSE");
}