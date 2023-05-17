#include <bits/stdc++.h>
using namespace std;

int main()
{
	int width = 6, height = 3, n = 1;
	int space = width * height;

	for (int x=1; x<=height; x++) {
		for (int i = n; i<=width; i++) {
			for (int j=space; j>=i; j--) {
				cout <<" ";
			}
			for (int k = 1; k<=i; k++) {
				cout <<"* ";
			}
			cout <<"\n";
		}
		n+=2, width+=2;
	}

	for (int i = 1; i <= height - 1; i++) {
		for (int j = space - 3; j >= 0; j--) {
			cout << " ";
		}
		for (int k = 1; k <= height - 1; k++) {
			cout << "* ";
		}
		cout << "\n";
	}
    return 0;
}