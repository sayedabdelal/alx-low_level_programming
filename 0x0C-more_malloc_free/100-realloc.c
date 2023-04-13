#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the new memory block, or NULL if new_size is 0 and ptr is not NULL,
 * or NULL if the function fails to allocate the requested memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    int *new_ptr;
    char *old_ptr;
    unsigned int i;

    /* If new_size is 0, free the memory block pointed to by ptr and return NULL */
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return NULL;
    }

    /* If ptr is NULL, allocate a new memory block of size new_size and return a pointer to it */
    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
        {
            return NULL;
        }
        return new_ptr;
    }

    /* If new_size is equal to old_size, return ptr */
    if (new_size == old_size)
    {
        return ptr;
    }

    /* Allocate a new memory block of size new_size */
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return NULL;
    }

    /* Copy the contents of the old memory block to the new memory block */
    old_ptr = ptr;

    for (i = 0; i < old_size && i < new_size; i++)
    {
        new_ptr[i] = old_ptr[i];
    }

    /* Free the old memory block */
    free(ptr);

    /* Return a pointer to the new memory block */
    return new_ptr;
}
