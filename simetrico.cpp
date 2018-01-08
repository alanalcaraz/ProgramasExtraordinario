#include <iostream>
using namespace std;

void llenarVec (int vec[], int tam);
int esSimetrico (int vec[], int tam);

int main ()
{
	int vec[10];
	int tam,resp;
	cout<<"Ingrese el tamano del vector: ";
	cin>>tam;
	llenarVec(vec,tam);
	resp=esSimetrico(vec,tam);
	for(int i=0; i<tam; i++)
	{
	cout<<"Contenido del vector: "<<vec[i]<<endl;
	}
	if(resp==1)
	{
		cout<<"Es simetrico";
	}
	else
	{
		cout<<"No es simetrico";
	}
}

void llenarVec (int vec[], int tam)
{
	for (int i=0; i<tam; i++)
	{
		cout<<"introduce tamano en posicion "<<i<<" :";
		cin>>vec[i];
	}
}
int esSimetrico (int vec[], int tam)
{
	int a=0;
	for (int i=0, j=tam-1; i<=(tam/2)+1, j>=(tam/2)+1; i++, j--)
	{
		if (vec[i]==vec[j])
		{
			a++;
		}

	}
		if (a==(tam/2))
		{
			return 1;
		}
		else if (a==(tam/2)-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
}
