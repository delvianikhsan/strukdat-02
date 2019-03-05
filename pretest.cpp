/*
nama program  : acikiwir
nama : delvian ikhsan maulana
npm : 140810180065
tanggal buat : 05 MARET 2019
deskripsi : pretest
*/

#include <iostream>

using namespace std;

void input(int arr[],int& n){
    cout << "Masukkan Panjang Data : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
void moveZerosToEnd(int arr[], int n)
{
    int count=0;
    for (int i=0; i<n;i++)
        if (arr[i] != 0)
            swap(arr[count++], arr[i]);
}
void output(int arr[],int n){
    cout << "Hasil  : ";
    for (int i = 0;i<n;i++)
    cout << arr[i] << " ";
}


int main()
{
    int arr[100];
    int n;
    input(arr,n);
    moveZerosToEnd(arr,n);
    output(arr,n);

    return 0;
}
