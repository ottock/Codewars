#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>
​
size_t *find_capitals(const char *word, size_t *uppercase_count) {
    size_t *indexes = malloc(100 * sizeof(size_t));
    *uppercase_count = 0;
​
    for (int i = 0; *word != '\0'; i++) {
        if (isupper((unsigned char)*word)) {
            indexes[*uppercase_count] = i;
            (*uppercase_count)++;
        }
        word++;
    }
​
    if (*uppercase_count == 0) {
        free(indexes);
        return NULL;
    }
    return indexes;
}