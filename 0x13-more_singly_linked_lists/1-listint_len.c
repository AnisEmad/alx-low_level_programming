#include "lists.h"
/**
  * listint_len - compute the number of elements in a linked list
  * @h: the head of the list
  * Return: integer the number of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
