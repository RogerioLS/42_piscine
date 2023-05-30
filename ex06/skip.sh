# Escreva uma linha de comando que exiba uma linha de duas para o comando ls -l,
# começando pela primeira linha.
# --------------------------------------------------------------
# ------ comando para execucao ---------------------------------
# ------ não tem, é o próprio exercicio ------------------------
# EXPLICACAO:
# NR -> numero total de registro de entrada visto até agora.
# aws -> para poder printar as saidas;
ls -l | awk 'NR % 2==1'