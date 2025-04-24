#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal Panjang array adalah 20";
        }
    }
    cout << "\n-------------------------" << endl;
    cout << "\nInputkan Isi element array" << endl;
    cout << "\n-------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

void mergerSort(int low, int high)
{
    if (low >= high)
    {
        return;
    }
    
    int mid = (low + high) / 2;
    
    mergerSort(low, mid);
    mergerSort(mid + 1, high);
}