#include<iostream>
#include<stdlib.h>
using namespace std;

#define motor 2000
#define mobil 3000

int main(){
	int jenis, total, bayar, kembalian;
	char plat[100], ulang, i;
	float in, out, lama;
	
	do{
		system("CLS");
		cout<<"==============================="<<endl;
		cout<<"===          PARKIR         ==="<<endl;
		cout<<"===            UMJ          ==="<<endl;
		cout<<"==============================="<<endl;
		
		cout<<"Jenis Kendaraan : "<<endl;
		cout<<"1. Motor"<<endl;
		cout<<"2. Mobil"<<endl;
		cout<<"Pilih : ";
		cin>> jenis;
		cout<<endl;
		
		if(jenis==1){
		cout<<"==============================="<<endl;
		cout<<"===         MOTOR           ==="<<endl;
		cout<<"==============================="<<endl;
		cout<<endl;
		
		cout<<endl;
		cout<< "NO. PLAT        : "; cin>>plat;
		cout<< "JAM MASUK       : "; cin>>in;
		cout<< "JAM KELUAR      : "; cin>>out;
		
		if (out>=in)
			lama=out-in;
		else
		lama=(12-in)+out;
		cout<< "Lama parkir :"<< lama << " jam" <<endl;
		
		if(lama>=1){
			total= (lama-1) * motor + 2000;
			cout<< "Total bayar : Rp. "<<total<<endl;
		}else{
			total=2000;
			cout<< "Total bayar : Rp. "<<total<<endl;
		}
	
		cout<<"Uang bayar  :";
		cin>>bayar; 
		kembalian = bayar - total;
		cout<< "Uang kembalian : "<<kembalian<<endl;

		
		cout<<"==============================="<<endl;
		}else if(jenis==2){
		cout<<"===         MOBIL           ==="<<endl;
		cout<<"==============================="<<endl;
		cout<<endl;
		
		
		cout<<endl;
		cout<< "NO. PLAT        : "; cin>>plat;
		cout<< "JAM MASUK       : "; cin>>in;
		cout<< "JAM KELUAR      : "; cin>>out;
		
		if (out>=in)
			lama=out-in;
		else
		lama=(12-in)+out;
		cout<< "Lama parkir :"<< lama << " jam" <<endl;
		
		if(lama>=1){
			total= (lama-1) * mobil + 3000;
			cout<< "Total bayar : Rp. "<<total<<endl;
		}else{
			total=mobil;
			cout<< "Total bayar : Rp. "<<total<<endl;
			
	}
	
		cout<<"Uang bayar  :";
		cin>>bayar; 
		kembalian = bayar - total;
		cout<< "Uang kembalian : "<<kembalian<<endl;

	}
	cout<< "TRANSAKSI LAGI ? (Y/N)"; cin>>ulang;
}while (ulang=='y'||ulang=='Y');
	cout<<endl;
	cout<<"TERIMA KASIH ATAS KUNJUNGAN ANDA"<<endl;
	return 0;
}
