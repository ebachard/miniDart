/*
 * Fichier d'en tête colors.cpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#include <opencv2/opencv.hpp>
#include "colors.hpp"

using namespace cv;

Scalar selectColor(short int aValue)
{
  Scalar toReturn = ANNOTATIONS_COLOR_RED;
  switch(aValue)
  {
    case COLOR_BLUE  : toReturn = ANNOTATIONS_COLOR_BLUE; break;
    case COLOR_RED   : toReturn = ANNOTATIONS_COLOR_RED; break;
    case COLOR_YELLOW: toReturn = ANNOTATIONS_COLOR_YELLOW; break;
    case COLOR_GREEN : toReturn = ANNOTATIONS_COLOR_GREEN; break;
    case COLOR_CYAN  : toReturn = ANNOTATIONS_COLOR_CYAN; break;
    case COLOR_ORANGE: toReturn = ANNOTATIONS_COLOR_ORANGE; break;
    case COLOR_BLACK : toReturn = ANNOTATIONS_COLOR_BLACK; break;
    case COLOR_WHITE : toReturn = ANNOTATIONS_COLOR_WHITE; break;
    default: break;
  }
  return toReturn;
}
