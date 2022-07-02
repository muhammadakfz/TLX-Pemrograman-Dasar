#include <iostream>
using namespace std;

void draw(int n) {
	if (n > 0) {
		draw(n - 1);
		for (int i = 1; i <= n; i++) {
			cout << "*";
		}
		cout << endl;
		draw(n - 1);
	}
}

int main() {
	int n;
	cin >> n;
	draw(n);
	cin.get();
	return 0;
}
