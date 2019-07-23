#include <iostream>
using namespace std;

void tukar(int *a, int *b);

int main() 
{
    int n,i,j, pos;
    int arr[1005];

    cout << "Berapa banyak data? ";
    cin >> n;
    cout << "Masukkan nilai: ";
    for(i=0; i<n;i++)
        cin >> arr[i];
    
    int count = 0;
    for(i=0; i<n-1;i++)
    {
        pos = i;
        for(j=i+1; j<n;j++)
        count++;
            if(arr[j] > arr[pos])
                pos = j;
        if(pos != i)
            tukar(&arr[pos], &arr[i]);
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