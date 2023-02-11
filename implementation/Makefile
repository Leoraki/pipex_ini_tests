# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmangall <lmangall@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 19:33:40 by lmangall          #+#    #+#              #
#    Updated: 2023/02/08 21:53:15 by lmangall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRCS =	pipex.c		\
		exit.c		\

CC = cc

CFLAGS = -Wall -Wextra -Werror

${NAME}: $(SRCS)
	cc $(SRCS) -o $(NAME)
	@echo "Pipex Done !"

all: $(NAME)

clean:
	@rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	@rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re




# ## Methode barbare (type exam - les makefile c'est pas mon truc)

# all	:
# 		cc -o machin machin.c

# ## Methode propre (type je passe une soutenance avec un monsieur en rouge)

# NAME	=	executable

# SRCS	=	main.c			\
# 		autre_fichier.c		\
# 		et_voila.c				## Le dernier n'a pas de '\'

# OBJS	=	$(SRCS:.c=.o)				## Compile les fichiers .c en .o. Une sorte de precompiation.

# CC	=	cc

# CFLAGS	+=	-W -Wall -ansi -pedantic		## Le '+=' permet de ne pas ecraser les flags par defaut.
# 							 # Ici je n'ai mis que quelques flags simples, j'en ajouterai dans la suite du cours.

# LIB	=	-L. -lmalib				## Dans l'exempe, la lib doit se trouver dans le dossier courant.

# RM	=	rm -f					## Le -f evite les messages d'erreurs si on tente d'effacer un fichier qui n'existe pas.
# 							 # (En fait, il force la suppression quoi qu'il arrive.)

# CLEAN	=	clean					## Pas obigatoire mais pratique, permet d'enever les fichiers ~

# all	:
# 		@make $(NAME)				## Contrairement aux dependances, cette methode permet d'afficher d'eventuels messages d'erreur.
# 							 # Le @ permet de ne pas afficher la commande.
# $(NAME)	:	$(OBJS)
# 		$(CC) -o $(NAME) $(OBJS) $(LIB)		## NB : Pas besoin de mettre $(CFLAGS), ceux-ci se mettent tout seuls.

# clean	:
# 		$(RM) $(OBJS)				## Cette regle supprime les fichiers .o
# 		@$(CLEAN)				 # Et celle-ci les fichiers ~

# fclean	:	clean					## Cette regle appelle la precedente puis supprime l'executable.
# 		$(RM) $(NAME)				

# re	:	fclean all				## Cette regle supprime .o et executable puis recompile le tout.
# 							 # Il faut toujours l'utiliser apres modification d'un .h !

# ##		Les CFLAGS !
# ##
# ##	-W :		active les Warnings
# ##	-Wall :		tous les types de Warnings
# ##	-ansi :		norme du C (d'ou l'interdiction par exemple du // pour les commentaires)
# ##	-pedantic :	flags d'optimisation propres a gcc (exemple : variables non declarees, utilisation de variable sans initialisation)
# ##	-Werror :	transforme les Warnings en erreur (ca compile pas)
# ##	-Wstrict :	level max du warning ! (exemple : si une fonction n'a pas de parametre, mettre void)
# ##	-ggdb :		Affiche plus de debug quand on utilise gdb. A enlever avant de passer en soutenance !
# ##
# ##	Eviter de les utiliser a tout bout de champs !
# ##		Ne s'utilisent qu'avec un programme stable a 200%. Si tu n'es pas le dieu du code, evite.
# ##	-O2 :		Optimise les performances du programme lors de la compilation.
# ##	-O3 :		Optimise lors de la compilation en privilegiant le poids de l'executable.
