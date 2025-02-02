gameFifa = {"name":"Fifa 23",
            "yearLauch": 2022,
            "gamePrice": 90.50,
            "classification": 8.5,
            "genre": ["esporte", "familia"]
            }

print(gameFifa)
print(len(gameFifa))

# 1 Recuperar um elemento do dicionario
print(gameFifa['genre'])
print(gameFifa.get('gamePrice'))

# 2 - Buscar apenas as chaves do dicionario
print(gameFifa.keys())

# 3 - Buscar apenas valores do dicionario
print(gameFifa.values())

# 4 - Buscar itens do dicionario com chave e valor
print(gameFifa.items())

# 5 - Adicionar itens no dicionario
gameFifa["players"] = 2
print(gameFifa)

# 6 - Atualizar itens no dicionario
gameFifa.update({"players": 1})
print(gameFifa)

# 7 - Remover item no dicionario
gameFifa.pop("players")
print(gameFifa)