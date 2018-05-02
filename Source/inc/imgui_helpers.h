/*
 * Fichier d'en tête imgui_helpers.h pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __IMGUI_HELPERS_H
#define __IMGUI_HELPERS_H

#include "imgui.h"

void reorder_points( ImVec2 *, ImVec2 *);

double sqr(double);

double length(ImVec2 * p1, ImVec2 * p2);

#endif /* __IMGUI_HELPERS_H */
