#include <iostream>
using namespace std;

void garis(){
    int i;
    for (i=0; i<54; i++) {
        cout<<"=";
    }
}

int main(){
    string nama[15],ket[15];
    int hasil[15],n,i,lulus = 0,gagal=0;
    
    cout<<"Masukan jumlah data: ";
    cin>>n;
    for (i = 1; i<=n; i++) {
        cout<<"Masukan nama: ";
        cin>>nama[i];
        cout<<"Masukan hasil test: ";
        cin>>hasil[i];
        
        if (hasil[i] >= 78) {
            ket[i] = "diterima";
            lulus = lulus +1;
        }else{
            ket[i] = "ditolak";
            gagal = gagal+1;
        }
    }
    garis();cout<<endl;
    cout<<"DAFTAR SELEKSI ANGGOTA PMR SMA TARUNA"<<endl;
    garis();cout<<endl;
    cout<<"no"<<"\t"<<"Nama"<<"\t"<<"Hasil-test"<<"\t"<<"Keterangan"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<nama[i]<<"\t"<<hasil[i]<<"\t"<<ket[i]<<endl;
    }cout<<endl;
    cout<<"Jumlah anggota PMR SMA TARUNA diterima:"<<" "<<lulus<<" "<<"orang"<<endl;
    cout<<"Jumlah anggota PMR SMA TARUNA ditolak:"<<" "<<gagal<<" "<<"orang"<<endl;
}
