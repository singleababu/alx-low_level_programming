#include "main.h"                                           

                                                            

/**                                                         

*-isuper - cheks if a character is uppercase or not         

*@c: character to be tested                                 

*Return: 1 whether it is, 0 otherwise                       

*/                                                          

                                                            

int -isuper(int c)                                          

{                                                           

     if ((c >= 'A') && (c <= 'z'))                          

     {                                                      

          return (1);                                       

     }                                                      

     return (0);
