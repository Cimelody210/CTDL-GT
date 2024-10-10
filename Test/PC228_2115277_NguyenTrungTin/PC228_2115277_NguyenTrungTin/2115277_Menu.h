void Menu() {
	cout << "\n\n\t\t=====================MENU====================\n";
	cout << "\n0.ket thuc chuong trinh";
	cout << "\n1. Tạo danh sách sinh viên từ file.";
	cout << "\n2. Xem danh sách sinh viên.";
	cout << "\n3. Tìm kiếm tuyến tính : xuất tất cả các sinh viên trùng họ, tên cho trước và có năm sinh < x";
	cout << "\n4. Tìm kiếm tuyến tính lính canh : trả về chỉ số đầu tiên sinh viên có tên cho trước.";
	cout << "\n5. Dùng thuật giải chọn trực tiếp sắp danh sách tăng dần theo năm sinh. ";
	cout << "\n6. Dùng thuật giải chèn trực tiếp sắp danh sách tăng dần theo họ, tên sinh viên. ";
	cout << "\n7. Dùng thuật giải Quick sort sắp danh sách giảm dần theo điểm trung bình. ";
	cout << "\n8. Tìm kiếm nhị phân: trả về chỉ số cuối cùng sinh viên có năm sinh cho trước.";
	cout << "\n9. Tìm kiếm nhị phân: trả về chỉ số cuối cùng sinh viên có điểm trung bình cho trước. ";
}
void XuLyMenu(SinhVien ds[], int& n) {
	int luachon;
	string tencantim;
	int namsinh;

	while (true) {
		system("cls");
		Menu();
		cout << "nhap lua chon cua ban";
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
				cout << "Co sinh vien trong danh sach va thong tin co lien quan";
				XuatMotSV(ds[index]);

			}
			else {
				cout << "Khong tim thay sinh vien. Vui long thuc hien thao tac khac";
			}
			system("pause");
		}
		else if (luachon == 4) {
			system("cls");
			cout << "\n4. Tìm kiếm tuyến tính lính canh : trả về chỉ số đầu tiên sinh viên có tên cho trước.";
			break;
		}
		else if (luachon == 5) {
			cout << "\n5. Dùng thuật giải chọn trực tiếp sắp danh sách tăng dần theo năm sinh. ";
			break;
		}
		else if (luachon == 6) {
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