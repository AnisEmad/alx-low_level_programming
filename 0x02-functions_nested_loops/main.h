#ifndef MAIN_H
#define MAIN_H
/**
  * _putchar - prints the character given
  * @c : the character printed
  *
  * Return: ON sucess 1.
  */
int _putchar(char c);
/**
  * print_alphabet - prints the the alphabet followed by newline
  *
  * Return: void
  */
void print_alphabet(void);
/**
  * print_alphabet_x10 - prints the alphabet characters 10 times in 10 lines followed by newline
  *
  * Return: void
  */
void print_alphabet_x10(void);
/**
  * _islower - checks if the character is lowercase or not
  * @c : the character checked 
  *
  * Return: 1 if it's lowercase
  * 0 if it's not.
  */
int _islower(int c);
/**
  * _isalpha - checks if the character is alphabet character or not
  * @c: the character being checked
  * Return: 1 if it's alphabet character.
  * 0 if it is not.
  */
int _isalpha(int c);
/**
  * prin_sign - print the sign of the number
  * @n: the number being checked
  * Return: 1 if it is greater than zero.
  * 0 if it is equal to zero.
  * -1 if it is less than zero.
  */
int print_sign(int n);
#endif
