#include <iostream>
#include <time.h>
using namespace std;
void bubbleSort(int arr[], int N, bool descending = false) {
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if ((descending && arr[j] < arr[j + 1]) || (!descending && arr[j] > arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    srand(time(0));
    const int N = 10;
    int arr[N];
    int nums = 0;
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % N;
    }
    cout << "UNSORTED: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, N, false);

    cout << "SORTED ASCENDING: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, N, true);
    cout << "SORTED DESCENDING: ";
    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}