#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[101], n;

    while(cin >> arr[n]) {
        n++;
    }
    
    while(n--) {
        cout << arr[n] << endl;
    }

    cin.get();
    return 0;
}
