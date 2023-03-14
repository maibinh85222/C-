#include <iostream>

using namespace std;

int main(){

    cout<<"xin chao moi nguoi\n";
    cout<<"Nhập vào tổng số nhân viên và sau đó tiến hành nhập tên từng nhân viên\n";
    int n;
    cout<<"Nhâp vào số nhân viên:   "; cin>>n;
    char name[100];
    for(int i = 0; i<n; i++){
        cout<<"Nhập vào tên nhân viên "<<i+1<<" :   ";
        cin>>name[i];
    }
    cout<<"\nDanh sách các nhân viên đã nhập";
    for(int i= 0; i<n; i++){
        cout<<i+1<<" :"<<name[i];
        cout<<endl;
    }
    return 0;
}
