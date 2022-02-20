// Swapping pair of two elements alternativily
// Example- [1, 2, 3, 4, 5, 6]
//  after swapping  [2, 1, 4, 3, 6, 5]

#include <iostream>
using namespace std;

void alt_swap(int arr[], int n)
{
    for (int i = 0, j = 1; i < n - 1 && j < n; i += 2, j += 2)
        swap(arr[i], arr[j]);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    alt_swap(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
