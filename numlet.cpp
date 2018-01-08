#include <iostream>
#include <string.h>
using namespace std;

int numaletra(int num);

int main()
{		
		int res;
		char numero[5];
		cout<<"introduce un numero de 5 digitos: "<<endl;
		cin.getline(numero,6);
		cout<<numero;
		for (int i=0; i<5; i++)
		{
			res=numaletra(numero[i]);
			if (res==0)
			{
				cout<<"cero";
			}
			if (res==1)
			{
				cout<<"uno";
			}
			if (res==2)
			{
				cout<<"dos";
			}
			if (res==3)
			{
				cout<<"tres";
			}
			if (res==4)
			{
				cout<<"cuatro";
			}
			if (res==5)
			{
				cout<<"cinco";
			}
			if (res==6)
			{
				cout<<"seis";
			}
			if (res==7)
			{
				cout<<"siete";
			}
			if (res==8)
			{
				cout<<"ocho";
			}
			if (res==9)
			{
				cout<<"nueve";
			}			
		}
}

int numaletra(int num)
{
	if (num==0)
	{
		return 0;
	}
	if (num==1)
	{
		return 1;
	}
	if (num==2)
	{
		return 2;
	}
	if (num==3)
	{
		return 3;
	}
	if (num==4)
	{
		return 4;
	}
	if (num==5)
	{
		return 5;
	}
	if (num==6)
	{
		return 6;
	}
	if (num==7)
	{
		return 7;
	}
	if (num==8)
	{
		return 8;
	}
	if (num==9)
	{
		return 9;
	}
	
	
}

