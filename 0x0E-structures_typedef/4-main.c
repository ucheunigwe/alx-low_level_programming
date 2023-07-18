#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("", 3.5, "Bob");
    printf("My name is %s, and I am %.1f i am owned by %s:) - Woof!\n", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}
