import os

name = input("Digite nome do jogo\n")
yearLauch = int(input("Digite o ano de lançamento\n"))
gamePrice = float(input("Digite o valor do jogo\n"))
planInclude = bool(input("esta incluso no serviço mensal?\n"))

os.system('cls')

print(name)
print(yearLauch)
print(gamePrice)
print(planInclude)