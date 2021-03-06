# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkante <fkante@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/19 17:11:38 by fkante            #+#    #+#              #
#    Updated: 2020/05/04 10:13:51 by francis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc 
AR = ar -rcs
#override CFLAGS += -Wall
#override CFLAGS += -Wextra
#override CFLAGS += -Werror
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
DFLAGS =  -Wall -Wextra -Werror -fsanitize=address,undefined -g3
BUILD_DIR = build/

INCLUDES = -I./includes
HEAD += ./includes/libft.h
HEAD += ./includes/vector.h

SRCS += ft_memalloc.c
# SRCS += ft_malloc_debug.c
SRCS += ft_atoi.c
SRCS += ft_bzero.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_isprint.c
SRCS += ft_itoa.c
SRCS += ft_itoa_base.c
SRCS += ft_lstadd.c
SRCS += ft_lstdel.c
SRCS += ft_lstdelone.c
SRCS += ft_lstiter.c
SRCS += ft_lstnew.c
SRCS += ft_lstmap.c
SRCS += ft_lstfindone.c
SRCS += ft_memccpy.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memdel.c
SRCS += ft_memmove.c
SRCS += ft_memset.c
SRCS += ft_putchar.c
SRCS += ft_putchar_fd.c
SRCS += ft_putendl.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr.c
SRCS += ft_putnbr_fd.c
SRCS += ft_putstr.c
SRCS += ft_putstr_fd.c
SRCS += ft_strcat.c
SRCS += ft_strchr.c
SRCS += ft_strclr.c
SRCS += ft_strcmp.c
SRCS += ft_strcpy.c
SRCS += ft_strdel.c
SRCS += ft_strdup.c
SRCS += ft_strequ.c
SRCS += ft_striter.c
SRCS += ft_striteri.c
SRCS += ft_strjoin.c
SRCS += ft_strlcat.c
SRCS += ft_strlen.c
SRCS += ft_strmap.c
SRCS += ft_strmapi.c
SRCS += ft_strndup.c
SRCS += ft_strncat.c
SRCS += ft_strncmp.c
SRCS += ft_strncpy.c
SRCS += ft_strnequ.c
SRCS += ft_strnew.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strsplit.c
SRCS += ft_strstr.c
SRCS += ft_strsub.c
SRCS += ft_strtrim.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c
SRCS += ft_swap.c
SRCS += ft_nb_unitlen.c
SRCS += ft_absolute.c
SRCS += ft_fibonacci.c
SRCS += ft_memjoin_str.c
SRCS += ft_sqrt.c
SRCS += ft_pow.c
SRCS += ft_pow_positive.c
SRCS += ft_uint64_t_len.c
SRCS += ft_int64_t_len.c
SRCS += ft_strcapitalize.c
SRCS += ft_strupcase.c
SRCS += ft_strlowcase.c
SRCS += ft_strisupcase.c
SRCS += ft_strislowcase.c
SRCS += ft_strchr_str.c
SRCS += ft_strisblank.c
SRCS += ft_striszero.c
SRCS += ft_len_printf.c
SRCS += ft_ftoa.c
SRCS += ft_fldtoa.c
SRCS += get_next_line.c
SRCS += get_next_line_ps.c
SRCS += ft_printf.c
SRCS += ft_atol.c

#------------------------------------ STAT ------------------------------------#
SRCS += ft_get_high.c
SRCS += ft_get_low.c
SRCS += ft_get_low_in_range.c
SRCS += ft_get_high_in_range.c
SRCS += ft_high.c
SRCS += ft_low.c
SRCS += ft_mean.c
SRCS += ft_median.c
SRCS += ft_range.c
SRCS += ft_get_median.c
SRCS += ft_get_n_highest.c
SRCS += ft_get_n_smallest.c
SRCS += ft_sort.c

#----------------------------------- VECTOR -----------------------------------#
SRCS += vct_del.c
SRCS += vct_new.c
SRCS += vct_newstr.c
SRCS += vct_addstr.c
SRCS += vct_pop.c
SRCS += vct_dup.c
SRCS += vct_addchar.c
SRCS += vct_increase_scale.c
SRCS += vct_bzero.c
SRCS += vct_len.c
SRCS += vct_cat.c
SRCS += vct_getstr.c
SRCS += vct_join.c
SRCS += vct_joinfree.c
SRCS += vct_addchar_at.c
SRCS += vct_pop_from.c
SRCS += vct_fill_after.c
SRCS += vct_fill_before.c
SRCS += vct_pushstr.c
SRCS += vct_apply.c
SRCS += vct_replace_char_at.c
SRCS += vct_replace_char.c
SRCS += vct_addstr_at.c
SRCS += vct_chr.c
SRCS += vct_chr_str.c
SRCS += vct_getchar_at.c
SRCS += vct_print.c
SRCS += vct_addnb.c

#----------------------------------- BTREE ------------------------------------#
SRCS += heap_build.c
SRCS += heap_order.c
#SRCS += heap_print.c
SRCS += heap_tool.c

#----------------------------------- ERROR ------------------------------------#
SRCS += ft_print_err_null.c
SRCS += ft_print_err_failure.c
SRCS += ft_print_err_false.c
SRCS += ft_print_err_void.c

#--------------------------------- FT_PRINTF ----------------------------------#


PATH_SRCS += ./vector
PATH_SRCS += ./ft_printf
PATH_SRCS += ./btree
PATH_SRCS += ./stats
PATH_SRCS += ./error
PATH_SRCS += ./linked_list
PATH_SRCS += ./number
PATH_SRCS += ./string
PATH_SRCS += ./memory
PATH_SRCS += ./print
PATH_SRCS += .

vpath %.c $(PATH_SRCS)


OBJS += $(patsubst %.c, $(BUILD_DIR)%.o, $(SRCS))

all: $(NAME)

$(NAME): $(BUILD_DIR) $(OBJS)
	echo  "\n$(CYAN)Makefile libft$(END)\n"
	$(AR) $@ $(OBJS)

$(BUILD_DIR):
	mkdir $@

$(OBJS): $(BUILD_DIR)%.o: %.c $(HEAD) Makefile
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	echo "$(CFLAGS) \t\t $(GREEN)$<$(END)"


clean:
	$(RM) -R $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE)

.PHONY: clean fclean re
.SILENT: $(NAME) $(OBJS) $(BUILD_DIR) clean fclean re

# FLAGS
ifeq ($(f), no)
CFLAGS = -g
else ifeq ($(f), f)
CFLAGS = $(DFLAGS)
endif

RED = \033[0;31m
GREEN = \033[0;32m 
YELLOW = \033[0;33m 
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN = \033[0;36m 
END = \033[0m

#Linux
#RED = \e[31m
#GREEN = \e[32m
#YELLOW = \e[33m
#BLUE = \e[34m
#MAGENTA = \e[35m
#CYAN = \e[36m
#END = \e[0m
