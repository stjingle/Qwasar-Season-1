void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_alphabet()
{
    char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
    for(int i  = 0 ; i < strlen(alpha); i++) my_putchar(alpha[i]);
}