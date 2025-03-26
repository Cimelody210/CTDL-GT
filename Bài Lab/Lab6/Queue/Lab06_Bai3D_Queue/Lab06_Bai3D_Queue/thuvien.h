typedef int Data;//Kieu thanh phan du lieu cua nut
struct tagNode //Kieu Nut
{
	Data info;
	tagNode* pNext;
};
typedef tagNode NODE;
struct QUEUE
{
	NODE* pHead;
	NODE* pTail;
};
//=======================================================
NODE* GetNode(Data x) {
	NODE* p = new NODE;
	p->info = x;
	p->pNext = NULL;
	return p;
}
void CreatQueue(QUEUE& q) {
	q.pHead = q.pTail = NULL;
}
void EnQueue(QUEUE& q, Data x) {
	NODE* p = GetNode(x);
	if (q.pHead == NULL) {
		q.pHead = p;
		q.pTail = q.pHead;
	}
	else {
		q.pTail->pNext = p;
		q.pTail = p;
	}
}
Data DeQueue(QUEUE& q) {
	Data x;
	NODE* p;
	if (q.pHead == NULL)
		return ' ';
	p = q.pHead;
	x = p->info;
	q.pHead = p->pNext;
	delete p;
	if (q.pHead == NULL) {
		q.pTail = NULL;
	}
	return x;
}
void TapTin_Queue(QUEUE& q) {
	ifstream in("test1.txt");
	if (!in)
		cout << "\nthat bai\n";
	Data x;
	while (!in.eof()) {
		in >> x;
		EnQueue(q, x);
	}
}
void XuatQueue(QUEUE q) {
	for (NODE* k = q.pHead; k != NULL; k = k->pNext) {
		cout << k->info<<'\t';
	}
}
void Radix(QUEUE& q);
//=======================================================
void Radix(QUEUE& q)
{
	int k, j, du, thuong;
	if (q.pHead == NULL)
	{
		cout << "\nDS rong";
		return;
	}
	int max, //Gia tri lon nhat trong q
		m;//so ky so lon nhat trong cac gia tri cua q
	max = q.pHead->info;
	m = 0;
	//Tim max(q)
	NODE* p;
	for (p = q.pHead->pNext; p != NULL; p = p->pNext)
		if (p->info > max)
			max = p->info;
	//Xac dinh so cac chu so cua max(a) : m
		while (max != 0)
		{
			max = max / 10;
			m++;
		}
	//Khai bao 10 lo : queue
	QUEUE q0, q1, q2, q3, q4, q5, q6, q7, q8, q9;
	//Khoi tao cac queue rong
	CreatQueue(q0);
	CreatQueue(q1);
	CreatQueue(q2);
	CreatQueue(q3);
	CreatQueue(q4);
	CreatQueue(q5);
	CreatQueue(q6);
	CreatQueue(q7);
	CreatQueue(q8);
	CreatQueue(q9);
	k = 0; //khoi tao chu so k = 0 : hang don vi
	while (k < m) // dung khi k = m
	{
		while (q.pHead != NULL)
		{
			//xac dinh chu so hang k cua a[i] : du
			thuong = q.pHead->info;
			for (j = 0; j <= k; j++)
			{
				du = thuong % 10;
				thuong = thuong / 10;
			}
			//Phan vao cac lo
			switch (du)
			{
			case 0:
				EnQueue(q0, q.pHead->info);//them vao cuoi q0
				DeQueue(q); //huy nut dau q
				break;
			case 1:
				EnQueue(q1, q.pHead->info);
				DeQueue(q);
				break;
			case 2:
				EnQueue(q2, q.pHead->info);
				DeQueue(q);
				break;
			case 3:
				EnQueue(q3, q.pHead->info);
				DeQueue(q);
				break;
			case 4:
				EnQueue(q4, q.pHead->info);
				DeQueue(q);
				break;
			case 5:
				EnQueue(q5, q.pHead->info);
				DeQueue(q);
				break;
			case 6:
				EnQueue(q6, q.pHead->info);
				DeQueue(q);
				break;
			case 7:
				EnQueue(q7, q.pHead->info);
				DeQueue(q);
				break;
			case 8:
				EnQueue(q8, q.pHead->info);
				DeQueue(q);
				break;
			case 9:
				EnQueue(q9, q.pHead->info);
				DeQueue(q);
				break;
			}
		}//Phan xong vao cac lo; va co q rong
		//Noi cac queue lai theo trinh tu
		while (q0.pHead != NULL)
		{
			EnQueue(q, q0.pHead->info); //them vao cuoi q
			DeQueue(q0); // huy nut dau q0
		}//q0 rong
		while (q1.pHead != NULL)
		{
			EnQueue(q, q1.pHead->info);
			DeQueue(q1);
		}
		while (q2.pHead != NULL)
		{
			EnQueue(q, q2.pHead->info);
			DeQueue(q2);
		}
		while (q3.pHead != NULL)
		{
			EnQueue(q, q3.pHead->info);
			DeQueue(q3);
		}
		while (q4.pHead != NULL)
		{
			EnQueue(q, q4.pHead->info);
			DeQueue(q4);
		}
		while (q5.pHead != NULL)
		{
			EnQueue(q, q5.pHead->info);
			DeQueue(q5);
		}
		while (q6.pHead != NULL)
		{
			EnQueue(q, q6.pHead->info);
			DeQueue(q6);
		}
		while (q7.pHead != NULL)
		{
			EnQueue(q, q7.pHead->info);
			DeQueue(q7);
		}
			while (q8.pHead != NULL)
			{
				EnQueue(q, q8.pHead->info);
				DeQueue(q8);
			}
		while (q9.pHead != NULL)
		{
			EnQueue(q, q9.pHead->info);
			DeQueue(q9);
		}
		//Da cap nhat lai q theo thu tu tang dan hang k
		k++; //xet hang k lon hon ke tiep
	}
}