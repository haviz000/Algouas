#include <iostream>
using namespace std;

void garis(){
    int i;
    for (i=0; i<54; i++) {
        cout<<"=";
    }
}


int main(){
    string nama[20],nip[20],alamat[20];
    int gol[20],n,i,kaya = 0,sedang = 0,miskin = 0;
    long gaji[20];
    
    cout<<"Masukan jumlah data yang ingin di input: ";
    cin>>n;
    
    for (i = 1; i<=n; i++) {
        cout<<"Masukan nama: ";
        cin>>nama[i];
        cout<<"Masukan nim:";
        cin>>nip[i];
        cout<<"Masukan alamat: ";
        cin>>alamat[i];
        cout<<"Masukan Golongan: ";
        cin>>gol[i];
        cout<<"Masukan Gaji: ";
        cin>>gaji[i];
        
        if(gaji[i] >8000000){
            kaya = kaya+1;
        }else if(gaji[i]>= 5000000){
            sedang = sedang + 1;
        }else if(gaji[i]<5000000){
            miskin = miskin +1;
        }
    }
    garis();cout<<endl;
    cout<<"Daftar Nama Pegawai IT"<<endl;
    garis();cout<<endl;
    cout<<"\t"<<"Nama"<<"\t"<<"NIP"<<"\t"<<"Alamat"<<"\t"<<"Golongan"<<"\t"<<"Gaji"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<nama[i]<<"\t"<<nip[i]<<"\t"<<alamat[i]<<"\t"<<gol[i]<<"\t"<<gaji[i]<<endl;
    }cout<<endl;
    cout<<"Jumlah data pegawai diatas  8000.000:"<<" "<<kaya<<" "<<"orang"<<endl;
    cout<<"Jumlah data pegawai diatas  5000.000:"<<" "<<sedang<<" "<<"orang"<<endl;
    cout<<"Jumlah data pegawai dibawah  5000.000::"<<" "<<miskin<<" "<<"orang"<<endl;
    
}
