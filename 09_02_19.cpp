#include <iostream>
using namespace std;

int main (){
	int nilai[20];
	int i,j,n,temp,x;
	
	//banyak data yang bisa diinput <20
	cout << "Masukkan banyak data yang bisa di input : " << endl;
	cin >> n;
	
	//input nilai array
	for (i=0; i<n; i++) {
		cout << "Masukkan nilai : ";
		cin >> nilai[i];
	}
	
	//proses pengurutan increment
	for (i=0; i<=n; i++) {
		for (j=0; j<n; j++){
			if (nilai[i]>nilai[i+1]) {
				temp = nilai[i+1];
				nilai[i+1] = nilai[i];
				nilai[i] = temp;
			}
		}
		
	}
	
	//menampilkan array nilai[] setelah pengurutan
	for (i=0; i<n; i++){
		cout << nilai[i] << endl;
	}
	
	cout << "Masukkan nilai yang ingin di cari : " << endl;
	cin >> x;
	
	for (i=0; i<n; i++){
		if (x == nilai [i]) {
			cout << "Nilai yang anda cari ada pada indeks ke-" << i << endl;
		}
	}
	
	return 0;
}

