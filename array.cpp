#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " | ";
    }
    cout << endl;
}

void sorting(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());
}

double median(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    if (n % 2 != 0) {
        return double(arr[n / 2]);
    }
    return double(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
}

int main() {
    vector<int> arr = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
    int n = arr.size();

    cout << "Deret sebelum di sorting : " << endl;
    print_vector(arr);

    sorting(arr);
    cout << "Deret setelah di sorting : " << endl;
    print_vector(arr);

    double result = median(arr);
    cout << "Mediannya adalah : " << result << endl;

    return 0;
}