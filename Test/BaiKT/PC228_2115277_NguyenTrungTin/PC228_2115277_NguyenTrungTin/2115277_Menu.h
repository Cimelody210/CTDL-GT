void Menu() {
	cout << "\n\n\t\t=====================MENU====================\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1. Tao danh sach sinh vien tu file.";
	cout << "\n2. Xem danh sach sinh vien.";
	cout << "\n3. Tim kiem tuyen tinh : xuat tat ca cac sinh vien trung ho, ten cho truoc va co nam sinh < x";
	cout << "\n4. Tim kiem tuyen tinh linh canh : tra ve chi so dau tien sinh vien co ten cho truoc.";
	cout << "\n5. Dung thuat giai chon truc tiep sap danh sach tang dan theo nam sinh. ";
	cout << "\n6. Dung thuat giai chen truc tiep sap danh sach tang dan theo ho, ten sinh vien. ";
	cout << "\n7. Dung thuat giai Quick sort sap danh sach giam dan theo diem trung binh. ";
	cout << "\n8. Tim kiem nhi phan: tra ve chi so cuoi cung sinh vien co nam sinh cho truoc.";
	cout << "\n9. Tim kiem nhi phan: tra ve chi so cuoi cung sinh vien co diem trung binh cho truoc.";

}
void XuLyMenu(SinhVien ds[], int& n) {
	int luachon;
	string tencantim;
	int namsinh;

	while (true) {
		system("cls");
		Menu();
		cout << "\n. Nhap lua chon cua ban";
		cin >> luachon;
		if (luachon == 0) {
			break;
		}
		else if (luachon == 1) {
			system("cls");
			cout << "\n1. Tạo danh sách sinh viên từ file.";

			if (TaoThongTin(ds, n)) {
				cout << "\n\n\t\tTHANH CONG\n";
			}
			else {
				cout << "\n\n\t\tTHAT BAI\n";
			}
		}
		else if (luachon == 2) {
			system("cls");
			cout << "\n2.xuat bang diem hoc vien\n";
			XuatDS(ds, n);
			system("pause");
		}
		else if (luachon == 3) {
			system("cls");
			cout << "\n3. Tìm kiếm tuyến tính : xuất tất cả các sinh viên trùng họ, tên cho trước và có năm sinh < x";
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			cout << "\n. Nhap ten sinh vien can tim: ";
			cin >> tencantim;

			int index = timKiemTuyenTinh(ds,n, tencantim);
			if (index != -1) {
				cout << "\n. Co sinh vien trong danh sach va thong tin co lien quan";
				cout << '\n';
				XuatMotSV(ds[index]);
			}
			else {
				cout << "Khong tim thay sinh vien. Vui long thuc hien thao tac khac";
			}
			system("pause");
		}
		else if (luachon == 4) {
			system("cls");
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			cout << "\n4. Tìm kiếm tuyến tính lính canh : trả về chỉ số đầu tiên sinh viên có tên cho trước.";
			break;
		}
		else if (luachon == 5) {
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			cout << "\n5. Dùng thuật giải chọn trực tiếp sắp danh sách tăng dần theo năm sinh. ";
			break;
		}
		else if (luachon == 6) {
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			system("cls");
			cout << "\n6. Dùng thuật giải chèn trực tiếp sắp danh sách tăng dần theo họ, tên sinh viên. ";
			break;
		}
		else if (luachon == 7) {
			system("cls");
			cout << "\n7. Dùng thuật giải Quick sort sắp danh sách giảm dần theo điểm trung bình. ";
			cout << endl;
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			QuickSort(ds, n);
			cout << "\ndanh sach sau khi sap xep la: ";
			XuatBangDiem(ds, n);
			cout << endl;
			system("pause");
		}
		else if (luachon == 8) {
			system("cls");
			cout << "\n8. Tìm kiếm nhị phân: trả về chỉ số cuối cùng sinh viên có năm sinh cho trước.";
			cout << "\ndanh sach ban dau la: ";
			XuatBangDiem(ds, n);
			cout << "Nhap nam sinh can tim ";
			cin >> namsinh;
			int chiso = timKiemNhiPhan_NamSinh(ds,n, namsinh);
		}
		else if (luachon == 9) {
			system("cls");
			cout << "\n9. Tìm kiếm nhị phân: trả về chỉ số cuối cùng sinh viên có điểm trung bình cho trước. ";
		}
	}
}