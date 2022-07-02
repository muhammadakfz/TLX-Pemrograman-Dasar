#include <iostream>
#include <vector>
using namespace std;

int n, k;

void method(int index, vector <int> arr) {
    if (index == k) {
        bool check = true;
        if (check) {
            for (int i : arr) {
                cout << i << " ";
            }
            cout << "\n";
        }
        else return;
    }
    else {
        for (int j = 1; j <= n; j++) {
            if (index > 0 && arr[index - 1] >= j) {
                continue;
            }
            arr.push_back(j);
            method(index + 1, arr);
            arr.pop_back();
        }
    }
}

int main(int argc, char const* argv[]) {
    cin >> n >> k;
    vector <int> arr;
    method(0, arr);

    return 0;
}
