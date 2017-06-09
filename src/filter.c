/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmoulin <phmoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:25:48 by phmoulin          #+#    #+#             */
/*   Updated: 2017/06/09 16:44:46 by phmoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rt.h"

void     filter_sepia(t_env *e, int x, int y)
{
  int       c2[3] = {0, 0, 0};
  int       rgb[5];
  double    sepia = 1; // a remplacer par la struct pour opaciter
  //
  printf("wiiii\n");
  while (y <= e->mlx->h)
  {
      lecture_img(e, rgb, x, y);// recuprer les couleur de img
      c2[0] = (0.393 * rgb[0] + 0.769 * rgb[1] + 0.189 * rgb[2]) * sepia + (1 - sepia) * rgb[0];
      c2[1] = (0.349 * rgb[0] + 0.686 * rgb[1] + 0.168 * rgb[2]) * sepia + (1 - sepia) * rgb[1];
      c2[2] = (0.272 * rgb[0] + 0.534 * rgb[1] + 0.131 * rgb[2]) * sepia + (1 - sepia) * rgb[2];
      rgb[0] = (c2[0] > 255) ? 255 : c2[0];
      rgb[1] = (c2[1] > 255) ? 255 : c2[1];
      rgb[2] = (c2[2] > 255) ? 255 : c2[2];
      apply_color_pix(e, rgb, x, y); // print les nouvelle couleur
        x++;
    if (x >= e->mlx->w && ((y++) || 1))
        x = 0;
    }

}

void     filter_red(t_env *e, int x, int y)
{
  int       c2[3] = {0, 0, 0};
  int       rgb[5];
  //

  while (y <= e->mlx->h)
  {
     lecture_img(e, rgb, x, y);// recuprer les couleur de img
    c2[0] = rgb[0];
    c2[1] = 0;
    c2[2] = 0;
    rgb[0] = (c2[0] > 255) ? 255 : c2[0];
    rgb[1] = (c2[1] > 255) ? 255 : c2[1];
    rgb[2] = (c2[2] > 255) ? 255 : c2[2];
    apply_color_pix(e, rgb, x, y); // print les nouvelle couleur
    x++;
    if (x >= e->mlx->w && ((y++) || 1))
      x = 0;
  }

}

void     filter_blue(t_env *e, int x, int y)
{
  int       c2[3] = {0, 0, 0};
  int       rgb[5];

  // if ((rgb = (int *)malloc(sizeof(int) * 5)) == NULL)
  //     ft_error(MALLOC, "choice_filter");
  while (y <= e->mlx->h)
  {
    lecture_img(e, rgb, x, y);// recuprer les couleur de img
    c2[0] = 0;
    c2[1] = 0;
    c2[2] = rgb[2];
    rgb[0] = (c2[0] > 255) ? 255 : c2[0];
    rgb[1] = (c2[1] > 255) ? 255 : c2[1];
    rgb[2] = (c2[2] > 255) ? 255 : c2[2];
     apply_color_pix(e, rgb, x, y); // print les nouvelle couleur
    x++;
    if (x >= e->mlx->w && ((y++) || 1))
      x = 0;
  }
}

void     filter_green(t_env *e, int x, int y)
{
  int       c2[3] = {0, 0, 0};
  int       rgb[5];
  //
  while (y <= e->mlx->h)
  {
     lecture_img(e, rgb, x, y);// recuprer les couleur de img
    c2[0] = 0;
    c2[1] = rgb[1];
    c2[2] = 0;
    rgb[0] = (c2[0] > 255) ? 255 : c2[0];
    rgb[1] = (c2[1] > 255) ? 255 : c2[1];
    rgb[2] = (c2[2] > 255) ? 255 : c2[2];
    apply_color_pix(e, rgb, x, y); // print les nouvelle couleur
    x++;
    if (x >= e->mlx->w && ((y++) || 1))
      x = 0;
  }

}
