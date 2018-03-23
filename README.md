**VERSION EN FRANCAIS** (english version follows)

# miniDart (version actuelle : 0.7.0)
Logiciel d'analyse vidéo pour coachs de sports collectifs (handball, mais pas seulement)

Ceci est une version de démonstration du logiciel **miniDart**. Elle n'est pas complète, et comporte probablement quelques bugs. Une partie des fonctionnalités est encore manquante, et devrait être implémentée d'ici le printemps 2018.

**IMPORTANT : Cadre de ce projet**

**Un projet de développement handball, est en cours. Le logiciel miniDart sera une des ressources utilisées pour son financement. Le but est de financer un tournoi international de handball pour une équipe féminine jeunes (-13)**

**Ainsi, le logiciel miniDart, lorsqu'il sera complet, sera dans un premier temps vendu (dans les ~50 euros / club). Quand suffisamment d'argent aura été récupéré, les sources du logiciel seront mises sous licence GPL.**

Deux versions sont disponibles au téléchargement. **L'une pour Windows 7 (64 bits)** ou plus récent, l'autre pour **Linux Intel (64 bits)**. Pour la version Linux, des instructions sont données dans le répertoire contenant les archives.

La version en téléchargement a besoin de Windows 7 ou plus + pour fonctionner, et vous est fournie avec un installeur. La désinstallation a aussi été testée, et supprime toute trace du logiciel. **Si vous l'installez**, notez que vous utilisez ce logiciel à vos risques et périls, et n'oubliez pas qu'il est impératif de faire des sauvegardes de vos document AVANT de l'utiliser.


**Pour le téléchargement, cliquer ici : https://github.com/ebachard/miniDart/tree/master/testing_version**

Pré-requis

Si la lumière ambiante est suffisante, on peut visualiser et enregistrer les images issues d'une webcam (préférer les références conseillées + bas) au rythme de 30 images par seconde en 1270 x 720 (aka 720p). L'enregistrement se fait pour l'instant au format .avi avec l'encodage en divx. Le son n'est pour l'instant pas géré. La version Linux fonctionne de façon similaire, mais en 24 images par seconde.

Matériel
Processeurs / RAM conseillés:
* i5 + 4 Go minimum
* i7 + 8 Go confortable :+1: 

L'installation demande ~ 35 Mo de place sur le disque + de la place pour les fichiers vidéos créés.


Webcam vivement conseillées et longuement testées :
- Logitech C920 :+1: (30 images par seconde, mais demande une bonne lumière)
- Logitech C922 :+1: (demande une bonne lumière)
- Microsoft Lifecam C3000 : demande quelquefois de relancer une fois miniDart, (demande une bonne lumière)

Système d'exploitation : testé sur Windows 7 et Win 10  64 bits (une version de test en 32 bits est disponible, mais sur demande uniquement).

**Ce qui est actuellement fonctionnel** :

