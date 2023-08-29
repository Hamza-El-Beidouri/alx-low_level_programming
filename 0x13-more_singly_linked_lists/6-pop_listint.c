#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to the pointer of the first node of the list
 *
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
