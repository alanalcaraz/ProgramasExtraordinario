#include <iostream>
using namespace std;

void llenar(int vec[], int t, int mat[][2]);
void buscar(int vec[], int t, int mat[][2]);
void imprimir(int vec[], int t, int mat[][2]);

int main ()
{
	int tam;
	int vec[10], mat[10][2];
	cout<<"Ingrese tamano del vector: ";
	cin>>tam;
	llenar(vec, tam, mat);
	buscar(vec, tam, mat);
	imprimir(vec,tam, mat);
	
}

void llenar(int vec[], int t, int mat[][2])
{
	for(int r=0; r<10; r++)
	{
		for (int c=0; c<2; c++)
		{
			mat[r][c]='.';
		}
	}
	for (int i=0; i<t; i++)
	{
		cout<<"Posicion "<<i<<" :";
		cin>>vec[i];
	}
	for (int c=0; c<10; c++)
	{
		cout<<"Numeros a buscar: ";
		cin>>mat[c][0];
	}
}

void buscar(int vec[], int t, int mat[10][2])
{
	for (int i=0; i<t; i++)
	{
		for (int c=0; c<10; c++)
		{
			if (vec[i]==mat[c][0])
			{
				mat[c][1]=i;
			}
			
		}
	}
	for (int c=0; c<10; c++)
	{
		if (mat[c][1]=='.')
		{
			mat[c][1]=-1;
		}
	}
}

void imprimir(int vec[], int t, int mat[][2])
{
	for(int i=0; i<10; i++)
	{
		cout<<"VECTOR: "<<vec[i]<<endl;
	}
	for(int c=0; c<10; c++)
	{
		cout<<"MATRIZ: ";
		for(int r=0; r<2; r++)
		{
		cout<<mat[c][r]<<" ";
		}
	cout<<endl;
	}
}
