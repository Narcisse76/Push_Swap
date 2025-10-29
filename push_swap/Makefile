# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trambure <trambure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/24 10:31:57 by trambure          #+#    #+#              #
#    Updated: 2025/05/28 00:55:57 by trambure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l’exécutable
NAME     = push_swap

# Compilateur et flags
CC       = gcc
CFLAGS   = -Wall -Wextra -Werror

# Commande de suppression
RM       = rm -f

# Répertoires
LIBFT_DIR = includes/libft
INCLUDES  = -I includes/libft -I includes/GNL -I utils

# Bibliothèque libft
LIBFT_A  = $(LIBFT_DIR)/libft.a

# Sources : src, operation et GNL
SRCS = \
	src/check.c \
	src/number.c \
	src/parse.c \
	src/push_swap.c \
	src/sort.c \
	src/execute.c \
	src/sort_small.c \
	src/dispatch.c \
	operation/push_node.c \
	operation/reverse_rotate_node.c \
	operation/rotate_node.c \
	operation/swap_node.c \
	includes/GNL/get_next_line.c \
	includes/GNL/get_next_line_utils.c \

# Objets correspondants
OBJS = $(SRCS:.c=.o)

# Règle par défaut
all: $(NAME)

# Construction de l’exécutable
$(NAME): $(LIBFT_A) $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) $(LIBFT_A) -o $(NAME)

# Construction de libft via son propre Makefile
$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

# Compilation générique des .c
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Nettoyage des .o
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

# Nettoyage total (objets + binaires)
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

# Rebuild complet
re: fclean all

.PHONY: all clean fclean re
