#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the previously allocated memory block.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, for the reallocated memory block.
 *
 * Return: A pointer to the reallocated memory block or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int min_size;
    unsigned int i;

    if (new_size == old_size)
        return (ptr);
    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
            return (NULL);
        return (new_ptr);
    }
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }
    if (old_size < new_size)
        min_size = old_size;
    else
        min_size = new_size;
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);
    i = 0;
    while (i < min_size)
    {
        ((char *)new_ptr)[i] = ((char *)ptr)[i];
        i++;
    }
    free(ptr);
    return (new_ptr);
}
