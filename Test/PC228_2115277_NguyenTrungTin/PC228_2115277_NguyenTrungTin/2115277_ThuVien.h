#pragma once
struct  SinhVien
{
	char maHV[15];
	char Ho[15];
	char tenLot[15];
	char ten[15];
	int namSinh;
	double diem;
};
int TaoThongTin(SinhVien ds[], int& n) {
	ifstream in("Text.txt");
	if (!in)
		return 0;
	n = 0;
	while (!in.eof()) {
		in >> ds[n].maHV;
		in >> ds[n].Ho;
		in >> ds[n].tenLot;
		in >> ds[n].ten;
		in >> ds[n].namSinh;
		in >> ds[n].diem;
		n++;
	}
	in.close();
	return 1;
}
void XuatDongKe(char x) {
	cout << endl;
	cout << ':';
	for (int i = 0; i < 79; i++) {
		cout << x;
	}
	cout << ':';
	cout << endl;
}
void XuatMotSV(SinhVien sv) {
	cout << setiosflags(ios::left) << ':' << setw(10) << sv.maHV << ':' << setw(10) << sv.Ho << setw(10) << sv.tenLot << setw(10) << sv.ten << ':'
		<< setw(10) << sv.namSinh << ':' << setw(10) << sv.diem << ':';
}
void XuatTieuDe() {
	XuatDongKe('=');
	cout << setiosflags(ios::left) << ':' << setw(10) << "Ma Hoc Vien" << ':' << setw(10) << "ho" << setw(10) << "tlot" << setw(10) << "ten" << ':'
		<< setw(10) << "Nam Sinh" << ':' << setw(10) << "diem trung binh" << ':';
	XuatDongKe('=');
}
void XuatBangDiem(SinhVien ds[], int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		XuatMotSV(ds[i]);
		cout << endl;
		if ((i + 1) % 5 == 0) {
			XuatDongKe('-');
		}
	}
	XuatDongKe('=');
}
void XuatDS(SinhVien ds[], int n) {
	XuatTieuDe();
	for (int i = 0; i < n; i++) {
		XuatMotSV(ds[i]);
		cout << endl;
	}
	XuatDongKe('=');
}
int timKiemNhiPhan_NamSinh(SinhVien ds[], int n, int namsinh) {
	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (ds[mid].namSinh == namsinh) {
			return mid; // Tìm thấy năm sinh
		}
		else if (ds[mid].namSinh < namsinh) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}

int timKiemTuyenTinh(SinhVien ds[], int n, const string& tencantim) {
	for (int i = 0; i < n; ++i) {  
		if (ds[i].ten == tencantim) {
			return i;
		}
	}
	return -1;
}
void HoanVi(SinhVien& a, SinhVien& b)
{
	SinhVien tam = a;
	a = b;
	b = tam;
}
void Insertion_L(SinhVien a[], int n) {
	int i, pos;
	SinhVien x;

	for (i = 1; i < n; i++) {
		x = a[i];
		pos = i - 1;
		while (pos >= 0 &&(strcmp(a[pos].Ho, x.Ho) > 0 ||  (strcmp(a[pos].Ho, x.Ho) == 0 && strcmp(a[pos].ten, x.ten) > 0))) {
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;  // Chèn x vào vị trí đúng
	}
}
void Partition(SinhVien a[], int l, int r)
{
	int i, j;
	SinhVien x;
	x = a[(l + r) / 2];
	i = l; j = r;
	do
	{
		while (a[i].diem > x.diem)
			i++;
		while (a[j].diem < x.diem)
			j--;
		if (i <= j)
		{
			HoanVi(a[i], a[j]);
			i++; j--;
		}
	} while (i <= j);

	if (l < j)
		Partition(a, l, j);
	if (i < r)
		Partition(a, i, r);
}

void QuickSort(SinhVien a[], int n)
{
	Partition(a, 0, n - 1);
}
