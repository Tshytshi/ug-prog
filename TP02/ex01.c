#include <unistd.h>

void ft_print(void)
{
    write(1,"La vie est raide\n",17);
} 

void ft_print_more(int number)
{
    for (int i = 0 ; i < number ; i++)
    {
        ft_print();
    }
}
