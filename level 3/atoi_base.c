/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noelsanc <noelsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:00:00 by noelsanc          #+#    #+#             */
/*   Updated: 2024/09/03 20:27:32 by noelsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int my_atoi_base(const char *str, int base)
{
	int i;
	int result;
	
	i = 0;
	result = 0;
	if(base <= 10)
	{
		while(str[i] >= '0' && str[i] <= '9')
		{
			result = result * base + (str[i] - '0');
			i++;
		}
	}
	else if(base > 10 && base <= 16)
	{
		while((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f' ))
		{
			if((str[i] >= '0' && str[i] <= '9'))
				result = result * base + (str[i] - '0');
			else
				result = result * base + ((str[i] - 'a') + 10);
			i++;
		}
	}
	return(result);
}

int main(void)
{
	const char *str = "100";
	int base = 4;
	printf("%i", my_atoi_base(str, base));
	
	
}