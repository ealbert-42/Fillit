/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 15:20:24 by ealbert           #+#    #+#             */
/*   Updated: 2015/12/28 20:51:52 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"


void		ft_error(void)
{
	ft_putendl_fd("ERROR", 2);
	exit(EXIT_FAILURE);
}

/* Apres la resolution, on affiche la map */

void	print_map(char /* * ou ** ?*/str)
{
/* Quand le probleme de la map sera regle, on pourra attaquer cette partie
 */
}

/* On verra si on en a besoin, mais je pense qu'on peut faire sans */

int			map_size()
{
/* Je sais pas encore si on va l'utiliser, ou si on va faire un truc
 * qui peut etre soi degueu soit genial.
 * Soit, on calcule la taille en fonction du nombre de pieces, et si ca rentre
 * pas, on augmente de 1 jusqu'a ce que ca rentre
 * Soit, on met la taille de la map a 12, et la tout rentre (ca a ete verifie)
 * Et du coup faudra se demerder au moment de l'affichage.
 * On choisira une fois qu'on sera tous les deux dessus o/
 */
}

/* On met les tetriminos en haut a gauche dans la map */

t_triminos	*up_and_left(t_triminos *t1)
{
/* En vrai. on deplace chaque # de un en haut si possible
 * puis de 1 a gauche si possible. Je m'explique :
 * .... | Ce carre est deplacable de un vers le haut et de deux sur la gauche.
 * ..## | Elle va etre a moitie relou
 * ..## | On va l'utiliser pour etre sur que les tetris
 * .... | commencent bien au debut de la map
 *
 */
}

/* Creation d'un maillon pour enregistrer le tetriminos */

t_triminos	*add_tetri(t_triminos *t1, char *str, int letter)
{
/* Assez facile, mais un peu chiant quand meme
 * malloc le pointeur sur structure
 * piece = str
 * letter = A pour le premier, B pour le deuxieme etc...
 * left = NULL si c'est le premier, le precedent tetriminos sinon
 * right = NULL, quoiqu'il arrive
 */
}

/* checker le fichier, savoir s'il est valide */

int		valid_string(char *str)
{
/* Check si str fais bien le schema suivant :
 * '.#..\n'
 * '.#..\n'
 * '.##.\n'
 * '....\n'
 * '\n' Ou un truc du genre.
 */
}

/* Fonction pour lire le fichier d'entree */

t_triminos	*read_file(int fd)
{
	char	buf[BUFFER_SIZE];
	int		ret;
	int		nbtetri;
	t_triminos *t1;

	nbtetri = 0;
	t1 = NULL;
	while (nbtetri < 26 || (ret = read(fd, &buf, BUFFER_SIZE)) < 21)
	{
		buf[ret] = '\0';
		if (valid_string(buf) == 1)
			piece = add_tetri(t1, buf, (LETTER + nbtetri));
		nbtetri++;
	}
	ret = read(fd, &buf, BUFFER_SIZE);
	if (ret > 0 || ret < 0)
		ft_error();
	return (t1);
}

int			main(int argc, char **argv)
{
	int		fd;

	if ((fd = open(argv[1], O_RDONLY)) < 0 || argc != 2)
			ft_error();
	return (0);
}
