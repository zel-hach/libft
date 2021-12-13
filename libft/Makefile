

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_memset.c		\
		ft_strlen.c		\
		ft_tolower.c	\
		ft_bzero.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_memchr.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
		ft_strchr.c		\
		ft_strlcpy.c	\
		ft_strncmp.c	\
		ft_strrchr.c	\
		ft_atoi.c		\
		ft_strnstr.c	\
		ft_toupper.c	\
		ft_strlcat.c	\
		ft_memcmp.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_itoa.c       \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
        ft_putnbr_fd.c  \
        ft_putstr_fd.c  \
		ft_split.c      \
		ft_striteri.c   \
		ft_strjoin.c    \
		ft_strmapi.c    \
		ft_strtrim.c    \
		ft_substr.c    
bonus =	ft_lstsize.c  \
		ft_lstnew.c   \
		ft_lstlast.c \
		ft_lstdelone.c\
		ft_lstclear.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstiter.c 
OBJECTS = $(SRC:.c=.o)
OBJECTS_bonus = $(bonus:.c=.o)

INCLUDES = libft.h \

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDES)
	ar rcs $(NAME) $(OBJECTS)

bonus:$(OBJECTS_bonus) $(INCLUDES)
		ar rcs $(NAME) $(OBJECTS_bonus)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJECTS) $(OBJECTS_bonus)

fclean:clean
	rm -rf $(NAME)

re: fclean all

