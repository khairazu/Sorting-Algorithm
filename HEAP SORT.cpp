 #include <iostream>      
using namespace std;
 
void MaxHeapify(int a[], int i, int n) //deklarasi data
{
	int j, temp;
	temp = a[i]; //data tertinggi masuk ke temporeri
	j = 2*i;     
 
 	while (j <= n)
	{
		if (j < n && a[j+1] > a[j])
		j = j+1; //jika kiri lebih kecil, bandingkan dengan yang kanan
		
		if (temp > a[j])
			break; //jika parents lebih besar, tidak ditukar
	
		else if (temp <= a[j])
		{
	 		a[j/2] = a[j];
			j = 2*j; //jika parents lebih kecil, maka ditukar
		}
	}
	a[j/2] = temp; //parents disimpan ke temporeri
	return;
}
void HeapSort(int a[], int n)
{
	int i, temp;
	for (i = n; i >= 2; i--)
	{
		temp = a[i];
		a[i] = a[1];
		a[1] = temp; //array indeks paling atas disimpan ke temporeri
		MaxHeapify(a, 1, i - 1);  
	}
}
void Build_MaxHeap(int a[], int n)
{
	int i;
	for(i = n/2; i >= 1; i--) //buat pohon heap 
		MaxHeapify(a, i, n);
}
int main()
{
	int n, i;
	cout<<"Masukkan banyak data yang ingin di urutkan : ";
	cin>>n;
	n++;
	int arr[n];
	for(i = 1; i < n; i++)
	{
		cout<<"Data ke- "<<i<<": ";
		cin>>arr[i];
	}
 
	Build_MaxHeap(arr, n-1);
	HeapSort(arr, n-1);
 
	cout<<"\nHasil pengurutan :";
 
	for (i = 1; i < n; i++)
		cout<< " "<<arr[i];
 
	return 0;
}  
