#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[100];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int median;
    if (N % 2 == 1) {
        median = arr[N / 2];
    } else {
        median = (arr[(N / 2) - 1] + arr[N / 2]) / 2;
    }
    cout << median << endl;
    return 0;
}