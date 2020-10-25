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
#include "/Home/NetBeansProjects/TP10/TP10/HeadersofTP10.h"

/*
 * 
 */
int main(int argc, char** argv) {

    char c;
    int port [8] = {0,0,0,0,0,0,0,0};

    while ((c=getchar())!='q')
    {
     switch (c)
     {
         case 't': 
             masktoggle(port, 0xFF); 
             break;
         case 'c':
             maskOff (port, 0xFF);
             break;
         case 's':
             maskOn (port, 0xFF);
             break;
         case 0: 
             switchcase (0, port);
             break;
         case 1:
             switchcase (1, port);
             break;
         case 2: 
             switchcase (2, port);
             break;
         case 3: 
             switchcase (3, port);
             break;
         case 4:
             switchcase (4, port);
             break;
         case 5: 
             switchcase (5, port);
             break;
         case 6: 
             switchcase (6, port);
             break;
         case 7:
             switchcase (7, port);
             break;
     }
    }
    return (EXIT_SUCCESS); 
}

void switchcase (int caso, int port [8])
{
     if (bitGet(port, caso))
        bitClear (port,caso);
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