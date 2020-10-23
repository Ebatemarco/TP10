/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MaskOnTest.c
 * Author: ebatemarco
 *
 * Created on 23 de octubre de 2020, 11:58
 */

#include <stdio.h>
#include <stdlib.h>
#include "HeadersofTP10.h"

/*
 * Simple C Test Suite
 */

void testMaskOn() 
{
    int i;
    int puntero[8]={0,0,0,0,0,0,0,1};
    int mascara=0xA;
    int solucion[8]={0,0,0,0,1,0,1,1};
    maskOn(puntero, mascara);
    for(i=0;i>8;i++)
    {
        if (puntero[i]!=solucion[i] /*check result*/) 
        {
            printf("%%TEST_FAILED%% testname=testMaskOn (MaskOnTest) message=error message sample\n");
            printf("ERROR in element %d = %d\n", i, puntero[i]);
        }
    }
}

int main(int argc, char** argv) 
{
    printf("%%SUITE_STARTING%% MaskOnTest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testMaskOn (MaskOnTest)\n");
    testMaskOn();
    printf("%%TEST_FINISHED%% time=0 testMaskOn (MaskOnTest)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
