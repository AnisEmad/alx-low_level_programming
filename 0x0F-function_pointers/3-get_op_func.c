#include "calc.h"
/**
  * get_op_func - selects the correct function to perform
  * @s: the operator passed
  * Return: pointer to the function
  */

int (*get_op_func(char *s))(int, int)
{

