#include <stdio.h>
#include "lists.h"

/**
 * list_len - print number of the elements
 * @h: position of the singly linked
 *
 * Return: number of no
 */
size_t list_len(const list_t *h)
{
size_t nummber = 0;
while (h)
{
h = h->next;
nummber++;
}
return (nummber);
}

