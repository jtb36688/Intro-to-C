#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every  
    n't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
    int count = 0;
    char *fizzbuzz = "FizzBuzz";
    char *fizz = "Fizz";
    char *buzz = "Buzz";
    void printstring(int *str, int len) {
        for (int i = 0; i < len; i++)
            printf("%c", *(str + i))
    }
    for (int x = 0; x < n; x++) {
        count ++;
        if ( (count % 3 == 0) && (count % 5 == 0) ) {
            printf("FizzBuzz");
            continue;
        }
        else if (count % 3 == 0) {
            printf("Fizz");
        }
        else if (count % 5 == 0) {
            printf("Buzz");
        }
}
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
