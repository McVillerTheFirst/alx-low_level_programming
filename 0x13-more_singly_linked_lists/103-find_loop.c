#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slack;
	listint_t *fast;

	slack = head;
	fast = head;
	while (head && slack && slack->next)
	{
		head = head->next;
		slack = slack->next->next;

		if (head == slcak)
		{
			head = fast;
			fast =  slack;
			while (1)
			{
				slack = fast;
				while (slack->next != head && slack->next != fast)
				{
					slack = slack->next;
				}
				if (slack->next == head)
					break;

				head = head->next;
			}
			return (slack->next);
		}
	}

	return (NULL);
}
