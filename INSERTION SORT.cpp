 #include <iostream>
using namespace std;

int main(){
	int y;
	cout<<"Masukkan Banyak Data :";
	cin>>y;
	cout<<endl;
	int x[y];
	for(int i=0; i<y; i++){
		cout<<"masukan angka ke "<<i+1<<" :";
		cin>>x[i];
		cout<<endl;
	}
	cout<<endl;
			cout << "Proses Sorting : "<< endl;
	for(int i=1; i<y; i++){
		int key = x[i];
		int j = i-1;
		while(j>=0 && x[j] > key){
			x[j+1] = x[j];
			j--;
		}

	
			x[j+1] = key;
		for(int m=0;m<y;m++){
		cout<<x[m]<<" ";
	    }
	    cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<"hasil akhir"<<endl;
	for(int m=0;m<y;m++){
		cout<<x[m]<<" ";
	}
}
