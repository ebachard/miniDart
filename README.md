# miniDart (version actuelle : 0.6.8)
Logiciel d'analyse vidéo pour coachs de sports collectifs (handball, mais pas seulement)

Ceci est une version de démonstration du logiciel **miniDart**. Elle n'est pas complète, et comporte probablement quelques bugs. Une partie des fonctionnalités est encore manquante, et devrait être implémentée d'ici le printemps 2018.

**IMPORTANT : Cadre de ce projet**

**Un projet de développement handball, est en cours. Le logiciel miniDart sera une des ressources utilisées pour son financement. Le but est de financer un tournoi international de handball pour une équipe féminine jeunes (-13)**

**Ainsi, le logiciel miniDart, lorsqu'il sera complet, sera dans un premier temps vendu. Quand suffisamment d'argent aura été récupéré, les sources du logiciel seront mises sous licence GPL.**

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

Système d'exploitation : testé sur Windows 7 et Win 10  64 bits.

Ce qui est actuellement fonctionnel : 

- affichage retardé (réglable jusqu'à 40s, mais pourra être augmenté. Testé OK jusqu'à 100s de retard, mais il faut beaucoup de RAM dans ce cas)
- permet le séquençage vidéo (le son n'est pas géré pour l'instant)
- enregistrement avec ou sans retard des images issues d'une ou plusieurs webcams (une seule peut être enregistrée à la fois)
- chronomètre : on peut ajouter le chronomètre, et incruster le temps dans les vidéos enregistrées
- affichage du temps d'activité (cumul si chronomètre activé) et/ou le temps total (depuis le premier appui sur start)
- changement de webcam en live (il est toutefois conseillé de démarrer miniDart AVEC la webcam branchée)
- thème modifiable (onglet préférences)
- toute l'interface utilisateur est modifiable en cours de fonctionnement, mais n'est pas mémorisée pour le prochain démarrage)
- le mode statistiques est en cours d'implémentation, et toute suggestion d'amélioration est la bienvenue
- ouvrir un fichier de type vidéo (sera utilisé pour le mode image par image et l'analyse+séquençage avec ajout de tags)
- mode image par image (déjà disponible ici : https://github.com/ebachard/cv_slideshow fonctionne en mode "drag and drop") ;

Atelier analyse :
- ouverture d'un répertoire contenant une vidéo
- choix du répertoire d'enregistrement par défaut des vidéos (à tester de façon plus approfondie)

Atelier suivi GB :
- couleur du tir en fonction du résultat (but, arrêt GB, poteau, tir hors cadre)
- tracé des impacts de tirs par glisser-déposer à la souris
- possibilité d'ajouter une flèche, et de régler les dimensions
- ajout du numéro du tireur (bug connu, ne fonctionne pas encore correctement)
- saisie nom de la GB / du GB suivi
- saisie niveau du championnat / mode entraînement ou match / en mode match, pour la N2F, choix du club
- saisie de la mi-temps en cours
- mode suivi statistique type feuille de match (GB ou joueurs d'une équipe) ;
- choix du type de tir (pour un 7m, il faut activer le bouton "7m" AVANT de tracer le tir, sinon le tir sera pris pour un tir normal)

En cours de développement (mais déjà partiellement fonctionnel) :

Atelier retard :
- icônes pour le chronomètre, les sources (webcam 1 ou 2)
- zoom d'une partie de l'image (réglable avec curseur). Bug connu : offset entre la région sélectionnée et celle affichée.
- redimensionnement de la partie visionnée
- sélection de la partie zoomée dans la loupe


Atelier GB :
- saisie des conditions du tir
- affichage des statistiques ( % d'arrêt, % de réussite, secteurs favorables, défavorables, suivi des tirs par joueur)

À venir :
- mode ralenti (slow-motion) ;

Informations techniques:

Ce logiciel est écrit sous Linux, et cross-compilé pour fonctionner sous Windows 64 bits. Les APIs utilisées sont:
* **SDL2** ( http://libsdl.org/) pour le fenêtrage et la remarquable portabilité Linux -> Windows ;
* **OpenGL** (https://www.khronos.org/opengl/) pour le rendu ;
* **Dear ImGui** (https://github.com/ocornut/imgui) pour l'interface utilisateur et les performances graphiques (merci à **Omar Cornut** pour cette UI géniale) ;
* **OpenCV 3.4.0** (https://opencv.org/) : gestion des webcams, traitement des frames, annotations (chronomètre, enregistrement) ;
* **DirectShow** et **DirectX** ( sous Windows) , v4l2 + gstreamer (sous Linux) : acquisition vidéo ;
* **FFMPEG (version 3.4.0 sous Windows, 3.3.4 sous Linux)** (http://ffmpeg.org/) ouverture, analyse, export de fichiers vidéos (divx, avi etc) ;
* **mingw-w64** (https://mingw-w64.org/doku.php) cross-compilation de la version Windows ;
* **InnoSetup** (http://www.jrsoftware.org/) pour le packaging Windows ;
* **wine64** (https://www.winehq.org/) pour les tests de la version Windows sous Linux;
* **Native File Dialog** (https://github.com/mlabbe/nativefiledialog), ouverture d'un fichier, sauvegarde, écrit par **Michael Labbe**.
* **Font AweSome** (https://github.com/juliettef/IconFontCppHeaders ) pour les fontes-icones créées par **Juliette Foucaut**.
* (prochainement) **TinyXML2** (https://github.com/leethomason/tinyxml2) pour les tags xml lors de l'analyse et le classement d'une vidéo.

**Auteur du logiciel miniDart : Eric Bachard © 2016-2018**

