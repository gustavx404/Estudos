import os

name = input("Digite nome do jogo\n")
yearLauch = int(input("Digite o ano de lançamento\n"))
gamePrice = float(input("Digite o valor do jogo\n"))
planInclude = bool(input("esta incluso no serviço mensal?\n"))

os.system('cls')
#print("#### DADOS DO JOGO ####")
#print(""+++++++++++++++++++++++")
#print("Nome do Jogo", yearLauch)
#print("Ano do Jogo", yearLauch)
#print("Preço do Jogo", gamePrice)
#print("Esta incluso no plano?", planInclude)

print(f"Nome do Jogo: {name} \nAno Lançamento: {yearLauch} \nPreço: {gamePrice} \nEsta incluso no plano?: {planInclude}")

