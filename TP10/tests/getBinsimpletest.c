/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest.c
 * Author: ebatemarco
 *
 * Created on 22 de octubre de 2020, 20:42
 */

#include <stdio.h>
#include <stdlib.h>


/*
 * Simple C Test Suite
 */

void getBin(int* arreglo, int mascara, int estado);

void testGetBin() 
{
    int i;
    int arreglo[8];
    int solucion[8]={0,0,0,0,1,0,1,0};
    int mascara=0xA;
    int estado=0;
    getBin(arreglo, mascara, estado);
    for(i=0; i<8;i++)
    {
        if (arreglo[i]!=solucion[i] /*check result*/) 
        {
            printf("%%TEST_FAILED%% testname=testGetBin (newsimpletest) message=error message sample\n");
            printf("ERROR in Element: %d = %d\n",i,arreglo[i]);
        }
    }
}

int main(int argc, char** argv) 
{
    printf("%%SUITE_STARTING%% newsimpletest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testGetBin (newsimpletest)\n");
    testGetBin();
    printf("%%TEST_FINISHED%% time=0 testGetBin (newsimpletest)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
