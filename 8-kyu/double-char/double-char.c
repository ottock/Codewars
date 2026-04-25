char *double_char (const char *string, char *doubled) {
  int i = 0, j = 0;
  while (string[i] != '\0') {
    doubled[j] = string[i];
    doubled[j+1] = string[i];
    i++;
    j += 2;
  }
  doubled[j] = '\0';
  return doubled;
}