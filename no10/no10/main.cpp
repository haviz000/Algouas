#include <iostream>
using namespace std;

void garis(){
    int i;
    for (i=0; i<54; i++) {
        cout<<"=";
    }
}

int main(){
    int type[15],lama[15];
    float cash[15],DP[15],cicilan[15];
    int n,i;
    cout<<"Type rumah 21 : 570 JT \n"<<"Type rumah 36 : 599 JT\n"<<"Type rumah 45 : 500 JT\n"<<"Type rumah 70 : 700 JT\n"<<"Type rumah 90 : 988 JT\n"<<endl;
    cout<<"Masukan data yang ingin di input: ";
    cin>>n;
    for (i = 1; i<=n; i++) {
        cout<<"Masukan type rumah: ";
        cin>>type[i];
        cout<<"masukan cicilan per bulan: ";
        cin>>cicilan[i];
        switch (type[i]) {
            case 21:
                cash[i] = 570;
                break;
            case 36:
                cash[i]= 599;
                break;
            case 45:
                cash[i]= 500;
                break;
            case 70:
                cash[i]= 700;
                break;
            case 90:
                cash[i]= 988;
                break;
            
        }
        DP[i] = cash[i] * 0.2;
        lama[i] = (cash[i] - DP[i])/cicilan[i];
        
    }
    garis();cout<<endl;
    cout<<"Data rumah"<<endl;
    garis();cout<<endl;
    cout<<"no"<<"\t"<<"Type rumah"<<"\t"<<"Harga cash"<<"\t"<<"DP"<<"\t"<<"Cicilan/bln"<<"\t"<<"lama cicilan"<<endl;
    for (i = 1; i <=n; i++) {
        cout<<i<<"\t"<<type[i]<<"\t"<<cash[i]<<"JT"<<"\t"<<DP[i]<<"JT"<<"\t"<<cicilan[i]<<"JT /bulan"<<"\t"<<lama[i]<<"tahun"<<endl;
    }
}
