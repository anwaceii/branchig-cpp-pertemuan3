#include<iostream>
using namespace std;

int main(){

    int angka1;
    int angka2;
    int angka3;

    cout<<"Angka Pertama:";
    cin>>angka1;

    cout<<"Angka Kedua:";
    cin>>angka2;

    cout<<"Angka Ketiga:";
    cin>>angka3;

    if(angka1 > angka2 && angka3){
        cout<< angka1<<endl;

    }else if(angka2 > angka3 && angka1){
        cout<< angka2<<endl;

    }else if(angka3 > angka2 && angka1){
        cout<< angka3<<endl;
    }

return 0;
}
