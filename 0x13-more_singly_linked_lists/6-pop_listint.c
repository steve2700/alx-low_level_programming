#include "lists.h"

/**
 * pop_listint - deletes head node.  Returns head node's data
 * @head: pointer to a pointer to a struct
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *headref;

	if (*head == NULL)
		return (0);
	headref = (*head)->next;
	tmp = (*head)->n;
	free(*head);
	*head = headref;
	return (tmp);
}
