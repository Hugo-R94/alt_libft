NAME = libft.a

CC = cc

SRCDIR = .

BONUSDIR = .

OBJDIR = .

INCLUDES = .

BONUS_CFILES = $(BONUSDIR)/ft_lstnew.c \
			   $(BONUSDIR)/ft_lstadd_front.c \
			   $(BONUSDIR)/ft_lstsize.c \
			   $(BONUSDIR)/ft_lstlast.c \
			   $(BONUSDIR)/ft_lstadd_back.c \
			   $(BONUSDIR)/ft_lstdelone.c \
			   $(BONUSDIR)/ft_lstclear.c \
			   $(BONUSDIR)/ft_lstiter.c \
			   $(BONUSDIR)/ft_lstmap.c

CFILES = $(SRCDIR)/ft_atoi.c \
		 $(SRCDIR)/ft_bzero.c \
		 $(SRCDIR)/ft_calloc.c \
		 $(SRCDIR)/ft_isalnum.c \
		 $(SRCDIR)/ft_isalpha.c \
		 $(SRCDIR)/ft_isascii.c \
		 $(SRCDIR)/ft_isdigit.c \
		 $(SRCDIR)/ft_isprint.c \
		 $(SRCDIR)/ft_itoa.c \
		 $(SRCDIR)/ft_lstnew.c \
		 $(SRCDIR)/ft_memchr.c \
		 $(SRCDIR)/ft_memcmp.c \
		 $(SRCDIR)/ft_memcpy.c \
		 $(SRCDIR)/ft_memmove.c \
		 $(SRCDIR)/ft_memset.c \
		 $(SRCDIR)/ft_putchar_fd.c \
		 $(SRCDIR)/ft_putendl_fd.c \
		 $(SRCDIR)/ft_putnbr_fd.c \
		 $(SRCDIR)/ft_putstr_fd.c \
		 $(SRCDIR)/ft_split.c \
		 $(SRCDIR)/ft_strdup.c \
		 $(SRCDIR)/ft_striteri.c \
		 $(SRCDIR)/ft_strjoin.c \
		 $(SRCDIR)/ft_strlcat.c \
		 $(SRCDIR)/ft_strlcpy.c \
		 $(SRCDIR)/ft_strlen.c \
		 $(SRCDIR)/ft_strmapi.c \
		 $(SRCDIR)/ft_strncmp.c \
		 $(SRCDIR)/ft_strnstr.c \
		 $(SRCDIR)/ft_strchr.c \
		 $(SRCDIR)/ft_strrchr.c \
		 $(SRCDIR)/ft_strtrim.c \
		 $(SRCDIR)/ft_substr.c \
		 $(SRCDIR)/ft_tolower.c \
		 $(SRCDIR)/ft_toupper.c


OFILES = $(CFILES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

OBONUS = $(BONUS_CFILES:$(BONUSDIR)/%.c=$(OBJDIR)/%.o)


all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ -c $<

$(OBJDIR)/%.o: $(BONUSDIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -o $@ -c $<

bonus: $(OFILES) $(OBONUS)
	ar rcs $(NAME) $(OFILES) $(OBONUS)


clean:
	rm -f $(OFILES) $(OBONUS)

fclean: clean
	rm -f $(NAME)


re: fclean all


.PHONY: all clean fclean re bonus
