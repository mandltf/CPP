#include <iostream>
using namespace std;

// Struktur data untuk menyimpan informasi pengguna
struct User {
    string nama;
    string nim;
    string nilaikuis;
    string alamat;
    string tanggal_lahir;
}data_user[10];
/*
struct Barang {
    string nama;
    int harga;
    int jumlah;
    struct user data_user; //struct dalam struct
} data_barang;
*/
int main(){
    int pilih, brp;
    bool ulang=true;
    int x=0;
    do{
    cout<<"Menu Utama \n1. Tambah Mahasiswa \n2. Tampilkan Mahasiswa \n3. Keluar \nPilih: ";cin>>pilih;
    switch (pilih){
        case 1:
        cout<<"Berapa mahasiswa dek= ";cin>>brp;
    for(int i=0;i<brp;i++){
        x += i;
        cout<<endl;
        cout<<"Mahasiswa ke "<<i+1<<endl;
        cout<<"Nama: ";cin>>data_user[x].nama;
        cout<<"NIM: ";cin>>data_user[x].nim;
        cout<<"Nilai ujian: ";cin>>data_user[x].nilaikuis;
    }
    x=x+1;
    ulang=true;
    system("cls");
    break;

    case 2:
    for(int i=0;i<x;i++){
        cout<<endl;
        cout<<"Mahasiswa ke "<<i+1<<endl;
        cout<<"Nama: "<<data_user[i].nama<<endl;
        cout<<"NIM: "<<data_user[i].nim<<endl;
        cout<<"Nilai ujian: "<<data_user[i].nilaikuis<<endl;
    }
    cout<<endl;
    cout<<"Tekan Enter untuk melanjutkan...";
    cin.ignore();
    cin.get();
    system("cls");
    ulang=true;
    break;
    
    case 3:
    ulang=false;
    break;

    default:
    ulang=true;
    }
    }while(ulang==true);

    return 0;

}