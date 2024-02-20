while True:

    try:
        valor = 10
        unidades = 0
        desconto = 0
        unidades = int(input('Digite a quantidade :'))
        if unidades <= 10:
            valor = valor * unidades
        elif unidades <= 20:
            valor = valor * unidades
            desconto = valor * 0.1
            valor = valor - desconto
        else:
            valor = valor * unidades
            desconto = valor * 0.2
            valor = valor - desconto
        print(f'Valor final: {valor}R$ Seu Desconto foi de {desconto}R$')
    except ValueError:
        print('Invalido Digite um Numero')
        