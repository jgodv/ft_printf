/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:38:45 by jgo               #+#    #+#             */
/*   Updated: 2022/10/03 12:14:45 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf_s(va_list *ap, const char conversion)
{
	char	*arg;

	arg = va_arg(*ap, char *);
	if (!arg || conversion != STR)
		arg = "(null)";
	return (ft_putstr(arg));
}
