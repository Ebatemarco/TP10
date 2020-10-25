/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HeadersofTP10.h
 * Author: ebatemarco
 *
 * Created on 22 de octubre de 2020, 19:34
 */

#include <stdio.h>
#include <stdlib.h> 

typedef struct 
{
	uint8_t b0	:1;
	uint8_t b1	:1;
	uint8_t b2	:1;
	uint8_t b3	:1;
	uint8_t b4	:1;
	uint8_t b5	:1;
	uint8_t b6	:1;
	uint8_t b7	:1;
		
} bits8_t; //estructura para leer o escribir los bits del registro

typedef union
{
	bits8_t bit_port;
	uint8_t byte_port;
}byte_t;  // estructura de los registros A y B para el ingreso bit a bit o byte.


void bitClr (int* puntero, int bit);
/*Dado un puerto y un número de bit, debe cambiar su estado a 0*/

int bitGet (int* puntero, int bit); 
/*Dado un puerto y un número de bit, debe devolver su valor.*/

void bitSet (int* puntero, int bit);
/*Dado un puerto y un número de bit, debe cambiar su estado a 1.*/

void bitToggle(int* puntero, int bit);
/*Dado  un  puerto  y  un  número  de  bit,  debe  cambiar  al  estado.*/

void getBin (int* arreglo, int mascara);
/* Apartir de un numero crea un arreglo de 8 elementos para llenarlo con
 * la forma binaria del numero. Ej: si le pasamos A y un arreglo llenara
 * el arreglo tal que {0,0,0,0,1,0,1,0}*/

void maskOff (int* puntero, int mascara);
/*Dado un puerto y una máscara, debe apagar todos aquellos bits que estén  prendidos
 * en  la  máscara,  sin  cambiar  el  estado  de  los  restantes.  Por ejemplo, dado el puerto 
 * A, que originalmente se encuentra en el estado 0x0A, al aplicarle la máscara 0x02, el resultado será 0x08.*/

void maskOn (int* puntero, int mascara);
/*Dado un puerto y una máscara, debe prender todos aquellos
 * bits que estén  prendidos  en  la  máscara,
 * sin  cambiar  el  estado  de  los  restantes.  Por ejemplo,
 * dado el puerto A, que originalmente se encuentra en el estado 0x01, al
 * aplicarle la máscara 0x0A, el resultado será 0xB.*/

void maskToggle (int* puntero, int mascara);
/*Dado un puerto y una máscara, debe cambiar el estado
 * de todos aquellos  bits  que  estén  prendidos  en  la  máscara  
 * al  opuesto,  sin  cambiar  el estado de los restantes. Por ejemplo,
 * dado el puerto A, que originalmente se encuentra  en  el  estado  0x02,
 * al  aplicarle  la  máscara  0x03,  el  resultado  será 0x01.*/



