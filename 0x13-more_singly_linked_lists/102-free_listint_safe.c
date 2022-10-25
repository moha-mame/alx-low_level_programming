#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, even if is in a loop.
 * @h: pointer to starting node in the list.
 *
 * Return: size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = NULL;
	size_t i = 0;

	if (h == NULL)
		return (0);

	if (*h == NULL)
		return (0);

	tmp = *h;

	while (tmp != NULL)
	{
		i++;
		tmp = (*h)->next;
		free(*h);
		if (tmp >= *h)
		{
			*h = NULL;
			return (i);
		}
		*h = tmp;
	}

	return (i);
}
