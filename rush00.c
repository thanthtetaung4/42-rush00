/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taung <taung@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:18:32 by taung             #+#    #+#             */
/*   Updated: 2024/03/02 15:47:43 by taung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int col, int row);
void	put_char(char c);

void	rush(int col, int row)
{
	int	j;
	int	i;

	j = 0;
	while (j < row)
	{
		i = 0;
		while (i < col)
		{
			if (j == 0 || j == row - 1 || i == 0 || i == col - 1)
			{
				if ((i == 0 || i == col - 1) && (j == 0 || j == row - 1))
					put_char('o');
				else if (i == 0 || i == col - 1)
					put_char('|');
				else
					put_char('-');
				if (i == col - 1)
					put_char('\n');
			}
			else
			{
				put_char(' ');
			}
			i++;
		}
		j++;
	}
}
