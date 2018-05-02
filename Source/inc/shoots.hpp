/*
 * Fichier d'en tête shoots.hpp pour le projet miniDart
 * Auteur : Eric Bachard  / mardi 20 septembre 2016, 22:53:17 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#ifndef __SHOOTS__H__
#define __SHOOTS__H__

#include <imgui.h> // ImVec2, ImU32

namespace md
{
    enum ShootType
    {
        BUT        = 0,
        ARRET_GB   = 1,
        POTEAU     = 2,
        HORS_CADRE = 3,
        _7M        = 4
    };

    enum impactArea
    {
        TOP_LEFT,
        TOP_CENTER,
        TOP_RIGHT,
        MIDDLE_LEFT,
        MIDDLE_CENTER,
        MIDDLE_RIGHT,
        BOTTOM_LEFT,
        BOTTOM_CENTER,
        BOTTOM_RIGHT
    };

    enum shootersPost
    {
        ARRIERE_DROIT,
        ARRIERE_GAUCHE,
        AILIER_DROIT,
        AILIER_GAUCHE,
        PIVOT,
        DEMI_CENTRE,
        GARDIEN
    };

    enum shootOrigin
    {
        AILE_GAUCHE,
        AILE_DROITE,
        TIR_7M,
        TIR_9M,
        SECTEUR_CENTRAL_6M,
        SECTEUR_CENTRAL_9M,
        SECTEUR_CENTRAL_11M
    };

    typedef struct Shoot
    {
        ImU32  color;
        ImVec2 startPoint;
        ImVec2 endPoint;
        ImVec2 controlPoint1; // controlPoints can be NULL e.g. when not using Bezier curves
        ImVec2 controlPoint2;
        int getImpactArea(ImVec2);
        float  arrowLength;
        float  arrowWidth;
        float  distance;
        char * shooterNumber;
        int    shootersPost;
        int    aType;
        bool   isPenalty;
    } SHOOT;

    class shoots_manager
    {
        public:
            // Ctor
            shoots_manager();
            // Dtor
            ~shoots_manager();
            int   Init();
            void  addAShoot(md::SHOOT);
            void  removeAShoot();
            void  Clear();

        private:
            int nombre_de_tirs;
            int nombre_de_buts_pris;
            int nombre_de_buts_pris_sur_7m;
            int nombre_arrets_GB;
            int nombre_arrets_GB_7m;
            int nombre_de_poteaux;
            int nombre_de_tirs_hors_cadre;
            int penalties;
            std::vector< md::SHOOT> lesTirs;
    };
} // namespace md

#endif /* __SHOOTS__H__  */