CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
			 ft_printf_utils.c \
			 ft_printint.c \
			 ft_printstr.c

OBJS = $(SRCS:.c=.o)
OBJS_DIR = .obj/
OBJS_PREF = $(addprefix $(OBJS_DIR), $(OBJS))

NAME = libftprintf.a

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(OBJS_DIR)
	@cc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS_PREF) signature
	@echo "Archive Compiled"
	@ar rcs $(NAME) $(OBJS_PREF)

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "Removing objects.."

fclean: clean signature
	@rm -f $(NAME)
	@echo "Cleaning.."

test: all $(TEST)
	@cc $(FLAGS) libft.a -o $(TEST:.c=)
	@./$(TEST:.c=)
	@rm -rf ./$(TEST:.c=)

re: fclean all signature

signature:
	@echo ""
	@echo ""
	@echo ""
	@echo ""
	@echo ""
	@echo "        ,====,,'''',,,             _____________________________________"
	@echo " _______||__||_______ ''',       /'                                    |"
	@echo "|    | |      | |    |    ;    /'  Name: ____Kurygan (mkettab)________ |"
	@echo "|   CMIYGL    | |    |   ;   / o   Address: __mkettab@student.42.fr___ |"
	@echo "|    | |      | |    |    '''\     School: ______42_Mulhouse__________ |"
	@echo "|    | |      IGOR   |        \`\          __CALL_ME_IF_YOU_GET_LOST___ |"
	@echo "|  OFWGKTA    | |    |          \`\.____________________________________|"
	@echo "|____|_|______|_|____|"
	@echo ""
	@echo ""
	@echo ""
	@echo ""
	@echo ""