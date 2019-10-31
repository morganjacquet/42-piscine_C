find . -type f -name "*.sh" -print | sed 's/\(.*\)\///g' | sed 's/...$//'
#find permet de recherche un fichier . dans le repertoir -name "*.sh" ce terminant par sh
#sed 's/\(.*\)\///g' permet de de retirer le chemin du fichier et garder seulement le nom
#sed permet de supprimer les 3 dernier caracteres pour enlever le sh
