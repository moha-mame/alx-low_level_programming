#include "lists.h"

/**
 * print_listint_safe - Listas enlazadas
 * @head: Dado desde main
 *
 * Return: i
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *temp;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		temp = head;
		head = head->next;
		i++;
		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (i);
}
