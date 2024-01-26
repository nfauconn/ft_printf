# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfauconn <nfauconn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/03 21:07:04 by nfauconn          #+#    #+#              #
#    Updated: 2024/01/26 14:22:25 by nfauconn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

SRCS_LIBFT		= \
					./libft/ft_memalloc.c\
					./libft/ft_memcpy.c\
					./libft/ft_memset.c\
					./libft/ft_memdel.c\
					./libft/ft_strjoin.c\
					./libft/ft_strchr.c\
					./libft/ft_strlen.c\
					./libft/ft_strdup.c\
					./libft/ft_strfdup.c\
					./libft/ft_strfjoin.c\
					./libft/ft_strncmp.c\
					./libft/ft_nbrlen_base.c\
					./libft/ft_ulltoa_base.c\
					./libft/ft_itoa.c\
					./libft/ft_bzero.c\
					./libft/ft_memset.c\
					./libft/ft_substr.c\
					./libft/ft_isflagpf.c\
					./libft/ft_isdigit.c\
					./libft/ft_toupper.c\

SRCS			= \
					ft_printf.c\
					init.c\
					insert_into_buffer.c\
					convert.c\
					conv_c.c\
					conv_s.c\
					conv_p.c\
					conv_d_i.c\
					conv_u.c\
					conv_x.c\
					conv_mx.c\
					conv_percent.c\
					main_loop.c\
					fill_nb.c\
					parse.c\

HEADERS			=	ft_printf.h

SRCS_BONUS		= \
					./bonus/ft_printf_bonus.c\
					./bonus/init_bonus.c\
					./bonus/insert_into_buffer_bonus.c\
					./bonus/convert_bonus.c\
					./bonus/conv_c_bonus.c\
					./bonus/conv_s_bonus.c\
					./bonus/conv_p_bonus.c\
					./bonus/conv_d_i_bonus.c\
					./bonus/conv_u_bonus.c\
					./bonus/conv_x_bonus.c\
					./bonus/conv_mx_bonus.c\
					./bonus/conv_percent_bonus.c\
					./bonus/main_loop_bonus.c\
					./bonus/fill_nb_bonus.c\
					./bonus/parse_bonus.c\

HEADERS_BONUS	=	ft_printf_bonus.h

OPTION			=	-I ${HEADERS}
OPTION_BONUS	=	-I ${HEADERS_BONUS}

OBJS			=	${SRCS:.c=.o} ${SRCS_LIBFT:.c=.o}
OBJS_BONUS		=	${SRCS_BONUS:.c=.o} ${SRCS_LIBFT:.c=.o}

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -f

all:				${OBJS}
					ar rc ${NAME} ${OBJS}

bonus:				${OBJS_BONUS}
					ar rc ${NAME} ${OBJS_BONUS}

${NAME}:			all

clean:
					${RM} ${OBJS} ${OBJS_BONUS}

fclean:				clean
					${RM} ${NAME}

re:					fclean all

.PHONY:				all clean fclean re
