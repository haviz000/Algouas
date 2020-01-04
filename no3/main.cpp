#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
string nama[15];
string nim[15];
string alamat[15];
float ips[15];
float ipk[15];
string ket[15];
int i,n,atas = 0,bawah = 0;
void garis(){
    for (i = 0 ; i<=54; i++) {
        cout<<"=";
    }
}

int main(){
    garis();cout<<endl;
    cout<<"Selamat datang di sistem struktur data mahasiswa";cout<<endl;
    garis();cout<<endl;
    cout<<"masukan jumlah data yang ingin dimasukan (max.15):  ";
    cin>>n;cout<<endl;
    for (i = 0; i < n; i++) {
        cout<<"masukan nama: ";
        cin>>nama[i];
        cout<<"masukan NIM: ";
        cin>>nim[i];
        cout<<"masukan alamat: ";
        cin>>alamat[i];
        cout<<"masukan IPK: ";
        cin>>ipk[i];
        cout<<"masukan IPS: ";
        cin>>ips[i];cout<<endl;
        }
    if (ipk[i] > 3.0) {
         atas++;
    }else if (ipk[i]<=3.0){
        bawah++;
    }
    garis();cout<<endl;
    cout<<"DAFTAR NAMA MAHASISWA STRUKTUR DATA";cout<<endl;
    garis();cout<<endl;
    cout<<"|   NO  |       NAMA       |       NIM       |       ALAMAT       |   IPK   |   IPS   |\n";
    garis();cout<<endl;
    
    for (i = 0; i<n; i++) {
        cout<<"|"<<setiosflags(ios::left)<<setw(7)<<i+1<<"|";
        cout<<setiosflags(ios::left)<<setw(17)<<nama[i]<<"|";
        cout<<setiosflags(ios::left)<<setw(19)<<nim[i]<<"|";
        cout<<setiosflags(ios::left)<<setw(17)<<alamat[i]<<"|";
        cout<<setiosflags(ios::left)<<setw(19)<<ipk[i]<<"|";
        cout<<setiosflags(ios::left)<<setw(11)<<ips[i]<<"|"<<endl;
    }
    garis();cout<<endl;
    
        cout<<"mahasiswa dengan ipk diatas 3.0 ada";cout<<" "<<atas<<" ";cout<<"orang";cout<<endl;
        cout<<"mahasiswa dengan ipk dibawah 3.0 ada";cout<<" "<<bawah<<" ";cout<<"orang";cout<<endl;
    
    
    
}


