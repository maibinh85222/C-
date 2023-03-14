#include <iostream>

using namespace std;

int main(){

    cout<<"xin chao moi nguoi\n";
    cout<<"Nhap vao tong so nhan vien va sau đo tien hanh nhap ten tung nhan vien\n";
    int n;
    cout<<"Nhap vao so nhan vien:   "; cin>>n;
    string name[100];
    for(int i = 0; i<n; i++){
        cout<<"Nhap vao ten nhan vien "<<i+1<<" :   ";
        cin>>name[i];
    }
    cout<<"\nDanh sach cac nhan vien đa nhap";
    for(int i= 0; i<n; i++){
        cout<<i+1<<" :"<<name[i];
        cout<<endl;
    }
    return 0;
}
