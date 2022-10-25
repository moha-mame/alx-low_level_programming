#include "lists.h"

/**
 * sum_listint - Function that sum lists
 * @head: head nodo
 *
 * Return: suma
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head != NULL)
	{
		for (sum = 0; head->next != NULL; sum += head->n)
		{
			head = head->next;
		}
	}
	return (sum);
}
