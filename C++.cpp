#include <stdio.h>
#include <iostream>
#include <conio.h> 
#include <math.h>
using namespace std;

int main () {
	 /*int n1, n2;
    cout << "\nNhap so thu nhat: ";
    cin >> n1;
    cout << "\nNhap so thu hai : ";
    cin >> n2;
    cout << "Tong 2 so = " << (n1 - n2) << '\n';*/
    int a, b, kq;
    cin >> a >> b;
    kq = abs( a - b);
    cout << " a - b = " << kq;
    return 0;
    
}
