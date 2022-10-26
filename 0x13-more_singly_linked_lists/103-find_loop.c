#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head:linked list to search
 *
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head;
	listint_t *fast_p = head;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			slow_p = head;
			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			return (slow_p);
		}
	}
	return (NULL);
}

