# ********************************************
#   Libft Makefile
# ********************************************

NAME = libft.a        # Oluşturulacak kütüphane
CC = gcc              # Derleyici
CFLAGS = -Wall -Wextra -Werror   # Derleme ayarları

# Kaynak dosyalar (örnek)
SRC = ft_strlen.c ft_strcpy.c ft_memset.c ft_bzero.c

# Object dosyaları
OBJ = $(SRC:.c=.o)

# **************************************
#   Kurallar (Targets)
# **************************************

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	@echo "✅ Libft.a oluşturuldu!"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "🧹 Object dosyaları temizlendi."

fclean: clean
	rm -f $(NAME)
	@echo "🧹 libft.a dosyası silindi."

re: fclean all

