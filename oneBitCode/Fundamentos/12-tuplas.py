gamesTuple = ("Fifa23", "Red Dead 2", "Star Wars",
              "Mario Odyssey", "The Legend of Zelda")
print(gamesTuple)

# Tupla nao pode ser  removido valores nem passado valores e nem ordenar valores

# 1 - Buscar os dois primeiros itens da tupla
print(gamesTuple[:2])

# 2 - Buscar o ultimo item da lista
print(gamesTuple[-1])

# 3 - Buscar jogos ate a uma determinada posicao
print(gamesTuple[:3])

# 4 - Buscar jogos de uma posicao em diante
print(gamesTuple[1:4])

# 5 - Recuperar um item pelo indece 
print(gamesTuple.index("Red Dead 2"))