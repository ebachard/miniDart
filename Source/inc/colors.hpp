/*
 * Fichier d'en tête text_colors.h pour le projet miniDart
 * Auteur : Eric Bachard  / mercredi 21 septembre 2016, 00:44:59 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */


#ifndef __TEXT_COLORS__H__
#define __TEXT_COLORS__H__

#include <opencv2/opencv.hpp>

#define  ANNOTATIONS_COLOR_BLACK   cv::Scalar(  0,  0,  0)
#define  ANNOTATIONS_COLOR_RED     cv::Scalar(  0,  0,255)
#define  ANNOTATIONS_COLOR_GREEN   cv::Scalar(  0,255,  0)
#define  ANNOTATIONS_COLOR_YELLOW  cv::Scalar(  0,255,255)
#define  ANNOTATIONS_COLOR_ORANGE  cv::Scalar(  0,127,255)
#define  ANNOTATIONS_COLOR_BLUE    cv::Scalar(255,  0,  0)
#define  ANNOTATIONS_COLOR_CYAN    cv::Scalar(255,255,  0)
#define  ANNOTATIONS_COLOR_WHITE   cv::Scalar(255,255,255)

typedef enum Color
{
  COLOR_BLUE   = 1,
  COLOR_RED    = 2,
  COLOR_YELLOW = 3,
  COLOR_GREEN   = 4,
  COLOR_CYAN   = 5,
  COLOR_ORANGE = 6,
  COLOR_BLACK  = 7,
  COLOR_WHITE  = 8
} aCOLOR;

cv::Scalar selectColor(short int);

#endif /* __TEXT_COLORS__H__ */
