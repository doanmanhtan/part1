#include<iostream>
#include <string>
#include <fstream>
using namespace std;
void nhap(int a[100][100]){
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			cin>>a[i][j];
		}
	}
}
void docFile(int a[100][100]){
	ifstream filein;
	filein.open("input1.txt", ios::in);
	if (filein.is_open() == false)
	{
		cout << " khong doc duoc file";
		return ;
	}
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			filein>>a[i][j];
		}
	}
}
void ghifile1(int a[100][100]){
	fstream f;
	f.open("input1_1.txt", ios::out);
	for(int i=1;i<=6;i++){
		f<<i<<":";
		for(int j=1;j<=6;j++){
			if(a[i][j]==1){
			f<<j<<"\t";
			}
		}
		f<<endl;
	}
}
void ghifileBai3(int a[100][100]){
	fstream f;
	f.open("input1_1.txt", ios::out);
	for(int i=1;i<=6;i++){
		f<<i<<":";
		for(int j=1;j<=6;j++){
			f<<a[i][j]<<"\t";
		}
		f<<endl;
	}
	f<<endl;
	for(int i=1;i<=6;i++){
		f<<i<<":";
		for(int j=i+1;j<=6;j++){
			if(a[i][j]==1){
			f<<j<<"\t";
			}
		}
		f<<endl;
	}
	f<<"BAC CUA TUNG DINH"<<endl;
	for(int i=1;i<=6;i++){
		int k=0;
		f<<i<<":";
		for(int j=1;j<=6;j++){
			if(a[i][j]==1){
				k++;
			}
		}
		f<<k;
		f<<endl;
	}
}
void ghifile2(int a[100][100]){
	fstream f;
	f.open("input1_2.txt", ios::out);
	for(int i=1;i<=6;i++){
		f<<i<<":";
		for(int j=i+1;j<=6;j++){
			if(a[i][j]==1){
			f<<j<<"\t";
			}
		}
		f<<endl;
	}
}
void doidanhke(int a[100][100]){
	for(int i=1;i<=6;i++){
		cout<<i<<":";
		for(int j=1;j<=6;j++){
			if(a[i][j]==1){
			cout<<j<<"\t";
			}
		}
		cout<<endl;
	}
	cout<<"BAC CUA TUNG DINH"<<endl;
	for(int i=1;i<=6;i++){
		int k=0;
		cout<<i<<":";
		for(int j=1;j<=6;j++){
			if(a[i][j]==1){
				k++;
			}
		}
			cout<<k;
		cout<<endl;
	}
}
int main(){
	int a[100][100];
	docFile(a);
	ghifile1(a);
	ghifileBai3(a);
//	doidanhke(a);
//	ghifile2(a);
	return 0;
}
