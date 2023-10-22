#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *strcpy;
    unsigned int len;

    if (str == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    strcpy = strdup(str);
    if (strcpy == NULL)
    {
        free(new_node);
        return (NULL);
    }

    len = 0;
    while (str[len])
        len++;

    new_node->str = strcpy;
    new_node->len = len;
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}
