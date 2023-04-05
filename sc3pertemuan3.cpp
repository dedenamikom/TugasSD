#include <iostream>
using namespace std;

struct mahasiswa
{
	char npm[100];
	char nama[100];
	char alamat[100];
	char ipk;
};
int main (){
	int jumlahMahasiswa;
	cout<<"Jumlah mahasiswa yang ingin di inputkan : ";cin>>jumlahMahasiswa<<endl;
	
	mahasiswa mhs[jumlahMahasiswa];
	
	for(int i=0; i<jumlahMahasiswa; i++)
	{
		cout<<"Data mahasiswa ke "<<(i+1)<<endl;
		cout<<"NPM : "
	}
}
