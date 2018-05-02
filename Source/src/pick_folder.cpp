/*
 * Fichier d'en tête pick_folder.cpp pour le projet miniDart
 * Auteur : Eric Bachard  / lundi 3 octobre 2016, 14:35:03 (UTC+0200)
 * Ce document est sous Licence GPL v2
 * voir : http://www.gnu.org/licenses/gpl-2.0.html
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "nfd.h"

#if defined( NATIVE_BUILD)
//#include <iostream>
#endif

#ifdef _WIN32
#include "Windows/file_dialog.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#endif

int pick_folder(char * currentPath)
{
    nfdchar_t *outPath = NULL;
    nfdresult_t result = NFD_PickFolder( NULL, &outPath );

    if ( result == NFD_OKAY )
    {
        puts("Success!");
        puts(outPath);
        strcpy(currentPath, outPath);
        free(outPath);
    }
    else if ( result == NFD_CANCEL )
        puts("User pressed cancel.");

    else
        fprintf(stderr, "Error: %s\n", NFD_GetError() );

    return 0;
}
