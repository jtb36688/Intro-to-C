#include <stdio.h>

int string_length(char *s)
{
    int count = 0;
    while (*(s + (count))) {
        count++;
    }
    return count;
}
/*
    Given a character pointer x (that points to an array of chars), and a
    character pointer y, copies the character contents of y over to x. Pointer
    arithmetic is necessary here. Also, make sure x points to a null terminator
    at its end to terminate it properly. 

    Example call:

    char buffer[1024];

    string_copy(buffer, "Hello!");
    printf("%s", buffer); // Prints "Hello!"
*/
void string_copy(char *x, char *y)
{
    int count = 0;
    while(*y != '\0') {
        x[count] = *y;
        y++;
        count++;
    }
    x[count] = '\0';
}

/*
    Searches the input string `str` for the first instance of the 
    character `c` (an unsigned char). This function returns a pointer
    that points to the first instance of the character `c` in the
    input string `str`.

    Do not use the `strchr` function from the standard library.
*/
char *find_char(char *str, char c)
{
    while (*str != '\0') {
        if (*str == c) {
            return (char*)str;
        }
        str++;
    }
}

/*
    Searches the input string `haystack` for the first instance of
    the string `needle`. This function returns a pointer that points
    to the first instance of the string `needle` in the input
    string `haystack`. 

    Do not use the `strstr` function from the standard library.
*/
char *find_string(char *haystack, char *needle)
{
    char *strpointer;
    for (int i = 0; haystack[i] != '\0' ; i++) {
        if (haystack[i] == needle[0]) {
            for (int x = 1; x <= string_length(needle); x++) {
                if (*(haystack + i + x) != needle[x]) {
                    break;
                }
                if (x == string_length(needle)) {
                    strpointer = &haystack[x-i];
                    return strpointer;
                }
        }
    }
    }
}

#ifndef TESTING
int main(void)
{
    char *found_char = find_char("hello", 'e');
    char *found_string = find_string("world", "or");

    printf("Found char: %s\n", found_char);
    printf("Found string: %s\n", found_string);

    return 0;
}
#endif
