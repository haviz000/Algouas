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
    int gol[15],i,n;
    long gaji[15],total[15];
    float tunjangan[15],bonus[15];
    
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
            bonus[i] = gaji[i] * 0.2;
            tunjangan[i] = gaji[i] * 0.1;
            total[i] = gaji[i] + bonus[i] + tunjangan[i];
        }else{
            bonus[i] = gaji[i] * 0;
            tunjangan[i] = gaji[i] * 0;
            total[i] = gaji[i];
        }
    }
    garis();cout<<endl;
    cout<<"DAFTAR GAJI KARYAWAN PT. KOLANGKALING"<<endl;
    garis();cout<<endl;
    cout<<"no"<<"\t"<<"NIP"<<"\t"<<"Nama"<<"\t"<<"Golongan"<<"\t"<<"Gaji"<<"\t"<<"Bonus"<<"\t"<<"Tunjangan"<<"\t"<<"Total Gaji"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<nip[i]<<"\t"<<nama[i]<<"\t"<<gol[i]<<"\t"<<gaji[i]<<"\t"<<bonus[i]<<"\t"<<tunjangan[i]<<"\t"<<total[i]<<endl;
    }
}
