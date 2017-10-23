void    ft_putchar(char c);
void    ft_putstr(char *str);

int     main(int argc, char **argv)
{
    int i;
    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            ft_putstr(argv[i]);
            if (argc > 2 && i != (argc - 1))
                ft_putchar(' ');
            i++;
        }
        ft_putchar('\n');
    }
    else
        ft_putstr("Add some program arguments\n");
    return (0);
}
