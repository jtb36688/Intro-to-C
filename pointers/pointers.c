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
    int count;
    for (int i = 0; y[i] != '\0' ; i++) {
        x[i] = y[i];
        count = i+1;
    }
    x[count] = '\0';
}

// char *string = "hello, world";
// char empty[20];

// string_copy(empty, string);
// printf("%c\n", empty);

/*
    Searches the input string `str` for the first instance of the 
    character `c` (an unsigned char). This function returns a pointer
    that points to the first instance of the character `c` in the
    input string `str`.

    Do not use the `strchr` function from the standard library.
*/
char *find_char(char *str, char c)
{

    int count = 1;
    while (*(str + count)) {
        if (*(str + count) == c) {
            return (str + count);
        }
        count++;
    }
    return "No Match Found";
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
    int count = 1;
    while (*(haystack + count)) {
        if (*(haystack + count) == needle[0]) {
            for (int x = 1; x <= string_length(needle); x++) {
                if (*(haystack + count + x) != needle[x]) {
                    break;
                }
                if (x == string_length(needle)) {
                    return (haystack + count);
                }
            } 
        }
        count++;
    }
    return "No Match Found";
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
