ls -l | sed -n "p;n"
#ls -l permet d'afficher le contenue du repertoire
#sed cette commande permet d'appliquer un certain nombre de commandes sur un fichier puis d'en afficher le resultat
#-n écrit seulement les lignes spécifiées et p affiche la ligne si on imprime avant d'afficher on perd une ligne sur deux
