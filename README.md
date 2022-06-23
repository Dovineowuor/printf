[![N|Solid](https://trinityventures.com/uploads/images/portfolio/_270xAUTO_crop_center-center/Holberton-3.png )](http://holbertonschool.com)
# PRINTF PROJECT

Printf is not only the most used function in C, but it is a sample of how powerful could be C. By this project we _printf replicates the C standard library printf() function, according to the formats called with %. It prints also characters and strings.

### Formats and its usages

Use the format % according to the function you want to call with _printf

| Format | Usage |
| ------ | ------ |
| %c | It is to print characters |
| %s | It is to print strings |
| %d | It is to print Signed Integer |
| %i | It is to print integers |


---

## To clone the _printf:
```sh
$ git clone https://github.com/dovineowuor/printf.git
```
## Compilation

Your code will be compiled this way:
```sh
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
## Prototype
```int _printf(const char *format, ...);```

## Usage
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command ```gcc -Wall -Werror -Wextra -pedantic *.c```
* All files were linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)``` where ```format string``` can contain conversion specifiers and flags,
along with regular characters

## Examples

CREATE A MAIN.C WITH THIS CODE:

```sh
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

Also you can test like this way in a C program.

* ```_printf("Hello, Holberton\n")``` *prints "Hello, Holberton", followed by a new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*


### Authors

 - [Dovine Owuor](https://github.com/dovineowuor)
 - [Evans Moseti](https://github.com/mutembeievans)

