/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ezequiel
 *
 * Created on October 25, 2020, 11:56 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "HeadersofTP10.h"

/*
 * 
 */
int main(int argc, char** argv) 
{

    char c;
    bits8_t portA;

    while ((c=getchar())!='q')
    {
     switch (c)
     {
         case 't': 
             maskToggle(portA, 0xFF); 
             break;
         case 'c':
             maskOff (portA, 0xFF);
             break;
         case 's':
             maskOn (portA, 0xFF);
             break;
         case 0: 
             switchcase (0, portA.b0);
             break;
         case 1:
             switchcase (1, portA .b1);
             break;
         case 2: 
             switchcase (2, portA .b2);
             break;
         case 3: 
             switchcase (3, portA .b3);
             break;
         case 4:
             switchcase (4, portA .b4);
             break;
         case 5: 
             switchcase (5, portA .b5);
             break;
         case 6: 
             switchcase (6, portA .b6);
             break;
         case 7:
             switchcase (7, portA .b7);
             break;
     }
    }
    return (EXIT_SUCCESS); 
}

void switchcase (int caso, bits8_t port)
{
     if (bitGet(port, caso))
        bitClr (port, caso);
     else 
        bitSet (port, caso);
}

void led_state (int port [8])
{
    int i;
    for (i = 0; i <= 7; i++)
    {
        printf ("Led %d: %d\n", i, port[i]);
    }
}

