#include <iostream>
using namespace std;

void garis(){
    int i;
    for (i=0; i<54; i++) {
        cout<<"=";
    }
}

int main(){
    string nama[15],nim[15];
    int nilai1[15],nilai2[15],n,i,atas = 0,bawah = 0;
    float rata[15];
    
    cout<<"Masukan jumlah data: ";
    cin>>n;
    
    for (i = 1; i<=n; i++) {
        cout<<"Masukan nama: ";
        cin>>nama[i];
        cout<<"Masukan nim: ";
        cin>>nim[i];
        cout<<"Masukan nilai pertama: ";
        cin>>nilai1[i];
        cout<<"Masukan nilai kedua: ";
        cin>>nilai2[i];
        rata[i] = (nilai1[i]+nilai2[i])/2;
        if (rata[i] > 80) {
            atas = atas +1;
        }else if (rata[i]<80){
            bawah = bawah+1;
        }
    }
    garis();cout<<endl;
    cout<<"Daftar Nilai  Struktur  Data"<<endl;
    garis();cout<<endl;
    cout<<"\t"<<"Nama"<<"\t"<<"NIM"<<"\t"<<"Nilai 1"<<"\t"<<"Nilai 2"<<"\t"<<"Rata-rata"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<nama[i]<<"\t"<<nim[i]<<"\t"<<nilai1[i]<<"\t"<<nilai2[i]<<"\t"<<rata[i]<<endl;
    }cout<<endl;
    cout<<"Jumlah Mahasiswa rata-rata diatas  80:"<<" "<<atas<<" "<<"orang"<<endl;
    cout<<"Jumlah Mahasiswa rata-rata dibawah  80:"<<" "<<bawah<<" "<<"orang"<<endl;
    
}
