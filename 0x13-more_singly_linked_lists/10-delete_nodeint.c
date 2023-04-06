#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;
	listint_t *next;

	node = *head;

	if (index != 0)
	{
		for (i < index - 1 && node != NULL; i++)
		{
			node = node->next;
		}
	}

	if (node == NULL || (node->next == NULL && index != 0))
	{
		return (-1);
	}

	next = node->next;

	if (index != 0)
	{
		node->next = next->next;
		free(next);
	}
	else
	{
		free(node);
		*head = next;
	}

	return (1);
}
