#pragma once


#define MAX 20

int n, k;
int a[MAX], b[MAX]; //danh dau
int dem;

//Xuat day nhi phan, hoan vi, to hop
void Xuat_KQ(int a[MAX], int n)
{
	int i;
	cout << "kq" << dem << " : ";
	for (i = 1; i <= n; i++)
		cout << a[i];
	cout << endl;
}

//Day nhi phan chieu dai n
void LietKe_DayNP(int i)
{
	int j;
	for (j = 0; j <= 1; j++)
	{
		a[i] = j;
		if (i < n)
			LietKe_DayNP(i + 1);
		else
		{
			dem++;
			Xuat_KQ(a, n);
		}
	}
}
void LietKe_HV(int i)
{
	int j;
	for (j = 1; j <= n; j++)
		if (b[j])
		{
			a[i] = j;
			b[j] = 0;
			if (i == n)
			{
				dem++;
				Xuat_KQ(a, n);
			}
			else
				LietKe_HV(i + 1);
			b[j] = 1;
		}
}
void KhoiTao_danhdau()
{
	int i;
	for (i = 1; i <= n; i++)
		b[i] = 1;
}
void LietKe_TH(int i)
{
	int j;
	for (j = a[i - 1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if (i == k)
		{
			dem++;
			Xuat_KQ(a, k);
		}
		else
			LietKe_TH(i + 1);
	}
}