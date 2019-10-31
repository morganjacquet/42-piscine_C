id -Gn $FT_USER | tr " " "," | tr -d "\n"

#id -Gn remplace groups qui est opsolete
#tr remplace les espqce par une virgule dans le premier cas
#tr -d supprime les retour a la lign dans le deuxieme cas
