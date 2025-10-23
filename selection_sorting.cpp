#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[100];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Mengurutkan array 'arr' dengan selection sort
    for (int i = 0; i < N - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Tukar arr[i] dan arr[min_idx]
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    // Temukan dan simpan nilai tengah (median) dari array yang sudah terurut.
    int median;
    if (N % 2 == 1) {
        median = arr[N / 2];
    } else {
        median = (arr[(N / 2) - 1] + arr[N / 2]) / 2;
    }

    cout << median << endl;
    return 0;
}