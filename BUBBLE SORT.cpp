 #include<iostream>
using namespace std;
 
void tukarData(int *a, int *b){
 
    int temp = *a;
    *a = *b;
    *b = temp; //penukaran data a dan b melalui tenporeri
}
 
void bubbleSort(int data[], int n){
 
    for(int i = 0; i < n; i++){
 
        for(int j = i + 1; j < n; j++){
 
            if(data[i] > data[j]){
 
                tukarData(&data[i], &data[j]);
            }
        }
    }
}
 
int main(){
 
    int data[10], n;
 
    cout << "\t Mengurutkan Data dengan Algoritma Bubble Sort \n\n";
 
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
 
    bubbleSort(data, n);
 
    cout << "\n Data Setelah Diurutkan : ";
    for(int i = 0; i < n; i++){
 
        cout << data[i] << " ";
    }
}
