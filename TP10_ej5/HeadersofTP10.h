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

#include <stdint.h>

#define NULL 00

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

typedef union
{
    uint16_t portD;
    
    struct
    {
        byte_t portB;
        byte_t portA;
    }registries;
}port16b_t;// estructura del puerto de 16bits


void bitClr (uint8_t* puntero, int bit);
/*Dado un puerto y un número de bit, debe cambiar su estado a 0*/

int bitGet (uint8_t* puntero, int bit); 
/*Dado un puerto y un número de bit, debe devolver su valor.*/

void bitSet (uint8_t* puntero, int bit);
/*Dado un puerto y un número de bit, debe cambiar su estado a 1.*/

void bitToggle(uint8_t* puntero, int bit);
/*Dado  un  puerto  y  un  número  de  bit,  debe  cambiar  al  estado.*/

void maskOff (bits8_t* puntero, int mascara);
/*Dado un puerto y una máscara, debe apagar todos aquellos bits que estén  prendidos
 * en  la  máscara,  sin  cambiar  el  estado  de  los  restantes.  Por ejemplo, dado el puerto 
 * A, que originalmente se encuentra en el estado 0x0A, al aplicarle la máscara 0x02, el resultado será 0x08.*/

void maskOn (bits8_t* puntero, int mascara);
/*Dado un puerto y una máscara, debe prender todos aquellos
 * bits que estén  prendidos  en  la  máscara,
 * sin  cambiar  el  estado  de  los  restantes.  Por ejemplo,
 * dado el puerto A, que originalmente se encuentra en el estado 0x01, al
 * aplicarle la máscara 0x0A, el resultado será 0xB.*/

void maskToggle (bits8_t* puntero, int mascara);
/*Dado un puerto y una máscara, debe cambiar el estado
 * de todos aquellos  bits  que  estén  prendidos  en  la  máscara  
 * al  opuesto,  sin  cambiar  el estado de los restantes. Por ejemplo,
 * dado el puerto A, que originalmente se encuentra  en  el  estado  0x02,
 * al  aplicarle  la  máscara  0x03,  el  resultado  será 0x01.*/

//int validar (uint8_t* puntero, int bit);



