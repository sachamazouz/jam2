##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## FINALLY
##

OBJ			=	$(SRC:.c=.o)

SRC_DIR	 	= src_file

ERR_DIR		= $(SRC_DIR)/error_handling

NAME		=	tick_avoider

GRAPHICAL	= -l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window

CPPFLAGS	=	-I./include

LIBNAME		=	libmy.a

DEBUG		=	-g3

CFLAGS		=	-Wall -Wextra

LDFLAGS		=	-L./lib -lmy

SRC	=	$(SRC_DIR)/all_click.c					\
		$(SRC_DIR)/inventory/create_prison.c	\
		$(SRC_DIR)/colision_down.c    			\
		$(SRC_DIR)/colision_up.c 				\
		$(SRC_DIR)/colision_left.c 				\
		$(SRC_DIR)/colision_right.c 			\
		$(SRC_DIR)/create_window.c				\
		$(SRC_DIR)/win_loose/display_l.c		\
		$(SRC_DIR)/win_loose/display_w.c		\
		$(SRC_DIR)/win_loose/display_w1.c		\
		$(SRC_DIR)/win_loose/display_w2.c		\
		$(SRC_DIR)/first_plan.c					\
		$(SRC_DIR)/first_plan1.c				\
		$(SRC_DIR)/first_plan2.c				\
		$(SRC_DIR)/first_plansprite.c			\
		$(SRC_DIR)/main.c						\
		$(SRC_DIR)/displayer/displau_menu.c		\
		$(SRC_DIR)/displayer/display_menubis.c	\
		$(SRC_DIR)/mouv_sprite/mouv_sprite.c	\
		$(SRC_DIR)/mouv_sprite/mouv_sprite1.c	\
		$(SRC_DIR)/mouv_sprite/mouv_sprite2.c	\
		$(SRC_DIR)/switch_window.c				\
		$(SRC_DIR)/check_family.c				\
		$(SRC_DIR)/third_part.c					\
		$(SRC_DIR)/displayer/display_game.c		\
		$(SRC_DIR)/displayer/detect_enemy_map.c	\
		$(SRC_DIR)/displayer/detect_enemy_map2.c\
		$(SRC_DIR)/displayer/enemy.c			\
		$(SRC_DIR)/inventory/inventory.c		\
		$(SRC_DIR)/inventory/create_attack.c	\
		$(SRC_DIR)/inventory/create_key.c		\
		$(SRC_DIR)/inventory/inventory1.c		\
		$(SRC_DIR)/fight/fight.c				\
		$(SRC_DIR)/fight/face_fight.c			\
		$(SRC_DIR)/fight/fight1.c				\
		$(SRC_DIR)/fight/fight2.c				\
		$(SRC_DIR)/fight/create_enemy.c			\
		$(SRC_DIR)/fight/create_background.c	\
		$(SRC_DIR)/fight/create_button.c		\
		$(SRC_DIR)/fight/bouton_click.c			\
		$(SRC_DIR)/fight/create_life.c			\
		$(SRC_DIR)/display_a.c					\

all:		$(NAME)

$(NAME):	$(OBJ)
		@echo -e "\x1b[43m.c->.o successfully done!\e[0m"
		make -C lib/my/
		@echo -e "\x1b[42mLib Compilation Success\e[0m"
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(GRAPHICAL)
		@echo -e "\x1b[41mCompilation Success\e[0m"

debug:		CFLAGS+=$(DEBUG)
debug:		$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) $(OBJ)
		@echo -e "\x1b[44mClean command Success!\e[0m"

fclean:		clean
		make fclean -C lib/my
		$(RM) $(NAME)
		$(RM) lib/$(LIBNAME)
		@echo -e "\x1b[45mFclean rules done!\e[0m"

re:		fclean all

.PHONY:		all clean fclean re debug
