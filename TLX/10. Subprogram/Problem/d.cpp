#include <iostream>
using namespace std;

bool check(int x){
	bool cek = true;
	for (int i = 2; i*i <= x; i++){
		if (x%i == 0){
			cek = false;
			return false; 
		}
	}
	
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int temp = n;
    int m = 2;
    bool a = true;

    while (temp > 1) {
    	while(!check(m)) {
    		m++;
    	}

    	int b = 0;
    	while(temp%m == 0){
    		b++;
    		temp /= m;
    	}

    	if (b > 0) {
    		if (a) {
    			a = false;
    			if (b > 1) {
    				cout << m << "^" << b;
    			} else {
    				cout << m;
    			}
    		} else {
    			cout << " x ";
    			if (b > 1) {
    				cout << m << "^" << b;
    			} else {
    				cout << m;
    			}
    		} 
    	} m++;
    }

    cout << "\n";
	cin.get();
	return 0;
}
