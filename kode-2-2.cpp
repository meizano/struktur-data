#include <iostream>
using namespace std;

void tukar(int *a, int *b);

int main() 
{
    int n,i,j;
    int arr[1005];

    cout << "Berapa banyak data? ";
    cin >> n;
    cout << "Masukkan nilai: ";
    for(i=0; i<n;i++)
        cin >> arr[i];
    
    int count = 0;
    for(i=0; i<n-1;i++)
        for(j=i+1; j<n;j++) {
        count++;

            if(arr[i]<arr[j])
                tukar(&arr[i], &arr[j]);
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