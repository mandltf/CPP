#include<iostream>
using namespace std;

int p1, p2;
void tebak(int x, int y){
    cout<<"Silakan pilih angka (1-10) : ";cin>>p2;
    if(p1==p2){
        cout<<"Benar!\n";
    }else if(p1>p2){
        cout<<"Terlalu kecil\n";
        tebak(x,y);
    }else if(p1<p2){
        cout<<"Terlalu Besar\n";
        tebak(x,y);}
}

int main(){
    cout<<"Pemain 1 silakan masukkan angka :"<<endl;
    cout<<"Silakan pilih angka (1-10) : ";cin>>p1;
    cout<<"Pemain 2 silakan menebak angka!"<<endl;
    
    tebak(p1,p2);
}