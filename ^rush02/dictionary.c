/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:03:37 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/22 14:39:44 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
// #include <sys/types.h>
// #include <sys/stat.h>

typedef struct	s_entry
{
	unsigned long	num;
	char			*str;
}				t_entry;

typedef struct	s_dict
{
	char		*path;
	int			buff;
	int			size;
	t_entry		*entries;
}				t_dict;

// Returns the size (bytes) of the archive whose name is passed as parameter
int	calc_dict_buff(char *str)
{
	int		fd;
	int		ret;
	char	buf[6910000 + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (-1);
	ret = read(fd, buf, 6910000);
	if (close(fd) == -1)
		return (-1);
	return (ret);
}

// TODO: Reserves the memory space needed for the array t_dict.entries.
// 
// Before doing this, it will be necessary to count the number of entries and 
// reserve space using maloc:
// 
// 	a) n * sizeof(t_entry) +1 bytes
// 		The +1 is in order to place \0 inside the last position
// 		I'm not sure about this. 
// 
// 	b) n * sizeof(t_entry) bytes
// 
// 
// 
// It is needed to be able to detect the lines of the file and check if they 
// have or not a entry. This could be easely done with an atoi funtion:
// if it dectects a number, it means the line is valid entry.
// 
// Also, the function has to store the number of entries (n) into t_dict.size
t_entry	*entries_malloc(t_dict dict)
{
}

// TODO: same as atoi but it has to get the string value of the number
t_entry	a_to_entry(t_dict dict)
{
}

// TODO: Using a_to_entry gives values to the dict.entries array 
// Preferably descendant order
void	create_entries(t_dict dict)
{
}

int	main(void)
{
	t_dict		dict;

	dict.path = "numbers.dict";
	dict.buff = calc_dict_buff(dict.path);
	create_entries(dict);
	return (0);
}
