from tkinter import *

janelaPrincipal = Tk()
texto = Label(master = janelaPrincipal, text = "Minha janela exibida")
b2 = Button(janelaPrincipal, text = "GFG") 
b2.pack(fill = X, expand = True, ipady = 10)
janelaPrincipal.mainloop()