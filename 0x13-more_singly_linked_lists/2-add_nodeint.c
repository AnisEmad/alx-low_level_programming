#include "lists.h"
/**
  * add_nodeint - add a node at the beginning of a list
  * @head: the head of the list
  * @n: the value of the new node
  * Return: the adderss of the new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node->n = n;
	new_node->next = *head;

	return (new_node);
}
