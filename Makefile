##
## EPITECH PROJECT, 2022
## B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
## File description:
## Makefile
##

SRC		=		$(wildcard *.c)

OBJ		=		$(SRC:.c=.o)

CFLAGS	=		-W -Wall -Werror -Wextra

BIN		=		ai

LIB 	=		lib/libmy.a

all: $(BIN)

$(BIN): $(OBJ) $(LIB)
	@$(CC) $(OBJ) -o $(BIN) -L./lib -lmy
	@echo "MAKE Done."

$(LIB):
	@make -C ./lib/my

clean:
	@make clean -C lib/my
	@$(RM) $(OBJ)
	@echo "CLEAN Done."

fclean: clean
	@make fclean -C lib/my
	@$(RM) $(BIN)
	@echo "FCLEAN Done."

re: fclean all
