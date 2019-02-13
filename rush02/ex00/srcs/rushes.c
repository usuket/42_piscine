/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:40:18 by bbrady            #+#    #+#             */
/*   Updated: 2017/01/28 18:28:44 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmod.h"

#define CHECK(y,x,c) (grid[y][x] == c ? 1 : 0)

int		rush00(int x, int y, char **grid, int allgood)
{
	int ix;
	int iy;

	iy = -1;
	while (++iy < y)
	{
		ix = -1;
		while (++ix < x)
		{
			if ((ix == 0 || ix == x - 1) && (iy == 0 || iy == y - 1))
				allgood = CHECK(iy, ix, 'o');
			else if (ix == 0 || x - 1 == ix)
				allgood = CHECK(iy, ix, '|');
			else if (iy == 0 || iy == y - 1)
				allgood = CHECK(iy, ix, '-');
			else
				allgood = CHECK(iy, ix, ' ');
			if (!allgood)
				return (1);
		}
	}
	return (0);
}

int		rush01(int x, int y, char **grid, int allgood)
{
	int ix;
	int iy;

	iy = -1;
	while (++iy < y)
	{
		ix = -1;
		while (++ix < x)
		{
			if (ix == 0 && iy == 0)
				allgood = CHECK(iy, ix, '/');
			else if ((iy == 0 && ix == x - 1) || (iy == y - 1 && ix == 0))
				allgood = CHECK(iy, ix, '\\');
			else if (ix == x - 1 && iy == y - 1)
				allgood = CHECK(iy, ix, '/');
			else if (ix == 0 || ix == x - 1 || iy == 0 || iy == y - 1)
				allgood = CHECK(iy, ix, '*');
			else
				allgood = CHECK(iy, ix, ' ');
			if (!allgood)
				return (2);
		}
	}
	return (0);
}

int		rush02(int x, int y, char **grid, int allgood)
{
	int ix;
	int iy;

	iy = -1;
	while (++iy < y)
	{
		ix = -1;
		while (++ix < x)
		{
			if ((ix == 0 && iy == 0) || (iy == 0 && ix == x - 1))
				allgood = CHECK(iy, ix, 'A');
			else if ((iy == y - 1 && ix == 0) || (iy == y - 1 && ix == x - 1))
				allgood = CHECK(iy, ix, 'C');
			else if (ix == 0 || ix == x - 1 || iy == 0 || iy == y - 1)
				allgood = CHECK(iy, ix, 'B');
			else
				allgood = CHECK(iy, ix, ' ');
			if (!allgood)
				return (4);
		}
	}
	return (0);
}

int		rush03(int x, int y, char **grid, int allgood)
{
	int ix;
	int iy;

	iy = -1;
	while (++iy < y)
	{
		ix = -1;
		while (++ix < x)
		{
			if ((ix == 0 && iy == 0) || (ix == 0 && iy == y - 1))
				allgood = CHECK(iy, ix, 'A');
			else if ((iy == 0 && ix == x - 1) || (iy == y - 1 && ix == x - 1))
				allgood = CHECK(iy, ix, 'C');
			else if (ix == 0 || ix == x - 1 || iy == 0 || iy == y - 1)
				allgood = CHECK(iy, ix, 'B');
			else
				allgood = CHECK(iy, ix, ' ');
			if (!allgood)
				return (8);
		}
	}
	return (0);
}

int		rush04(int x, int y, char **grid, int allgood)
{
	int ix;
	int iy;

	iy = -1;
	while (++iy < y)
	{
		ix = -1;
		while (++ix < x)
		{
			if (ix == 0 && iy == 0)
				allgood = CHECK(iy, ix, 'A');
			else if ((iy == 0 && ix == x - 1) || (iy == y - 1 && ix == 0))
				allgood = CHECK(iy, ix, 'C');
			else if (ix == x - 1 && iy == y - 1)
				allgood = CHECK(iy, ix, 'A');
			else if (ix == 0 || ix == x - 1 || iy == 0 || iy == y - 1)
				allgood = CHECK(iy, ix, 'B');
			else
				allgood = CHECK(iy, ix, ' ');
			if (!allgood)
				return (16);
		}
	}
	return (0);
}
