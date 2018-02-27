#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TODO: use a better random generator
int random_int(int max)
{
    return rand() % max;
}

void init_rand(void)
{
    srand(time(NULL));
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <number>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Test
    int max = atoi(argv[1]);

    init_rand();

    int result = random_int(max);

    printf("%d\n", result);
    return EXIT_SUCCESS;
}