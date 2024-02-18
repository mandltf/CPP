#include<iostream>

#include<ctime>
using namespace std;

int total(int p){ //fungsi niali kembali
    int y;
    y = p * 25000;
    return y;
}

int totalll(int a){
    int b;
    int c = 50000;
    b = a * c;
    return b;
}

void tampil(int x){ //fungsi void
    cout<<"Harga Total : "<<x;
}

int duid(int t, int s){ //prototype fungsi
    int q;
    q = t-s;
    return q;
}

int main(){
    int nomor, jmlh, total1, kembali, kurang, hasil;
    double bayar;
    time_t tt; //deklarasi variabel
    struct tm*ti; //deklarasi variabel utk return ke localtime()
    time(&tt); //mengaplikasikan time()
    ti=localtime(&tt);
   
    cout<<"The Local Time: "<<asctime(ti); //fungsi time
    while(true) {
    cout<<"HARGA PAKET 17 AGUSTUS";
		cout<<"\n1. Paket Ekonomi (3 satwa)\t\t\t Rp25000/org";
		cout<<"\n2. Paket Premium (4 satwa + 1 paket wahana)\t Rp50000/org";
		cout<<"\npilih nomor : ";cin>>nomor;

        system("cls");

    if(nomor==1){
        cout<<"\njumlah tiket : ";cin>>jmlh;
        hasil = total(jmlh); //pass by value
        tampil(hasil);

         cout<<"\nUang yang anda bayarkan : ";cin>>bayar;
         if(bayar==hasil){
            cout<<"Terima kasih sudah melakukan reservasi";
            break;
         }else if(bayar>=hasil){
            kembali=duid(bayar, hasil);
            cout<<"Kembalian : "<<kembali;
            break;
         }else if(bayar<=hasil){
            kurang=duid(hasil, bayar);
            cout<<"Kurang : "<<kurang;
            break;
         }
         
    }else if(nomor==2){
        cout<<"\njumlah tiket : ";cin>>jmlh;
        hasil = totalll(jmlh);
        tampil(hasil);

        cout<<"\nUang yang anda bayarkan : ";cin>>bayar;
         if(bayar==hasil){
            cout<<"Terima kasih sudah melakukan reservasi";
            break;
         }else if(bayar>=hasil){
            kembali=duid(bayar, hasil);
            cout<<"Kembalian : "<<kembali;
            break; 
         }else if(bayar<=hasil){
            kurang=duid(hasil, bayar);
            cout<<"Kurang : "<<kurang;
            break;
         }
    
    }else{
        cout<<"Masukkan nomor yang benar";
        continue;
    }
    }
    return 0;
}