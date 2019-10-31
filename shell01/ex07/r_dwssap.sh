cat /etc/passwd | grep -v ^# | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed -n "$FT_LINE1 , $FT_LINE2 p" | tr "\n" "," | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev | tr -d "\n"

#cat affiche le fichier /etc/passwd
#je cherche uniquement les lignes qui possede :*:
#je recupere uniquement la premiere partie qui est le login
#je prend une ligne sur deux en commecant par le deuxieme
#je reverse pour changer l'ordre
#je trie par ordre alphabetique -r pour inverser
#je passe les deux parametre login
#je remplace tout les retour a la ligne par une virgule
#j'ajoute un espace apres toute(g) les virgules
#je remplace la derniere virgule par un point ($ derniere ligne)
