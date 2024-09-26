#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
#include <conio.h>
using namespace std;

#include "ThuVien.h"
#include "Menu.h"

void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	//_getch();
	return 1;
}
void ChayChuongTrinh()
{
	LL l;
	BD g;

	if (TapTin_List_LL("llsv.txt", l) && TapTin_List_BD("diemqt.txt", g)) {

		XuatBangDiem(l, g);
	}
	else
		cout << "\nLoi mo tap tin";



}