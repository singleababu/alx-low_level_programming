
Meron@Meron-PC MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > README.md
0 - Write a program that prints _putchar, followed by a new line.
1 - Write a function that prints the alphabet, in lowercase, followed by a new line.
2 - Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
3 - Write a function that checks for lowercase character.
4 - Write a function that checks for alphabetic character.
5 - Write a function that prints the sign of a number.
6 - Write a function that computes the absolute value of an integer.
7 - Write a function that prints the last digit of a number.
8 - Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
9 - Write a function that prints the 9 times table, starting with 0.
10 - Write a function that adds two integers and returns the result.
11 - Write a function that prints all natural numbers from n to 98, followed by a new line.
12 - Write a function that prints the n times table, starting with 0.


Meron@Meron-PC MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
0-putchar.c  README.md  main.h

Meron@Meron-PC MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > main.h
#ifndf HOLBERTON_H_INCLUDED
#define HOLBERTON_H_INCLUDED
int _putchar(char);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
nt print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
void num(int r, int n);

#endif


Meron@Meron-PC MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ chmod u+x main.h

Meron@Meron-PC MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
0-putchar.c  README.md  main.h

Meron@Meron-PC MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > _putchar
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriately.
 */
int _putchar(char)
{
 return(write(1, &c, 1));
}


Meron@Meron-PC MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ ls
0-putchar.c  README.md  _putchar  main.h

Meron@Meron-PC MINGW64 ~/alx-low_level_programming/0x02-functions_nested_loops (master)
$ cat > 0-putchar.c
#include "main.h"

 /**
  * main - print putchar
  * Return: always 0
  */
int main(void)
{
       _putchar(' -');
       _putchar('p');
       _putchar('u');
       _putchar('t');
       _putchar('c');
       _putchar('h');
       _putchar('a');
       _putchar('r');
       _putchar('\n');

       return (0);
