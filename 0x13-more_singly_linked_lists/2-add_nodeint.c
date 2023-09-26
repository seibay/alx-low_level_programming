#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: a pointer  to a pointer to a 'lisintt_t' structure
 * @n: value for new node 
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;

	return (new_node);
}
