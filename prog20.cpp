/*Autor Oscar Eduardo FLetes Ixta, realizado: 28/02/2022
	Hacer un programa que perimta calcular el area de un circulo y un rectangulo
	primero presentara las siguientes opciones:
	0.Salir
	1.Circulo
	2.Rectamgulo 
	y despues pedira los datos requieridos e imprimira el resultado.
	Usar funciones para cada figura
	El programa terminara cuando se eleija la opcion 0
	
	Programa en lenguaje c que muestra el uso del scanf, operaciones aritmeticas, uso del ciclo do-while, funciones, prototipos de funciones y uso del switch
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-Operaciones aritmeticas 
		-Uso del ciclo do-while
		-Funciones
		-Prototipos de funciones
		-Uso del switch
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, pedirlas por teclado,
	usar el ciclo do-while, usar funciones y prototipos de finciones, llmar a las funciones, 
	usar switch, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 1 variable de tipo int (menu),
	El programa despues de elegir la opcion en el menu, pedira los datos 
	rerqueridos para calcular el area de un circulo o de un rectangulo. El programa se terminara cuando se elija la opcion 10
*/

#include<stdio.h>//Cuerpo para lenguaje c
#include<math.h>//libreria para las constantes matematicas
//prototipos
void circulo();
void rectangulo();
//programa principal
int main(){
	//Variables
	int opcion;//variable numero entero
	do{//ciclo do-while
		//Entrada
		printf("Calculo de areas\n");//imrpime mensaje
		printf("0. Salir\n");//imrpime mensaje
		printf("1. Circulo\n");//imrpime mensaje
		printf("2. Rectangulo\n");//imrpime mensaje
		printf("Selecciona una figura: ");//imrpime mensaje
		scanf("%d",&opcion);//lee el numero insertado por el teclado
		//proceso
		//uso del switch
		switch(opcion){
			case 0: printf("Bye...\n");//imrpime mensaje
					break;
			case 1: circulo(); //Llama a la funcion
					break;
			case 2: rectangulo();//Llama a la funcion
					break;
			default:printf("Opcion invalida!!!\n");//Valida para que solo se usen los case que estan dentro del switch
		}	
	}while(opcion!=0);//do-while termina cuando opcion sea diferente de 0	
	return 0;
}

//funciones
//Salida
void circulo(){//funcion circulo
	//variables locales (r y a solo sirven para void circulos, puede haber mas fuera de la funcion)
	float r, a;//variable con decimal
	//Entrada
	printf("Introduce el radio: ");//imrpime mensaje
	scanf("%f",&r);//lee el numero insertado por el teclado
	//Proceso
	a=M_PI*pow(r,2); //ecuacion para calcular el area de circulo
	//Salida
	printf("El area del circulo es %.2f\n",a);//imrpime la salida del area 
}
//Salida
void rectangulo(){//funcion rectangulo
	//Variables
	float b,h,a;//variable con decimal
	//Entrada
	printf("Introduce la base: ");//imrpime mensaje
	scanf("%f",&b);//lee el numero insertado por el teclado
	printf("Introduce la altura: ");//imrpime mensaje
	scanf("%f",&h);//lee el numero insertado por el teclado
	//Proceso
	a=b*h;//ecuacion para calcular el area del rectangulo
	//Salida
	printf("El area del rectangulo es %.2f\n",a);//imrpime la salida del area 
}
