#include <stdlib.h>
​
//  return a heap-allocated C-string
//  (memory will be freed by tester)
​
char *remove_url_anchor(const char *url_in) {
    int len = 0;
    const char *buff = url_in;
    while(*buff != '#' && *buff != '\0') {
        len++;
        buff++;
    }
​
    char *url_out = malloc(len + 1);
    if(url_out == NULL) {
        return NULL;
    }
​
    for(int i = 0; i < len; i++) {
        url_out[i] = url_in[i];
    }
    url_out[len] = '\0';
    return url_out;
}