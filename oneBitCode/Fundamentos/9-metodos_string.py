gameName = "Fifa 23"
gameDescription = """
    Fifa 23 e um jogo de futebol
    desenvolvido pela EA Sports
    e que possibilita jogar localmente ou online
"""
print(gameName.upper()) # Retorna tudo em Maiusculo
print(gameName.lower()) # Retorna tudo em Minusculo
print(gameName.capitalize()) # Apenas a primeira letra
print(gameName.title()) # Apenas a primeira letra 
print(gameName.center(10, '-')) # retorna a string centralizada com caracter de preenchimento
print(gameName.find("i")) # retorna a posicao de um determinado caracter 
print(gameDescription.count("f")) # conta os caracteres
print(gameDescription.replace("Fifa","Pes")) # altera um elemento para outro
print(gameDescription.split(','))