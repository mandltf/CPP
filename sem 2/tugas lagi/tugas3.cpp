#include<iostream>
using namespace std;

int faktorial(int a){
    if(a==0 || a==1){
        return 1;}
    else{
        return a*faktorial(a-1);}   
}

int fibonacci(int a){
    if(a==0){
        return 0;
    }else if(a==1){
        return 1;
    }else{
        return fibonacci(a-1)+fibonacci(a-2);
    }
}

int FPB(int x, int y){
    float hasil;
    if(y==0){
        hasil=x;
    }else{
        hasil=FPB(y, (x%y));
    }
    return hasil;
}

int main(){
    int n, bil1, bil2;
    cout<<"masukkan bil\t= ";cin>>n;
    cout<<"faktorial "<<n<<" = "<<faktorial(n)<<endl;
    cout<<"fibonacci "<<n<<" = ";
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    cout<<"bil 1 = ";cin>>bil1;
    cout<<"bil 2 = ";cin>>bil2;
    cout<<"FPB = "<<FPB(bil1,bil2)<<endl;

}