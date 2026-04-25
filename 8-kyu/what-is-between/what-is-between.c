void between(int a, int b, int *integers) {
  int count = 0;
  for (int i = a; i <= b; i++) {
    integers[count] = i;
    count++;
  }
}