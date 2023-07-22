# git -> log lista os log's que foi criado
# --format='%H' -> pega a hash do commit
# -n5 os 5 ultimos commits
#!/bin/bash
git log --format='%H' -n5