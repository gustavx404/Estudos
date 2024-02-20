import random

random.seed(8)
numeros = random.getstate()
print(random.sample(range(10), k=5))
#resultado: [3, 5, 6, 1, 7]