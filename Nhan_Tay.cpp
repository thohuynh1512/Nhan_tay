/*
Lập trình in ra màn hình mô phỏng phép nhân tay 2 số nguyên dương có
3 chữ số nhập từ bàn phím bang tay*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap 2 so ";
	unsigned int a, b, hangTram, hangChuc, hangDV, kqDV, kqChuc, kqTram, kq;
	cin >> a; //nhap vao so nguyen thu nhat
	cin >> b; //nhap vao so nguyen thu 2
	hangTram = b / 100;
	hangChuc = (b - hangTram * 100) / 10;
	hangDV = b - hangTram * 100 - hangChuc * 10;
	kqDV = a * hangDV;
	kqChuc = a * hangChuc;
	kqTram = a * hangTram;
	kq = kqTram * 100 + kqChuc * 10 + kqDV;
	cout << kq;
	return 0;
}

