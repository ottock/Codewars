#include <ctype.h>
#include <stdbool.h>
​
​
int string_length(const char *s) {
    int len = 0;
    while (*s++) {
        len++;
    }
​
    return len;
}
​
​
int count_letters(char c, char *s) {
    int count = 0;
    while (*s != '\0') {
        if (tolower(*s) == tolower(c)) {
            count++;
        }
        s++;
    }
  
    return count;
}
​
​
bool is_anagram(const char *s1, const char *s2) {
    char *start1 = s1;
    char *start2 = s2;
  
    if (string_length(s1) != string_length(s2)) {
        return false;
    }
  
    while (*s1 != '\0') {
        if (count_letters(*s1, start1) !=
            count_letters(*s1, start2)) {
            return false;
        }
        s1++;
    }
  
    return true;
}