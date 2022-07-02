#include <iostream>
#include <cmath>
using namespace std;

int a, b, c, maksimum, minimum;
int arr1[1001], arr2[1001];
void insert() {
	for (int i = 1; i <= a; ++i) {
		cin >> arr1[i] >> arr2[i];
	}
}

void count() {
	for (int i = 1; i < a; ++i) {
		for (int j = i + 1; j <= a; ++j) {
			c = pow(abs(arr1[j] - arr1[i]), b) + pow(abs(arr2[j] - arr2[i]), b);

			if (c > maksimum) {
				maksimum = c;
			}

			if (c < minimum) {
				minimum = c;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    maksimum = 0;
    minimum = 10000000;
    cin >> a >> b;
    insert();
    count();
    cout << minimum << " " << maksimum;
	cin.get();
	return 0;
}
