*This project has been created as part of the 42 curriculum by embostan*

# Libft

## Açıklama

Libft, 42 Okulu’nun temel projelerinden biridir. Projenin amacı, C standart kütüphanesindeki bazı fonksiyonları, ek yardımcı fonksiyonları ve bağlı liste (linked list) işlemlerini yeniden yazarak tekrar kullanılabilir bir statik kütüphane oluşturmaktır. Bu kütüphane, ilerleyen projelerde bağımlılık olarak kullanılacaktır.

* **Öğrenci:** embostan
* **Dil:** C
* **Norm:** Norminette uyumlu
* **Bonus:** Dahil değil (tüm fonksiyonlar zorunludur)

---

## Derleme ve Kullanım

```bash
make
```

Bu komut `libft.a` dosyasını üretir.

Projede kullanmak için:

```c
#include "libft.h"
```

```bash
cc main.c libft.a
```

---

## Gerçekleştirilen Fonksiyonlar

`libft.h` dosyasında tanımlı olan tüm fonksiyonlar eksiksiz şekilde uygulanmıştır.

### Libc Fonksiyonları

ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_strlen,
ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_strlcpy, ft_strlcat,
ft_toupper, ft_tolower, ft_strchr, ft_strrchr, ft_strncmp, ft_memchr,
ft_memcmp, ft_strnstr, ft_atoi, ft_calloc, ft_strdup

### Ek Fonksiyonlar

ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi,
ft_striteri, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

### Bağlı Liste Fonksiyonları

ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back,
ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

---

## Kurallar ve Kısıtlar

* Yasaklı fonksiyon kullanılmamıştır
* Bellek yönetimi güvenlidir (malloc/free kontrolü yapılmıştır)
* Norminette kurallarına tamamen uyumludur

---

## Yapay Zekâ Kullanımı

Bu projede yapay zekâ araçları (**ChatGPT** ve **Gemini**) yalnızca destekleyici amaçlarla kullanılmıştır. Yapay zekâdan;

* Konu hakkında takılan ince detayları sormak,
* Yazılan kodların mantıksal doğruluğunu kontrol ettirmek,
* Olası hata senaryolarını ve edge-case’leri değerlendirmek,
* C diline ve 42 normlarına uygunluk konusunda geri bildirim almak

gibi **rehberlik ve doğrulama** amaçlı faydalanılmıştır.

Kodun tamamı tarafımdan yazılmış olup, yapay zekâ araçları doğrudan çözüm üretme veya kopyalama amacıyla kullanılmamıştır. Kullanım şekli, 42 Okulu’nun akademik dürüstlük ve "cheat" kurallarıyla uyumludur.

---

## Kaynaklar

* ChatGPT
* Gemini
* W3Schools
* Python Tutor

---

## Not

Bu kütüphane yalnızca eğitim amaçlıdır ve ilerleyen 42 projelerinde (`get_next_line`, `ft_printf` vb.) temel bağımlılık olarak kullanılacaktır.

