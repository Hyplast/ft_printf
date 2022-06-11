/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 09:54:01 by severi            #+#    #+#             */
/*   Updated: 2022/05/22 14:21:14 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "libft/includes/libft.h"

/* spec
* n l ll L h hh
* 0 1 2  3 4 5
*/
typedef struct s_flags
{
	int			len;
	int			spec;
	int			width;
	int			prec;
	int			sharp;
	int			minus;
	int			plus;
	int			space;
	int			zero;
}				t_flags;

typedef struct s_calc
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

int				ft_printf(const char *format, ...);
void			ft_round(char **res, int precision);
void			fill_prec(char *ret, char *str, int size);
int				ft_max(int a, int b);
int				ft_min(int a, int b);
void			ft_swap(char *a, char *b);
char			*ft_strrev(char *str);
int				ft_str_isdigit(char *s);
char			*ft_dftoa(double x);
char			*ft_ldftoa(long double x);
char			*ft_bintowhole(char *vlq);
char			*ft_bintodec(char *vlq);
void			get_res(char *mantissa, int exp, char **res);
void			get_res_l(char *mantissa, int exp, char **res);
int				get_exp(char *exp_str);
int				get_exp_l(char *exp_str);
char			**ft_frexp(double x);
char			**ft_frexpl(long double x);
void			calc_info(t_calc *info, char *s1, char *s2);
void			free_res(char **res);
void			free_calc(t_calc *info);
char			*vlq_sum(char *s1, char *s2);
char			*vlq_mult(char *s1, char *s2);
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
int				ft_print_c_ntimes(char c, int n);
int				ft_putnchar(const char *s, size_t n);
int				ft_putcx(char c, int n);
int				ft_lookforchar(const char *s, int c);
char			*ft_basetoa(unsigned long n, unsigned long base, char sign);
int				print_before(t_flags *flags, int chars_printed, char *s,
					char c);
int				print_int(t_flags *flag, int c_p, char *s, char c);
int				print_u_int(t_flags *flag, int c_p, char *s, char c);
int				print_minus(t_flags *flag, int c_p, char *s, char c);
int				print_section(t_flags *flag, int c_p, char *s, char c);
int				print_w_zeros(t_flags *flag, int c_p, char *s, char c);
int				print_sharp_w_spaces(t_flags *flag, int c_p, char *s, char c);
int				print_sharp_w_zeros(t_flags *flag, int c_p, char *s, char c);
int				print_normal(t_flags *flag, int c_p, char *s, char c);
size_t			count_digits(long c);
void			ft_add_zeros(char **str, int zeros);
int				print_b(const char *flags, va_list ap, int chars_printed);
int				print_c(char c);
int				print_char(const char *flags, char c, int chars_printed);
int				print_d(const char *flags, va_list ap, int chars_printed);
int				print_f(const char *flags, va_list ap, int chars_printed);
int				print_i(const char *flags, va_list ap, int chars_printed);
int				print_o(const char *flags, va_list ap, int chars_printed);
int				print_p(void *pointer);
int				print_s(const char *flags, char *s, int chars_printed);
int				print_u(const char *flags, va_list ap, int chars_printed);
int				print_x(const char *flags, va_list ap, int chars_printed);
int				print_big_x(const char *flags, va_list ap, int chars_printed);
t_flags			*return_flags(const char *flags);
uintmax_t		unsigned_conv(t_flags *flag_s, va_list ap);
uintmax_t		signed_conv(t_flags *flag_s, va_list ap);
void			init_flags(t_flags *flag_s, const char *flags);
void			fix_overrides(t_flags *flag_s, const char c);
int				is_plus(t_flags *flag, int c_p, char **s, char c);
int				is_sharp(int c_p, char c);
int				print_sign(t_flags *flag, int c_p, char **s);

#endif