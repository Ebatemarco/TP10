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

void bitClr (int* puntero, int bit);

int bitGet (int* puntero, int bit); 

void bitSet (int* puntero, int bit);

void bitToggle(int* puntero, int bit);

void maskOn (int* puntero, int mascara);

void getBin (int* arreglo, int mascara,int estado);