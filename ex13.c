#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;



    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas",
        argv[1]
    };


    // go through each string in argv
    // why am I skipping argv[0]
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    int num_states = 5;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
