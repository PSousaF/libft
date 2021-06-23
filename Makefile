NAME	=	libft.a

MYLIB	=	libft.h

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRCS:.c=.o}

OBJS_B	=	${SRCS_BONUS:.c=.o}

LIB		=	ar -rcs

RM		=	rm -f

SRCS	=	${PART1}

PART1 	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strlcpy.c \
			ft_strchr.c ft_strrchr.c ft_strlcat.c ft_memset.c ft_bzero.c \
			ft_atoi.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memccpy.c \
			ft_memmove.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_itoa.c ft_strtrim.c ft_strmapi.c ft_split.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c
  			  
			

all:		${NAME}

${NAME}:	${OBJS} ${MYLIB} 
			@echo "Convertendo itens..."
			${LIB} ${NAME} ${OBJS}
			@echo "Libft compilado com sucesso!"

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			@echo "Deletando Arquivos .o"
			${RM} ${OBJS}
			${RM} ${OBJS_B}
			@echo "Arquivos .o Deletado Com Sucesso!"

fclean:		clean
			@echo "Deletando Restante dos Arquivos"
			${RM} ${NAME}
			@echo "Todos Arquivos Deletado Com Sucesso!"

re:			fclean all
			@echo "Arquivos Recompilado Com Sucesso!"

.PHONY:		all clean fclean re
