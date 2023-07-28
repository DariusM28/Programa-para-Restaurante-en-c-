//libreria
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;
//----------------Variables-----------------
int intentos=3;
int i,j,k,opcion1,opcion2,opcion3;
string password;
string nit,nombre;
//-----vecotres----
// comida----
string descrip1[100]; //[Descripcion] [cantidad] [precio]
int cantidad1[100];// [ comida ] [ 2 ] [ 50.00 ]
float precios1[100];
// bebidas----
string descrip2[100]; //[Descripcion] [cantidad] [precio]
int cantidad2[100];// [ bebidas ] [ 2 ] [ 50.00 ]
float precios2[100];
// postres----
string descrip3[100]; //[Descripcion] [cantidad] [precio]
int cantidad3[100];// [ comida ] [ 2 ] [ 50.00 ]
float precios3[100];
//----------------funciones---------------------------
void login ();
void menu();
void facturar();
//--------ejecucion principal-----
int main(){
login();
menu();
return 0;
}
// funcion de login
void login(){
do{
cout<<"la contrase a es |Hola1*0| \n BIENVENIDO INGREA LA CONTASENA--------------------INTENTOS "<<intentos<<endl<<endl;cin>>password;
if(password =="Hola1*0" and intentos >=1){
break;
}else if(intentos==1){
exit(1);
}
intentos--;
}while(password != "Hola1*0");
system("cls");
}
//funcion del menu--------
void menu(){
do{
//creamos una variable para guardar los valores en ese espacio
system("cls");
cout << "BINVENDIO RESTAURANTE \n\n";
cout << "\n*** 1) Comida Rapida";
cout << "\n*** 2) Bebidas";
cout << "\n*** 3) Postres ";
cout << "\n*** 4) Generar Factura";
cout << "\n*** 5) Salir";cin>>opcion1;
switch(opcion1){
//comida
case 1:
i=0;
opcion2=0;
do{
system("cls");
cout << "MENU DE PLATILLOS \n\n";
cout << "\n*** 1) pollo frito---Q35.00";
cout << "\n*** 2) Pizza---------Q40.00";
cout << "\n*** 3) Chaomin-------Q31.59";
cout << "\n*** 4) Hamburgesa----Q39.99";
cout << "\n*** 5) Salir\n";cin>>opcion2;
switch(opcion2){
case 1:
system("cls");
cout << "---Pollo frito--\n"; cout << " Cuantos ? "; 
cin >> cantidad1[i]; descrip1[i] = "Pollo-frito"; precios1[i] = cantidad1[i] *
35.00;
break;
case 2:
system("cls");
cout << "---Pizza--\n"; cout << " Cuantos ? "; cin >> cantidad1[i]; descrip1[i] = "Pizza"; precios1[i] = cantidad1[i] * 40.00;
break;
case 3:
system("cls");
cout << "---Chaomin--\n"; cout << " Cuantos ? "; cin>> cantidad1[i]; descrip1[i] = "chaomin"; precios1[i] = cantidad1[i] * 31.59;
break;
case 4:
system("cls");
cout << "---Hamburgesa--\n"; cout << " Cuantos ? "; cin >> cantidad1[i]; descrip1[i] = "hamburgesa"; precios1[i] = cantidad1[i] *39.99;
break;
default:
opcion2=5;
}
i+=1;
}while(opcion2 !=5);
break;
// bebidas
case 2:
j=0;
opcion2=0;
do{
system("cls");
cout << "MENU DE BEBIDAS \n\n";
cout << "\n*** 1) Cafe------------Q07.00";
cout << "\n*** 2) Gaceosa---------Q06.00";
cout << "\n*** 3) Agua------------Q05.75";
cout << "\n*** 4) Fresco natural--Q15.05";
cout << "\n*** 5) Salir\n";cin>>opcion2;
switch(opcion2){
case 1:
system("cls");
cout << "---Cafe--\n"; cout << " Cuantos ? "; cin >> cantidad2[j]; descrip2[j] = "cafe"; precios2[j] = cantidad2[j] * 07.00;
break;
case 2:
system("cls");
cout << "---Gaseosa--\n"; cout << " Cuantos ? "; cin >> cantidad2[j]; descrip2[j] = "Gaseosa"; precios2[j] = cantidad2[j] * 06.00;
break;
case 3:
system("cls");
cout << "---Agua--\n"; cout << " Cuantos ? "; cin >> cantidad2[j]; descrip2[j] = "Agua"; precios2[j] = cantidad2[j] * 05.75;
break;
case 4:
system("cls");
cout << "---Fesco naturla--\n"; cout << " Cuantos ? "; cin >> cantidad2[j]; descrip2[j] = "fresco_n"; precios2[j] = cantidad2[j] *
15.05;
break;
default:
opcion2=5;
}
j+=1;
}while(opcion2 !=5);
break;
// postres
case 3:
k=0;
opcion2=0;
do{
system("cls");
cout << "MENU DE POSTRES \n\n";
cout << "\n*** 1) PASTEL---Q15.00";
cout << "\n*** 2) HELADO---Q18.00";
cout << "\n*** 3) CREPAS---Q20.79";
cout << "\n*** 4) FLAN-----Q10.60";
cout << "\n*** 5) Salir\n";cin>>opcion2;
switch(opcion2){
case 1:
system("cls");
cout << "---Pastel--\n"; cout << " Cuantos ? "; cin >> cantidad3[k]; descrip3[k] = "Pastel"; precios3[k] = cantidad3[k] * 15.00;
break;
case 2:
system("cls");
cout << "---Helados--\n"; cout << " Cuantos ? "; cin >> cantidad3[k]; descrip3[k] = "Helados"; precios3[k] = cantidad3[k] * 18.00;
break;
case 3:
system("cls");
cout << "---Crepas--\n"; cout << " Cuantos ? "; cin >> cantidad3[k]; descrip3[k] = "Crepas"; precios3[k] = cantidad3[k] * 20.79;
break;
case 4:
system("cls");
cout << "---Flan--\n"; cout << " Cuantos ? "; cin >> cantidad3[k]; descrip3[k] = "flan"; precios3[k] = cantidad3[k] * 10.60;
break;
default:
opcion2=5;
}
k+=1;
}while(opcion2 !=5);
break;
case 4:
facturar();
break;
default:
opcion1=5;
break;
}
}while(opcion1 != 5);
}
void facturar(){
system("cls");
cout<<"INGRESE SU NIT :\n";cin>>nit;
cout<<"ESCRIBA UN NOMBRE PARA LA FACTURA :\n";cin>>nombre;
system("cls");
cout << "-----------------Restaurante paca-----------------\n";
cout << "nit 1454487\n";
cout << "1a calle 2-70 zona 1 Boca del Monte\n, Villa Canales, Guatemala\n";
cout << "nit "<<nit<<" a nombre de :"<<nombre;
cout << "\n \t --CONSUMOS-- \n";
cout<<"--DESCRIPICON--CANTIDAD--PRESIO\n";
cout<<"\t -COMIDA-\n";
float subtotal1 = 0;
i=i-2;
for (int a = 0; a<= i; a++)
{
cout << "--"<<descrip1[a]<<"--"<<cantidad1[a]<<"-- Q"<<precios1[a]<<endl;
subtotal1 += precios1[a];
}
cout << "SUBTOTAL COMIDA: Q"<<subtotal1<<endl;
cout<<"--DESCRIPICON--CANTIDAD--PRESIO\n";
cout<<"\t -BEBIDAS-\n";
float subtotal2 = 0;
j=j-2;
for (int a = 0; a<= j; a++)
{
cout << "--"<<descrip2[a]<<"--"<<cantidad2[a]<<"-- Q"<<precios2[a]<<endl;
subtotal2 += precios2[a];
}
cout << "SUBTOTAL BEBIDAS: Q"<<subtotal2<<endl;
//for(int i = 0
cout<<"--DESCRIPICON--CANTIDAD--PRESIO\n";
cout<<"\t -POSTRES-\n";
float subtotal3 = 0;
k=k-2;
for (int a = 0; a<=k; a++)
{
cout << "--"<<descrip3[a]<<"--"<<cantidad3[a]<<"-- Q"<<precios3[a]<<endl;
subtotal3 += precios3[a];
}
cout<< "SUBTOTAL POSTRES: Q"<<subtotal3<<endl;
float tot= subtotal1+subtotal2+subtotal3;
cout << "TOTAL A PAGAR: Q"<<tot;
cout << "\n-- GRACIAS POR SU COMPRA VUELVA PRONTO ---------\n";
system("pause");
}
