#include <iostream>
using namespace std;

void tukar(int *a, int *b);

int main() 
{
    int n,i,j, temp;
    int arr[1005];

    cout << "Berapa banyak data? ";
    cin >> n;
    cout << "Masukkan nilai: ";
    for(i=0; i<n;i++)
        cin >> arr[i];
    
    int count = 0;
    for(i=1; i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while(arr[j]>temp && j>=0)
        {
            count++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for(i=0; i<n;i++)
        cout << arr[i] << " ";
        cout << endl << count;
    return 0;
}

void tukar(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}