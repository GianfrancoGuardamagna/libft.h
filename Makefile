#Nombre del archivo de la biblioteca
NAME = libft.a

#Compilador y flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Archivos fuente y archivos objeto
SOURCE = ./ft_atoi.c \ 
./ft_isalpha.c \ 
./ft_memchr.c \ 
./ft_memset.c \
./ft_strlcpy.c \
./ft_strrchr.c \
./ft_bzero.c \
./ft_isdigit.c \
./ft_memcmp.c \
./ft_strchr.c \
./ft_strlen.c \
./ft_tolower.c \
./ft_calloc.c \
./ft_isprint.c \
./ ft_memcpy.c \
./ ft_strdup.c \
./ ft_strncmp.c \
./ft_toupper.c \
./ft_isalnum.c \
./ft_memchar.c \
./ft_memmove.c \
./ ft_strlcat.c \
./ ft_strnstr.c

OBJ=$(SOURCE:.c=.o)

all: $(SOURCE) $(EXE)

$(EXE): $(OBJ)
        $(CC) $(OBJ) -o $@

%.o: %.c
        $(CC) $(CFLAGS) $< -o $@

clean:
        rm -f $(OFILES)

fclean:  
        clean rm -f $(NAME)

re:
        fclean $(NAME)
