/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taung <taung@student.42singapore.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:06:41 by taung             #+#    #+#             */
/*   Updated: 2024/03/03 17:31:48 by taung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

void	write_first_row(int j_ptr, int x_ptr);
void	write_mid_rows(int j_ptr, int x_pt);
void	write_last_row(int j_ptr, int x_pt);
void	write_lines(int i, int j, int x, int y);

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
			write_lines (i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	write_first_row(int j, int x)
{
	if (j == 0)
		ft_putchar('/');
	else if (j == x - 1)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	write_mid_rows(int j, int x)
{
	if ((j == 0) || (j == x - 1))
		ft_putchar('*');
	else
		ft_putchar(' ');

}

void	write_last_row(int j, int x)
{
	if (j == 0)
		ft_putchar('\\');
	else if (j == x - 1)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	write_lines(int i, int j, int x, int y)
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
