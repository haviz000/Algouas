#include <iostream>
using namespace std;
void garis();
int main(){
    string nama[10],nim[10],alamat[10],ket[10];
    float ips[10],ipk[10];
    int n,i,up = 0,down = 0;
    
    cout<<"Masukan data yang ingin di input(kurang dari 11): ";
    cin>>n;
    
    for (i = 1; i<=n; i++) {
        cout<<"Masukan nama: ";
        cin>>nama[i];
        cout<<"Masukan nim:";
        cin>>nim[i];
        cout<<"Masukan alamat: ";
        cin>>alamat[i];
        cout<<"Masukan IPK: ";
        cin>>ipk[i];
        cout<<"Masukan IPS: ";
        cin>>ips[i];
        
        if (ipk[i] < 3.0) {
            up = up +1;
        }else if(ipk[i]>=3.0){
            down = down+1;
        }
    }
    garis();cout<<endl;
    cout<<"Daftar Nama Mahasiswa Struktur Data"<<endl;
    garis();cout<<endl;
    cout<<"\t"<<"Nama"<<"\t"<<"NIM"<<"\t"<<"Alamat"<<"\t"<<"IPK"<<"\t"<<"IPS"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<nama[i]<<"\t"<<nim[i]<<"\t"<<alamat[i]<<"\t"<<ipk[i]<<"\t"<<ips[i]<<endl;
    }cout<<endl;
    cout<<"Jumlah data mahasiswa diatas 3.00:"<<" "<<up<<" "<<"jumlah mahasiswa"<<endl;
    cout<<"Jumlah data mahasiswa dibawah 3.00:"<<" "<<down<<" "<<"jumlah mahasiswa"<<endl;
    
    
    
    
}
void garis(){
    int i;
    for (i=0; i<54; i++) {
        cout<<"=";
    }
}
