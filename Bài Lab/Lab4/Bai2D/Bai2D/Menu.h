#pragma once
void Menu();

void Menu() {
	cout << "==================== MENU ===========================";
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Tao du lieu";
	cout << "\n2. Xem du lieu";
	cout << "\n3. Tinh diem trung binh cho sinh vien";
}

void XuLymenu(LLSinhVien sv, int n) {

	int LuaChon;
	LL l;
	BD g;
	cin >> LuaChon;
	switch (LuaChon)
	{
		case 0:
			system("pause");
			cout << "\n0. Thoat chuong trinh";
			break;
		case 1:
			system("pause");
			cout << "\n1. Tao du lieu";

			char file_sv[20], file_score[20];
			cout << "Nhap ten file chua danh sach sinh vien";
			cout << "Nhap ten file chua bang diem sinh vien";
			cin >> file_sv;
			cin >> file_score;

			if (TapTin_List_LL(file_sv, l) && TapTin_List_BD(file_score, g)) {
				
				XuatBangDiem(l, g);
				cout << "Thanh cong";
			}
			else {
				cout << "\nLoi mo tap tin";
			}
			
			cout << endl;
			break;
		case 2:
			system("pause");
			cout << "\n2. Xem du lieu";
			cout << "Danh sach sinh vien la: ";
			cout << endl;
			cout << "Bang diem sinh vien la: ";
			cout << endl;
			system("CLS");
			break;
		default:
			break;
	}
}