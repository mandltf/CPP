#include<iostream>
using namespace std;

#define green "\033[1;32m"
#define reset "\033[0m"

int baris1, baris2, kolom1, kolom2, pilih;
bool ulang=true;
int array1[100][100], array2[100][100];

void penjumlahan();
void pengurangan();
void perkalian();
void input();
void masukdata();

int main(){
do{
    cout<<"\n1. Perkalian \n2. Penjumlahan \n3. Pengurangan \n4. Keluar";
    cout<<green<<"\nPilih (1-4) : ";cin>>pilih;
    cout<<reset<<endl;

switch(pilih){
case 1 :
    masukdata();
    if(baris1==kolom2||kolom1==baris2){
        input();
        perkalian();
        ulang=true;
    }else{
        ulang=true;
    }break;

case 2 :
    masukdata();
    if(baris1==baris2||kolom1==kolom2){
        input();
        penjumlahan();
        ulang=true;
    }else{
        ulang=true;
    }break;
    
case 3 :
    masukdata();
    if(baris1==baris2||kolom1==kolom2){
        input();
        pengurangan();
        ulang=true;
    }else{
        ulang=true;
    }break;

case 4 :
        ulang=false;
    break;

default:
        ulang=true;
    break;
    
}
}while(ulang);
}

void masukdata(){
    //matriks pertama
    cout<<"Input baris matriks pertama: ";cin>>baris1;
    cout<<"Input kolom matriks pertama: ";cin>>kolom1;
    
    //matriks kedua
    cout<<endl;
    cout<<"Input baris matriks kedua: ";cin>>baris2;
    cout<<"Input kolom matriks kedua: ";cin>>kolom2;

}

void input(){
    //matriks pertama
    cout<<"\nIsilah nilai matriks ["<<baris1<<"]["<<kolom1<<"] berikut :";
    for(int i=0;i<baris1; i++){//looping baris
		for(int y=0;y<kolom1;y++){//looping kolom
		cout<<"\nInput data ["<<i<<"]["<<y<<"] :";cin>>array1[i][y];
	}
	}cout<<endl;

    //tampilan matriks pertama
    for(int i=0;i<baris1; i++){//looping baris
    cout<<"[\t";
		for(int y=0;y<kolom2;y++){//looping kolom
        cout<<green<<array1[i][y]<<reset<< "\t";
	}
    cout<<"]"<<endl;
	}cout<<endl;

    //matriks kedua
    cout<<"\nIsilah nilai matriks ["<<baris2<<"]["<<kolom2<<"] berikut :";
    for(int i=0;i<baris2; i++){//looping baris
		for(int y=0;y<kolom2;y++){//looping kolom
		cout<<"\nInput data ["<<i<<"]["<<y<<"] :";cin>>array2[i][y];
	}
	}cout<<endl;
    //tampilan matriks kedua
    for(int i=0;i<baris1; i++){//looping baris
    cout<<"[\t";
		for(int y=0;y<kolom2;y++){//looping kolom
        cout<<green<<array2[i][y]<<reset<< "\t";
	}
    cout<<"]"<<endl;
	}
    cout<<endl;
}

void penjumlahan(){
    cout<<"Hasil : "<<endl;
    for(int i=0;i<baris1; i++){//looping baris
    cout<<"[\t";
		for(int y=0;y<kolom2;y++){//looping kolom
        int u=array1[i][y]+array2[i][y];
        cout<<green<<u<<reset<< "\t";
	}
    cout<<"]"<<endl;
	}
}

void pengurangan(){
    cout<<"Hasil : "<<endl;
    for(int i=0;i<baris1; i++){//looping baris
    cout<<"[\t";
		for(int y=0;y<kolom2;y++){//looping kolom
        int u=array1[i][y]-array2[i][y];
        cout<<green<<u<<reset<< "\t";
	}
    cout<<"]"<<endl;
	}
}

void perkalian(){
    cout << "Hasil : " << endl;
    int hasil[baris1][kolom2]; 
    for (int i = 0; i < baris1; ++i) {
        cout << "[\t";
        for (int j = 0; j < kolom2; ++j) {
            hasil[i][j] = 0; 
            for (int k = 0; k < kolom1; ++k) {
                hasil[i][j] += array1[i][k] * array2[k][j];
            }
        cout << green<<hasil[i][j]<<reset << "\t";
        }
    cout << "]" << endl;
    }
}