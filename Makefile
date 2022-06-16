SRCS	= ft_memset.c ft_memcpy.c ft_bzero.c ft_atoi.c ft_memmove.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_isalpha.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

OBJS	= ${SRCS:.c=.o}

OBJSB	= ${BONUS:.c=.o}

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	ar rcs ${NAME} ${OBJS}

$(BONUS):	${OBJSB}
	ar qs ${NAME} ${OBJSB}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

bonus:	${BONUS}

.PHONY:	all clean fclean re