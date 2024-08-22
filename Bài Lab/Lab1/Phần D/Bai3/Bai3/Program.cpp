

#include <iostream>
using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();
int main()
{

	int menu, somenu = 5;

	int n = 0;

	do {
		menu = ChonMenu(somenu);
		XuLyMenu(menu, n);
		system("PAUSE");
	}
	while (menu > 0);

	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh() {

}