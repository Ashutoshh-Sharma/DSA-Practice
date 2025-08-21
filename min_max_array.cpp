#include <iostream>

using namespace std;

int min_array(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= min)
            min = arr[i];
    }
    return min;
}

int max_array(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int min = min_array(arr, size);
    int max = max_array(arr, size);

    cout << "Minimum element in the array: " << min << endl;
    cout << "Maximum element in the array: " << max << endl;
    return 0;
}