#include <iostream>
using namespace std;

void quick (int arr[], int kiri, int kanan){
	
	int a= kiri, b=kanan;
	int tmp;
	int tengah=arr [(kiri+kanan/2)]; //data dibagi 2
	while (a<b){
		while (arr[a] < tengah)
			a++;
		while (arr [b] >tengah)
			b--;
			
		if (a<=b){
			tmp = arr[a];
			arr[a] = arr[b];
			arr[b] = tmp; //tukar data
			a++;
			b--;
		}
	}
	if (kiri < b){
		quick (arr,kiri,b);
	if (a < kanan){
		quick (arr,a,kanan);
	}
	}
}

int main (){
	int n,data [50];
	
	cout<<"Masukkan Banyak Data : ";
	cin>>n;
	
	for (int i=0; i<n; i++){
		cout<<"Masukkan angka : ";
		cin>>data [i];
	}
	cout <<"Data Sebelum Diurutkan : ";
		for (int i=0; i<n; i++){
			cout <<data[i]<<" ";
	}
	
quick (data,0,n-1);
cout<<"\n";
cout <<"Hasil Pengurutan : ";
	for (int i=0; i<n; i++){
		cout<<data[i]<<" ";		
	}
}
