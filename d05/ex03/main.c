void    ft_putchar(char c);
void    ft_putstr(char *str);
char    *ft_strcpy(char *dest, char *src);
int     ft_strlen(char *str);

int     main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putstr("Please, type in some string ('example sting lololo') like program argument.\n");
        return (1);
    }
    else
    {
        char dest[ft_strlen(argv[1])];
        dest = ft_strcpy(dest, argv[1]);
        ft_putstr("src: ");
        ft_putstr(argv[1]);
        ft_putstr("\ndest: ");
        ft_putstr(dest);
        ft_putchar('\n');
    }
    return (0);
}
