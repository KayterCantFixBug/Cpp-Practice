#include<iostream>
void nhap(int &n, int A[]);
int nguyenDuongCuoi(int n, int A[]);
void xuat(int kq);
using namespace std;

int main()
{
	int n, A[1000];
	nhap (n,A);
	int kq=nguyenDuongCuoi(n,A);
	xuat (kq);
	return 0;
}

void nhap(int &n, int A[])
{
	cin>>n;
	for(int i=0; i<n;i++)
		cin>>A[i];
}

int nguyenDuongCuoi(int n, int A[])
{
	int t=-1;
	for(int i=0; i<n; i++)
		if(A[i]>0)
			t=A[i];
	return t;
}

void xuat(int kq)
{
	cout<<kq;
}
