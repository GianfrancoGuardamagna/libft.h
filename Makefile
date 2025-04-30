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

#Archivo de encabezado
INCLUDE = libft.h

#Crear bibliotecas y eliminar archivos
AR = ar rcs
RM = rm -f

#Reglas por defecto que lo compila todo
all: $(NAME)

#Regla para crear la biblioteca
$(NAME): $(OBJ)
	$(AR) $@ $^

#Pasar archivos .c a .o
%.o: %.c $(INCLUDE)
        $(CC) $(CFLAGS) -c -o $@ $<

#Regla para eliminar todos los archivos objeto creados
clean:
        $(RM) $(OBJ)

#Regla para eliminar todos los archivos .o y .a
fclean: clean
        $(RM) $(NAME)

re: fclean all

#Indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re