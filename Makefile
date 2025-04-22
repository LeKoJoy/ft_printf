SRC				=	ft_printf.c ft_proces_pointer.c ft_process_hex.c \
						ft_processes.c
					
NAME = libftprintf.a
CC = cc
FLAG = -Wall -Wextra -Werror 
RM = rm -rf
AC = ar rc

LIBFT     = libft.a

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_HEADER = $(LIBFT_DIR)/libft.h

OBJ = $(SRC:.c=.o)

.c.o:
	@$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C ./libft 
	cp libft/libft.a $(NAME) 
	@$(AC) $(NAME) $(OBJ)
	@echo "${GREEN}Compilation Successfull.${RESET}"

libft_bonus: 
	@$(MAKE) -C ./libft bonus
	cp libft/libft.a $(NAME) 
	@$(AC) $(NAME) $(OBJ)	
clean:
	@$(MAKE) clean -C ./libft
	@$(RM) $(OBJ)
	@echo "${GREEN}Object files successfully removed.${RESET}"
fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(RM) $(NAME)
	@echo "${GREEN}Executable files successfully removed.${RESET}"
re: fclean all