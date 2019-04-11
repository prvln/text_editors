from tkinter import *
from tkinter import filedialog as fd
from tkinter import messagebox as mb

def insertText(): 
    file_name = fd.askopenfilename()
    text.delete(0.0, END) 
    f = open(file_name)
    s = f.read()
    text.insert(1.0, s)
    f.close()    

def extractText():
    file_name = fd.asksaveasfilename(filetypes=(("TXT files", "*.txt"),
                                                ("Python files", "*.py"),
                                                ("C++ files", "*.cpp"),
                                                ("C files", "*.c"),
                                                ("All files", "*.*") ))
    f = open(file_name, 'w')
    s = text.get(1.0, END)
    f.write(s)
    f.close()

def on_closing():
    if mb.askokcancel("Выход", "Вы действительно хотите выйти?"):
        root.destroy()
    
def delete_text():
    answer=mb.askyesno("Подтверждение", message="Вы хотите удалить текст?")
    if answer==True:
        text.delete(0.0, END) 

def about_me():
    a = Toplevel()
    a.geometry('200x50+100+100')
    a['bg'] = 'yellow'
    a.overrideredirect(True)
    Label(a, text="Ангелина Ахтямова КМБО-05-18").pack(expand=1)
    a.after(3000, lambda: a.destroy())



root = Tk()

root.title("ver. 1.1")

root.minsize(width=800, height=600)
root.maxsize(width=800, height=600)

text = Text(width=800, height=600)
text.pack()


mainmenu = Menu(root) 
root.config(menu=mainmenu) 
 
filemenu = Menu(mainmenu, tearoff=0)

filemenu.add_command(label="Открыть", command=insertText)
filemenu.add_command(label="Сохранить как", command=extractText)
filemenu.add_command(label="Очистить", command=delete_text)
filemenu.add_command(label="Выход", command=on_closing)


helpmenu = Menu(mainmenu, tearoff=0)

helpmenu.add_command(label="О программе")
helpmenu.add_command(label="Разработчики",command=about_me)
 
mainmenu.add_cascade(label="Файл", menu=filemenu)
mainmenu.add_cascade(label="Справка", menu=helpmenu)


root.mainloop()
