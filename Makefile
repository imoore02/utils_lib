NAME	= libft.a  # Archive file (static library). 
# A static library contains object files. 
# Object files are compiled counterparts of their sources files which can then be linked to form an executable program.

SRCS	= 	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_strsub.c \
			ft_countwords.c \
			get_next_line.c \
			ft_putendl.c \
			ft_memdel.c \
			ft_lstnew.c \
			ft_lstadd.c \
			ft_lstrev.c \
			ft_strsplit.c \
			ft_splitdel.c \
			ft_lstcount.c \
			ft_memalloc.c \
			ft_ilerp.c \
			ft_abs.c \
			ft_lerpi.c \
			ft_strdel.c \
			ft_strmerge.c \
			ft_strnew.c \

OBJS	= $(SRCS:%.c=%.o)

FLAGS	= -Wall -Wextra -Werror

# Define ANSI escape codes for colors
BOLDRED = \033[1;31m
GREEN   = \033[0;32m
BOLDGREEN = \033[1;32m
BOLDYELLOW  = \033[1;33m
NC      = \033[0m

all: $(NAME)

# Main target: build the library
# Main target: build the library
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(BOLDGREEN)Library $(NAME)created successfully!$(NC)"

# Compile each source file
%.o: %.c
	@gcc $(FLAGS) -c $< -o $@
	@echo "$(GREEN)Compiled:$(NC) $<"

clean:
	@rm -f $(OBJS)
	@echo "$(BOLDYELLOW)Object files removed.$(NC)"

fclean: clean
	@rm -f $(OBJS) $(NAME)
	@echo "$(BOLDRED)$(NAME) removed.$(NC)"

re: fclean all

.PHONY: all, clean, fclean, re
