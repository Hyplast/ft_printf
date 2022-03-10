/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:01 by severi            #+#    #+#             */
/*   Updated: 2022/03/10 23:07:37 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>


typedef struct	s_calc
{
	int			len1;
	int			len2;
	int			len1_static;
	int			len2_static;
	int			max;
	int			min;
	int			sum;
	int			ten_dec;
}				t_calc;


int	ft_printf(const char *format, ...);

char			*ft_dftoa(double x);
//char			*ft_ldftoa(long double x);
char			*ft_bintowhole(char *vlq);
char			*ft_bintodec(char *vlq);
void			get_res(char *mantissa, int exp, char **res);
//void			get_res_l(char *mantissa, int exp, char **res);
int				get_exp(char *exp_str);
//int				get_exp_l(char *exp_str);
char			**ft_frexp(double x);

void			calc_info(t_calc *info, char *s1, char *s2);
char			*vlq_sum(char *s1, char *s2);
char			*vlq_mult(char *s1, char *s2);
int				ft_max(int a, int b);
int				ft_min(int a, int b);
char			*vlq_binpow(int n);
char			*vlq_fivepow(int n);
int				pow2(int pow);
char			*get_pow_ten(char *vlq, int n);
void			vlq_nshift(char *s, int size, int shifts);
void			vlq_shift_left(char *s, int size);
void			vlq_initialize(char *vlq, int c, int size);
void			vlq_tmp_conv(t_calc *info, char *s1, char *s2);
void			vlq_tmp_conv_rev(char *s, int size);
void			vlq_tmp_conv_rev2(t_calc *info, char *s1, char *s2);


#endif
