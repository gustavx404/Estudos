
"""
Substituindo caractere repetido

Escreva um programa Python para obter uma string de uma determinada string em que todas as ocorrências de seu primeiro caractere foram alteradas para '$', exceto o próprio primeiro caractere

Ex:

fifa 23 → fi#a 23

restart→ resta#t

Substituindo caractere repetido

Escreva um programa Python para obter uma única string de duas strings fornecidas, separadas por um espaço e troque os dois primeiros caracteres de cada string.

Ex:
"""

gameName = "fifa 23"

primeira = gameName[0].lower()
new_name = gameName.replace(primeira, '&')
new_name2 = primeira + new_name [1:]

print(primeira)
print(new_name)
print(new_name2)

st1 = 'cab'
st2 = 'zyx'

new_st1 = st2[:2] + st1[2:]
new_st2 = st1[:2] + st2[2:]

print(new_st1 + " " + new_st2)