<<<<<<< HEAD
#include <unistd.h>
=======
nclude <unistd.h>
>>>>>>> 13bd45f818a448ba36b1ee2dab7463e5d77a0cb2

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
