#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	cout << "Bienvenido a la Ouija, diga las palabras magicas [Solo si eres todopoderoso]"<<endl;
	char pass[1];
	char pass2[1];
	inicio:
	pass[1] = getch();
	char nom[9];
	if(pass[1] == ',')
	{	
	nom[0] = getch();
	cout << "C";
	if(nom[0] != '.')
	nom[1] = getch();
	else
	getch();
	cout << "h";
	if(nom[1] != '.')
	nom[2] = getch();
	else
	getch();
	cout << "a";
	if(nom[2] != '.')
	nom[3]= getch();
	else
	getch();
	cout << "k";
	if(nom[3] != '.')
	nom[4] = getch();
	else
	getch();
	cout << "a";
	if(nom[4] != '.')
	nom[5] = getch();
	else
	getch();
	cout << "l";
	if(nom[5] != '.')
	nom[6] = getch();
	else
	getch();
	cout << "a";
	if(nom[6] != '.')
	nom[7] = getch();
	else
	getch();
	cout << "c";
	if(nom[7] != '.')
	nom[8] = getch();
	else
	getch();
	cout << "k";
	if(nom[8] != '.')
	nom[9] = getch();
	else
	getch();
	cout << "a";
	getchar();
	getchar();
	cout<<endl << nom;
	}
	else
	{
		cout << "Tu eres un simple mortal" << endl ;
		goto inicio;
	}
	getchar();
	
}
