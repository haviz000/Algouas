#include <iostream>
using namespace std;

void garis(){
    int i;
    for (i=0; i<54; i++) {
        cout<<"=";
    }
}

int main(){
    string nama[15],nim[15],ket[15];
    int nilai1[15],nilai2[15],n,i,papor = 0,regu = 0;
    float rata[15];
    cout<<"Masukan jumlah data: ";
    cin>>n;
    for (i=1; i<=n; i++) {
        cout<<"Masukan nama: ";
        cin>>nama[i];
        cout<<"Masukan nim :";
        cin>>nim[i];
        cout<<"Masukan nilai 1 (1-10): ";
        cin>>nilai1[i];
        cout<<"Masukan nilai 2 (1-10): ";
        cin>>nilai2[i];
        
        rata[i] = (nilai1[i]+nilai2[i])/2;
        
        if (rata[i]>=8) {
            ket[i] = " class paporit";
            papor = papor +1;
        }else{
            ket[i] = "class reguler";
            regu = regu +1;
        }
    }
    garis();cout<<endl;
    cout<<"Daftar Nilai  Struktur  Data"<<endl;
    garis();cout<<endl;
    cout<<"no"<<"\t"<<"Nama"<<"\t"<<"NIM"<<"\t"<<"Nilai 1"<<"\t"<<"Nilai 2"<<"\t"<<"Rata-rata"<<"\t"<<"Passing Grade"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<nama[i]<<"\t"<<nim[i]<<"\t"<<nilai1[i]<<"\t"<<nilai2[i]<<"\t"<<rata[i]<<ket[i]<<endl;
    }cout<<endl;
    cout<<"Jumlah Mahasiswa class paporit:"<<" "<<papor<<" "<<"orang"<<endl;
    cout<<"Jumlah Mahasiswa class reguler:"<<" "<<regu<<" "<<"orang"<<endl;
}
