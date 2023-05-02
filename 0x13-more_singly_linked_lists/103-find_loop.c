include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *kigal, *rwand;

	if (head == NULL || head->next == NULL)
		return (NULL);

	kigal = head->next;
	rwand = (head->next)->next;

	while (rwand)
	{
		if (kigal == rwand)
		{
			kigal = head;

			while (kigal != rwand)
			{
				kigal = kigal->next;
				rwand = rwand->next;
			}

			return (kigal);
		}

		kigal = kigal->next;
		rwand = (rwand->next)->next;
	}

	return (NULL);
}