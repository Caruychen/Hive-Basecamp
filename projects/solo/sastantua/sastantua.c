/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 06:41:21 by cchen             #+#    #+#             */
/*   Updated: 2021/05/30 18:57:02 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	printLine(int lineCounter, int width, int door, int level);
void	printLevel(int level, int door, int width);
int	nearestOdd(int n);
int	getWidthMultiplier(int n);

void	sastantua(int size)
{
	int door;
	int levelCounter;
	int width;

	door = size - (1 - size % 2);
	width = 2 * (3 * getWidthMultiplier(size)) + door;
	printf("Input size: %d\n", size);
	levelCounter = 1;
	while (levelCounter <= size)
	{
		printLevel(levelCounter, door, width);
		++levelCounter;
	}
}

void	printLevel(int level, int door, int width)
{
	int lines;
       	int lineCounter;
	int primaryLevelHeight;

	primaryLevelHeight = 3;
	lines = level + primaryLevelHeight - 1;
	lineCounter = 0;
	while (lineCounter++ < lines)
	{
		printLine(lineCounter, width, door, level);
	}
}	

void	printLine(int lineCounter, int width, int door, int level)
{
	int leftWall;
	int rightWall;
	int leftWallMultiplier;
	int counter;

	leftWall = (width - door) / 2 - lineCounter;
	rightWall = (leftWall + 2) + lineCounter * 2 - 1;
	leftWallMultiplier = (level - 1) * 2;
	counter = 0;
	while (counter++ < width)
		if (counter <= leftWall || counter > rightWall)
			ft_putchar(' ');
		else
			ft_putchar('*');
	ft_putchar('\n');
}

int	nearestOdd(int n)
{
	return ((n - 1) / 2);
}

int	getWidthMultiplier(int n)
{
	int currentIncrement;

	if (n == 1)
		return (1);
	currentIncrement = n - nearestOdd(n);
	return (currentIncrement + getWidthMultiplier(n - 1));
}
