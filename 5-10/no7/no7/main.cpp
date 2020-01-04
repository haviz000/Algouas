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
    int nilai1[15],nilai2[15],n,i,rk1,rk2,rk3,total1=0,total2=0,totrat = 0;
    float rata[15];
    cout<<"Masukan data yang ingin di input: ";
    cin>>n;
    
    for (i = 1; i <=n ; i++) {
        cout<<"masukan nama: ";
        cin>>nama[i];
        cout<<"masukan nim: ";
        cin>>nim[i];
        cout<<"masukan nilai 1: ";
        cin>>nilai1[i];
        cout<<"masukan nilai 2: ";
        cin>>nilai2[i];
        
        rata[i] = (nilai1[i]+nilai2[i])/2;
        total1 = total1 + nilai1[i];
        total2 = total2 + nilai2[i];
        totrat = totrat + rata[i];
        rk1 = total1/n;
        rk2 = total2/n;
        rk3 = totrat/n;
        
    }
    garis();cout<<endl;
    cout<<"Tabel nilai siswa"<<endl;
    garis();cout<<endl;
    cout<<"no"<<"\t"<<"Nama"<<"\t"<<"Nilai 1"<<"\t"<<"Nilai 2"<<"\t"<<"Rata-rata"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<nama[i]<<"\t"<<nilai1[i]<<"\t"<<nilai2[i]<<"\t"<<rata[i]<<endl;
    }cout<<endl;
    cout<<"Total nilai: "<<"\t"<<total1<<"\t"<<total2<<"\t"<<totrat<<endl;
    cout<<"Rata-rata kelas: "<<"\t"<<rk1<<"\t"<<rk2<<"\t"<<rk3<<endl;
    
}
