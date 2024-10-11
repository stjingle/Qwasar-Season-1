void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_reverse_alphabet()
{
    char alpha[] = "\nabcdefghijklmnopqrstuvwxyz";
    int i = strlen(alpha)-1;
    while(i >=0) {
    my_putchar(alpha[i]);
    i--;    
    }
}