/*
 * Fichier d'en tête setlabel.cpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#include <setlabel.h>

std::string intToString(int number)
{
  std::ostringstream ss;
  ss << number;
  return ss.str();
}

std::string floatToString(double aFloat)
{
  std::ostringstream ss;
  ss << aFloat;
  return ss.str();
}


void setLabel(cv::Mat& frame, const std::string label, const cv::Point & origin, double scale, int thickness, int baseline)
{
  int fontface   = cv::FONT_HERSHEY_SIMPLEX;

  if (scale == 0)
    scale   = 0.4;
  if (thickness == 0)
    thickness = 1;

//  int  baseline  = 0;
  cv::Size text = cv::getTextSize(label, fontface, scale, thickness, &baseline);
  cv::rectangle(frame,
                origin + cv::Point(0, baseline),
                origin + cv::Point(text.width, -text.height),
                CV_RGB(0,0,0),
                CV_FILLED);

  cv::putText(frame, label, origin, fontface, scale, CV_RGB(255,255,255), thickness, 8);
}
