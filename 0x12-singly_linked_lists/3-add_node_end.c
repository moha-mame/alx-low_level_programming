#include "lists.h"

/**
 * add_node_end - adds a node at the end, my dude
 * @head: points to the head
 * @str: the string to put into it
 * Return:new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	unsigned int i;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	temp->len = i;
	temp->next = NULL;

	if (!*head)
	{
		*head = temp;
		return (temp);
	}

	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
