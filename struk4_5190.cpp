#include <iostream>
#include <cstring>
using namespace std;

const int MAX_STACK = 5;

struct stack
{
	int top;
	char data[MAX_STACK][50];
};

void inisialisasi();
void push(char data[]);
void pop();
void clear();
bool isEmpty();
bool isFull();
void print();

stack stack;

int main (){
	inisialisasi();
	
	int pilihanMenu;
	char name[50];
	
	do
	{
		cout<<">>> PILIHAN MENU <<<"<<endl;
		cout<<"1. Menambah item stack"<<endl;
		cout<<"2. Menghapus item stack"<<endl;
		cout<<"3. Menampilkan item stack"<<endl;
		cout<<"4. Mengosongkan stack"<<endl;
		cout<<"5. Selesai"<<endl<<endl;
		
		cout<<"Masukan Pilihan anda : ";cin>>pilihanMenu;
		cout<<endl;
		
		switch (pilihanMenu)
		{
			case 1:
				cout<<"Masukan Nama : ";cin.ignore(); cin.getline(name, 50);
				push(name);
				break;
				
			case 2:
				pop();
				break;
				
			case 3:
				print();
				break;
			
			case 4:
				clear();
				break;
		}
	} while (pilihanMenu !=5);
	cout<<endl;
	
	system("pause");
	return 0;
	
}

void inisialisasi()
{
	stack.top = -1;
}

void push (char data[])
{
	if (isFull()) {
        cout << "Stack sudah penuh !!!" << endl << endl;
        return;
    }
	stack.top++;
	strcpy(stack.data[stack.top], data);
	cout<<"Data berhasil ditambahkan"<<endl<<endl;
}

void pop()
{
	cout<<"Data "<<stack.data[stack.top]<<" sudah dihapus"<<endl<<endl;
	stack.top--;
}

void clear()
{
	stack.top = -1;
	cout<<"Stack sudah dikosongkan"<<endl<<endl;
}

bool isEmpty()
{
	return (stack.top == -1);
}

bool isFull()
{
	return (stack.top >= (MAX_STACK -1));
}

void print()
{
	cout<<"Isi stack : "<<endl<<endl;
	for(int i=stack.top; i>= 0; i--)
	{
		cout<<stack.data[i]<<endl;
	}
	cout<<endl<<endl;
}

