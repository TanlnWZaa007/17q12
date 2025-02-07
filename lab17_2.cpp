#include<iostream>
using namespace std;

void myString(char *&p, int N) {
    p = new char[N + 1]; // จองหน่วยความจำเพิ่ม 1 เพื่อเก็บเครื่องหมาย NULL ('\0') ที่ท้ายสตริง
    for (int i = 0; i < N; i++) {
        p[i] = 'A' + i; // กรอกตัวอักษรจาก A ไปเรื่อยๆ
    }
    p[N] = '\0'; // เพิ่มเครื่องหมาย NULL ที่ท้ายสตริง
}


int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
