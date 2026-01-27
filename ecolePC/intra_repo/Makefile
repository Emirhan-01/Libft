# Proje Adı
NAME        = libft.a

# Derleyici ve Bayraklar
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

# Dosya Yönetimi
RM          = rm -f
AR          = ar rcs

# Kaynak Dosyalar (Buraya tüm .c dosyalarını eklemelisin)
SRCS        = 

# Bonus Kaynak Dosyalar
BONUS_SRCS  = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
              ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
              ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Nesne Dosyaları (.o)
OBJS        = $(SRCS:.c=.o)
BONUS_OBJS  = $(BONUS_SRCS:.c=.o)

# Varsayılan Hedef
all: $(NAME)

# Kütüphane Oluşturma
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Bonus Hedefi
bonus: .bonus

.bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
	@touch .bonus

# .c -> .o Derleme Kuralı
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Temizlik Kuralları
clean:
	$(RM) $(OBJS) $(BONUS_OBJS) .bonus

fclean: clean
	$(RM) $(NAME)

re: fclean all

# Phony (Dosya isimleriyle çakışmayı önler)
.PHONY: all clean fclean re bonus
