#include<iostream>
using namespace std;

void selectionSort_menaik(int data[], int n){ //deklarasikan data

    int temp, min;

    for(int i = 0; i < n-1; i++){

        min = i;

        for(int j = i + 1; j < n; j++){

            if(data[j] < data[min]){

                min = j;
            }
        }

        temp = data[i];
        data[i] = data[min];
        data[min] = temp; //data hasil disimpan ke temporeri
    }
}

int main(){

    int data[10], n;

    cout << "\t Mengurutkan Data secara Menaik dengan Algoritma Selection Sort \n\n";

    cout << " Masukkan Banyak Data : ";
    cin >> n;
    
    cout << endl;

    for(int i = 0; i < n; i++){

        cout << " Data ke " << i + 1 << " : ";
        cin >> data[i];
    }

    cout << "\n Data Sebelum Diurutkan : ";
    for(int i = 0; i < n; i++){

        cout << data[i] << " ";
    }

    selectionSort_menaik(data, n);


    cout << "\n Data Setelah Diurutkan : ";
    for(int i = 0; i < n; i++){

        cout << data[i] << " ";
    }
}
