#include "lists.h"

/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
  size_t nodes_count = 0;
  const listint_t *current = h;

  while(current != NULL)
    {
      printf("%d\n",current.n);
      current = current.next;
      nodes_count++;
    }
  return (nodes_count);
}
