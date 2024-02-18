#include <iostream>

using namespace std;

int main() {
	int pass, nomor, satwa, wahana;
	string user;
		cout<<"username: ";cin>>user;
		cout<<"password: ";cin>>pass;
		
	if(user=="manda" && pass==18) {
		while(true) {
		cout<<"RESERVASI";
		cout<<"\n1. Paket Ekonomi (3 satwa)"<<"\n2. Paket Premium (4 satwa + 1 paket wahana)"<<"\npilih nomor : ";cin>>nomor;
		
			if(nomor==1) {
				cout<<"Satwa";
				cout<<"\n1. Amfibi"<<"\n2. Mamalia"<<"\n3. Reptil"<<"\n4. Pisces"<<"\n5. Aves";
			for (int a=2;a>0;a--) {
				cout<<"\nPilih satwa : ";cin>>satwa;}
				if(satwa >= 1 && satwa <= 6){
					continue;}
				else {
                cout << "Pilihan tidak valid";}	
					
					cout<<endl;
					
			}else if(nomor==2){
				cout<<"Satwa"<<"\n1. Amfibi"<<"\n2. Mamalia"<<"\n3. Reptil"<<"\n4. Pisces"<<"\n5. Aves"<<"\n6. Kembali";
				cout<<"\nPilih satwa : ";cin>>satwa;
				
				cout<<endl;
				
				if(satwa >= 1 && satwa <= 5){
					for (int a=3;a>0;a--) {
						cout<<"\nPilih satwa : ";cin>>satwa;}}
				else if (satwa == 6) {
					continue;}
				else {
					cout << "Pilihan tidak valid";}		
						cout<<"Wahana";
						cout<<"\n1. Petting zoo, Onta tunggang, Gajah tunggang, Terapi ikan";
						cout<<"\n2. Zoo express, Ninebot, Kolam tangkap,Perahu kayuh";
						cout<<"\n3. Kembali";
						cout<<"\nPilih wahana : ";cin>>wahana;}
				
                
			
			cout<<"TERIMA KASIH SUDAH MELAKUKAN RESERVASI\n";
			return (0);
		}
	}
	else{
		cout<<"SILAKAN MASUKKAN USERNAME DAN PASSWORD YANG BENAR\n";
	}
	}

	


		
