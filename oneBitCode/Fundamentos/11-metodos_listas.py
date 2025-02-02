gameList = ["Resident Evil 4", "Star Wars Jedi Survivor",
            "The legend of zelda", "Red DeaD 2"]

# 1 - Tamanho da lista
print(len(gameList))

# 2 Recuperar um item da lista pelo indece
print(gameList.index("Resident Evil 4"))

# 3 - Adicionar item na lista
gameList.append("GTA V")
print(gameList)

# 4 - Ordenar lista
gameList.sort()
print(gameList)

# 5 - Copiar item de uma lista pra outra
gameReset = gameList.copy()
gameReset.remove("Red DeaD 2")
print(gameReset)

# 6 - Remover tudo da lista
gameList.clear()
print(gameList)