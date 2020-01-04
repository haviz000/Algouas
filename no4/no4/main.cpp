#include <iostream>
using namespace std;

void garis(){
    int i;
    for (i=0; i<54; i++) {
        cout<<"=";
    }
}

int main(){
    string nama[15],nip[15],alamat[15];
    int gol[15],i,n,satu = 0,dua = 0,tiga = 0;
    long gaji[15];
    cout<<"Masukan jumlah data yang ingin di input: ";
    cin>>n;
    for (i = 1; i <=n; i++) {
        cout<<"Masukan nama: ";
        cin>>nama[i];
        cout<<"Masukan nip:";
        cin>>nip[i];
        cout<<"Masukan alamat: ";
        cin>>alamat[i];
        cout<<"Masukan Golongan: ";
        cin>>gol[i];
        cout<<"Masukan Gaji: ";
        cin>>gaji[i];
        
        if (gol[i] == 1) {
            satu = satu + 1;
        }else if(gol[i] == 2){
            dua = dua + 1;
        }else if(gol[i] == 3){
            tiga = tiga + 1;
        }
    }
    garis();cout<<endl;
    cout<<"Daftar Nama Pegawai IT"<<endl;
    garis();cout<<endl;
    cout<<"\t"<<"Nama"<<"\t"<<"NIP"<<"\t"<<"Alamat"<<"\t"<<"Golongan"<<"\t"<<"Gaji"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<nama[i]<<"\t"<<nip[i]<<"\t"<<alamat[i]<<"\t"<<gol[i]<<"\t"<<gaji[i]<<endl;
    }cout<<endl;
    cout<<"Jumlah pegawai golongan 1:"<<" "<<satu<<" "<<"orang"<<endl;
    cout<<"Jumlah pegawai golongan 2:"<<" "<<dua<<" "<<"orang"<<endl;
    cout<<"Jumlah pegawai golongan 3:"<<" "<<tiga<<" "<<"orang"<<endl;
    
}
