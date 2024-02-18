#include <iostream>
using namespace std;

int main () {
	cout<<"Input Data Petugas Kebun Binatang"<<"\n";
	
	int ID;
	cout<<"ID_Petugas= ";
	cin >> ID;
	
	string Nama;
	cout<<"Nama = ";
	cin>>Nama;
	
	//kak sebelumnya saya sudah pakai misal getline(cin,nama) buat nama sama alamat biar bisa spasi pas ngisi datanya tapi gatau kenapa pas di run jadi nempel sebaris sama bawahnya//
	
	int Umur;
	cout<<"Umur = ";
	cin >> Umur;
	
	string Alamat;
	cout<<"Alamat = ";
	cin >> Alamat;
	
	string Agama;
	cout<<"Agama = ";
	cin >> Agama;
	
	string Keahlian;
	cout<<"Keahlian = ";
	cin >> Keahlian;
	

	
	cout<<"Output Data Petugas Kebun Binatang"<<"\n"; 
	
	cout<<"ID Petugas = "<<ID<<"\n";
	cout<<"Nama = "<<Nama<<"\n";
	cout<<"Umur = "<<Umur<<"\n";
	cout<<"Alamat = "<<Alamat<<"\n";
	cout<<"Agama = "<<Agama<<"\n";
	cout<<"Keahlian = "<<Keahlian<<"\n";
	return 0;
}