- [x] **Zoom** ( de x1.0 à x3.0 et jusqu'à x4.0 pour la version Linux) d'une partie de l'image // fonctionne parfaitement
- [x] affichage retardé (réglable jusqu'à 40s, mais pourra être augmenté en cas de besoin spécifique (à la demande). Testé OK jusqu'à 100s de retard, mais il faut beaucoup de RAM dans ce cas)
- [x] permet le séquençage vidéo (le son n'est pas géré pour l'instant)
- [x] enregistrement avec ou sans retard des images issues d'une ou plusieurs webcams (une seule peut être enregistrée à la fois)
- [x] chronomètre : on peut ajouter le chronomètre, et incruster le temps dans les vidéos enregistrées
- [x] affichage du temps d'activité (cumul si chronomètre activé) et/ou le temps total (depuis le premier appui sur start)
- [x] changement de webcam en live (il est toutefois conseillé de démarrer miniDart AVEC la webcam branchée)
- [x] thème modifiable (onglet préférences)
- [x] toute l'interface utilisateur est modifiable en cours de fonctionnement, mais n'est pas mémorisée pour le prochain démarrage)
- [x] le mode statistiques est en cours d'implémentation, et toute suggestion d'amélioration est la bienvenue
- [x] ouvrir un fichier de type vidéo (sera utilisé pour le mode image par image et l'analyse+séquençage avec ajout de tags)
- [x] mode image par image (déjà disponible ici : https://github.com/ebachard/cv_slideshow fonctionne en mode "drag and drop") ;
- [x] selon l'installation, il est possible de régler directement les paramètres de la webcam, comme la luminance, etc  (onglet "paramètres")


**Atelier analyse** :
- [x] ouverture d'un répertoire contenant une vidéo
- [x] choix du répertoire d'enregistrement par défaut des vidéos (à tester de façon plus approfondie)
- [x] analyse image par image : on ouver une vidéo de courte durée (30 s max conseillé) et on peut piloter le défilement
- [x] modification de la taille de l'image en mode slideshow

À venir : annotations + enregistrement de l'image sous forme d'une vidéo de durée donnée.

**Atelier suivi GB** :
- [x] saisie de tous les types de tirs (y compris 7m)
- [x] affichage des statistiques ( % d'arrêt, % de réussite, secteurs favorables, défavorables, suivi des tirs par joueur)
- [x] couleur du tir en fonction du résultat (but, arrêt GB, poteau, tir hors cadre)
- [x] tracé des impacts de tirs par glisser-déposer à la souris
- [x] possibilité d'ajouter une flèche, et de régler les dimensions
- [ ] ajout du numéro du tireur (bug connu, ne fonctionne pas encore correctement)
- [x] saisie nom de la GB / du GB suivi
- [x] saisie niveau du championnat / mode entraînement ou match / en mode match, pour la N2F, choix du club
- [x] saisie de la mi-temps en cours
- [x] mode suivi statistique type feuille de match (GB ou joueurs d'une équipe) ;
- [x] choix du type de tir (pour un 7m, il faut activer le bouton "7m" AVANT de tracer le tir, sinon le tir sera pris pour un tir normal)
- [x] icônes pour le chronomètre, les sources (webcam 1 ou 2)

**En cours de développement** (mais déjà partiellement fonctionnel) :

Atelier retard :

- [ ] ajout d'une source vidéo de type fichier vidéo
- [ ] ajout d'une source vidéo de type webcam IP
- [ ] tracking en temps réel
- [ ] repères visuels en temps réel

Atelier GB :
- [ ] annotations
- [ ] saisie des conditions du tir

À venir :
- [ ] mode ralenti (slow-motion) // fonctionne déjà, mais demande une conversion d'OpenCV+highgui vers OpenGL

Informations techniques:

Ce logiciel est écrit sous Linux, et cross-compilé pour fonctionner sous Windows 64 bits. Les APIs utilisées sont:
* **SDL2** ( http://libsdl.org/) pour le fenêtrage et la remarquable portabilité Linux -> Windows ;
* **OpenGL** (https://www.khronos.org/opengl/) pour le rendu ;
* **Dear ImGui** (https://github.com/ocornut/imgui) pour l'interface utilisateur et les performances graphiques (merci à **Omar Cornut** pour cette UI géniale) ;
* **OpenCV 3.4.0** (https://opencv.org/) : gestion des webcams, traitement des frames, annotations (chronomètre, enregistrement) ;
* **DirectShow** et **DirectX** ( sous Windows) , v4l2 + gstreamer (sous Linux) : acquisition vidéo ;
* **FFMPEG (version 3.4.0 sous Windows, 3.4.1 devel sous Linux)** (http://ffmpeg.org/) ouverture, analyse, export de fichiers vidéos (divx, avi etc) ;
* **mingw-w64** (https://mingw-w64.org/doku.php) cross-compilation de la version Windows ;
* **InnoSetup** (http://www.jrsoftware.org/) pour le packaging Windows ;
* **wine64** (https://www.winehq.org/) pour les tests de la version Windows sous Linux;
* **Native File Dialog** (https://github.com/mlabbe/nativefiledialog), ouverture d'un fichier, sauvegarde, écrit par **Michael Labbe**.
* **Font AweSome** (https://github.com/juliettef/IconFontCppHeaders ) pour les fontes-icones créées par **Juliette Foucaut**.
* (prochainement) **TinyXML2** (https://github.com/leethomason/tinyxml2) pour les tags xml lors de l'analyse et le classement d'une vidéo.
* (en test) **SDL_kitchensink** (https://github.com/katajakasa/SDL_kitchensink) pour le son dans les vidéos (lecture ET enregistrement)

**Auteur du logiciel miniDart : Eric Bachard © 2016-2018**


**ENGLISH VERSION**

#miniDart (current version: 0.7.0)
Video analysis software for team sports coaches (handball, but not only)

This is a demo version of the **miniDart** software. It is not complete, and probably has some bugs. Some of the features are still missing, and should be implemented by spring 2018.

**IMPORTANT: Framework for this project**

**A handball development project is underway. The miniDart software will be one of the resources used for its financing. The goal is to fund an international handball tournament for a young women's team (-13)**

**Thus, the software miniDart, when complete, will be sold first. When enough money has been recovered, the sources of the software will be licensed under the GPL.**

Two versions are available for download. One for **Windows 7 (64 bits) or later**, the other for **Linux Intel (64 bits)** . For the Linux version, instructions are given in the directory containing the archives.

The download version needs Windows 7 or more + to work, and comes with an installer. The uninstallation has also been tested, and removes all traces of the software. If you install it , note that you use this software at your own risk, and remember that it is imperative to make backups of your documents BEFORE using it.

**For download, click here: https://github.com/ebachard/miniDart/tree/master/testing_version**

Prerequisites

If the ambient light is sufficient, we can view and record images from a webcam (prefer the recommended models below) at the rate of 30 frames per second in 1270 x 720 (aka 720p). The recording is currently in .avi format with the encoding divx. The sound is not currently managed. The Linux version works similarly, but in 24 frames per second.

Hardware Processors / RAM advised:

* i5 + 4 GB minimum
* i7 + 8GB comfortable :+1:

The installation requires ~ 35 MB of disk space + space for the created video files.

Webcam highly recommended and extensively tested:

- Logitech C920 :+1: (30 frames per second, but requires good light)
- Logitech C922 :+1: (ask for a good light)
- Microsoft Lifecam C3000: sometimes asks to restart once miniDart, (asks for a good light) 

Operating system: tested on Windows 7 and Win 10 64-bit (a 32 bits version forwin7+ is available, but on demand only).

What is currently functional :

- [x]    Zoom (from x1.0 to x3.0 and up to x4.0 for Linux version) of part of the image // works perfectly
- [x]    delayed display (adjustable up to 40s, but can be increased, tested OK up to 100s delay, but you need a lot of RAM in this case)
- [x]    allows video sequencing (the sound is not managed at this time)
- [x]    recording with or without delay images from one or more webcams (only one can be recorded at a time)
- [x]    stopwatch: you can add the stopwatch, and embed the time in recorded videos
- [x]    display of the activity time (cumulative if stopwatch activated) and / or the total time (since the first press start)
- [x]    live webcam change (however it is advisable to start miniDart WITH the webcam connected)
- [x]    editable theme (preferences tab)
- [x]    the entire user interface is editable during operation, but is not memorized for the next start)
- [x]    the statistics mode is being implemented, and any suggestion of improvement is welcome
- [x]    open a video type file (will be used for image-per-image mode and analysis + sequencing with tagging)
- [x]    image by image mode (already available here: https://github.com/ebachard/cv_slideshow works in "drag and drop" mode); 

Workshop analysis :

- [x]    open a directory containing a video
- [x]    choice of default video recording directory (to be tested further)
- [x]    image-by-image analysis: we open a video of short duration (30s maximum recommended) and we can control the scrolling 

Upcoming: annotations + recording of the image as a video of a given duration.

GK follow-up workshop :

- [x]    capture of all types of shots (including 7m)
- [x]    display of statistics (% off,% success, favorable, unfavorable sectors, tracking shots per player)
- [x]    shot color according to the result (goal, stop GB, post, shot outside frame)
- [x]    dragging shots to the mouse
- [x]    ability to add an arrow, and adjust the dimensions
- [ ]    adding the shooter's number (known bug, does not work properly yet)
- [x]    enter name of the followed GK
- [x]    entry level championship / training mode or match / match mode, for the N2F, club choice
- [x]    current half-time
- [x]    statistical follow-up mode type sheet of match (GB or players of a team);
- [x]    choice of the type of shot (for a 7m, you have to activate the "7m" button BEFORE you draw the shot, otherwise the shot will be taken for a normal shot)
- [x]    icons for stopwatch, sources (webcam 1 or 2) 

Under development (but already partially functional):

Workshop delay:

- [ ]    use a video file as video source
- [ ]    use an IP webcam as video source
- [ ]    real-time tracking
- [ ]    visual cues in real time 

GK Workshop:

- [ ]    annotations
- [ ]    capture shooting conditions 

To come up :

- [ ]    slow-motion mode // works already, but requires conversion from OpenCV + highgui to OpenGL 

Technical informations:

This software is written on Linux, and cross-compiled to run on 64-bit Windows. The APIs used are:

* **SDL2** ( http://libsdl.org/ ) for windowing and remarkable portability Linux -> Windows;
* **OpenGL** ( https://www.khronos.org/opengl/ ) for rendering;
* **Dear ImGui** ( https://github.com/ocornut/imgui ) for user interface and graphics performance (thanks to **Omar Cornut** for this awesome UI);
* **OpenCV 3.4.0** ( https://opencv.org/ ): management of webcams, processing of frames, annotations (stopwatch, recording);
* **DirectShow** and **DirectX** (on Windows), v4l2 + gstreamer (on Linux): video acquisition;
* **FFMPEG (version 3.4.0 on Windows, 3.4.1 devel on Linux)** ( http://ffmpeg.org/ ) opening, analysis, export of video files (divx, avi etc);
* **mingw-w64** ( https://mingw-w64.org/doku.php ) cross-compilation of the Windows version;
* **InnoSetup** ( http://www.jrsoftware.org/ ) for Windows packaging;
* **wine64** ( https://www.winehq.org/ ) for testing the Windows version on Linux;
* **Native File Dialog** ( https://github.com/mlabbe/nativefiledialog ), open file, save, written by **Michael Labbe** .
* **Font AweSome** ( https://github.com/juliettef/IconFontCppHeaders ) for font-icons created by **Juliette Foucaut** .
* **(coming soon) **TinyXML2** ( https://github.com/leethomason/tinyxml2 ) for xml tags when analyzing and ranking a video.
* **(in test) **SDL_kitchensink** ( https://github.com/katajakasa/SDL_kitchensink ) for sound in videos (reading AND recording) 

Author of miniDart software: Eric Bachard © 2016-2018 
