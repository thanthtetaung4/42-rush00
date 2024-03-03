/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taung <taung@student.42singapore.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:06:41 by taung             #+#    #+#             */
/*   Updated: 2024/03/03 16:55:07 by taung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y);

void	write_first_row(int *j_ptr, int *x_ptr);
void	write_mid_rows(int *j_ptr, int *x_pt);
void	write_last_row(int *j_ptr, int *x_pt);
void	write(int i, int j, int x);

void	rush(int x, int y)
{
	int	i;
	int	j;
	

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			write (i, j, x);
		}
		ft_putchar('\n');
		i++;
	}
}

void	write_first_row(int j, int x)
{
	if (j == 0)
		ft_putchar('A');
	else if (j == x - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	write_mid_rows(int j, int x)
{
	if ((j == 0) || (j == x - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');

}

void	write_last_row(int j, int x)
{
	if (j == 0)
		ft_putchar('C');
	else if (j == x - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	write(int i, int j, int x)
{
	if (i == 0)
	{
		write_first_row(j,x);
	}
	else if (i > 0 && i < y-1)
	{
		write_mid_rows(j,x);
	}
	else
	{	
		write_last_row(j,x);
	}
}
