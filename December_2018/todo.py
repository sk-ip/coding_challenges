# a todo program in python

#global variables
notepad={}
tasks=0

def menu():
    while True:
        print('1.create a todo app')
        print('2.add to todo app')
        print('3.delete completed todo')
        print('4.display todo')
        print('5.exit')
        ch=int(input('enter your choice:'))
        if ch==1:
            todo_app()
        elif ch==2:
            # add function for the app
            add_todo()
        elif ch==3:
            #delete funcution for the todo app
            display()
            del_from_notepad()
        elif ch==4:
            display()
        elif ch==5:
            exit()

def todo_app():
    global tasks
    global notepad
    tasks=int(input('how many tasks you want to complete:'))
    for task in range(tasks):
        work_todo=input('{count_of_task}.)'.format(count_of_task=task+1))
        notepad['{}'.format(task+1)]=work_todo
       
def del_from_notepad():
    global tasks
    global notepad
    delnode=int(input('which one do you want to delete?'))
    if delnode>tasks:
        print('no such task')
    elif delnode==tasks:
        del notepad['{}'.format(delnode)]
        tasks=tasks-1
    else:
        del notepad['{}'.format(delnode)]
        while delnode<tasks:
            notepad['{}'.format(delnode)]=notepad['{}'.format(delnode+1)]
            del notepad['{}'.format(delnode+1)]
            delnode+=1
        tasks=tasks-1

def display():
    global tasks
    global notepad
    print('\n TODO  list is as follows:\n')
    for task in range(tasks):
        print('{task}.)'.format(task=task+1),notepad['{task}'.format(task=task+1)])
    print('\n')

def add_todo():
    global tasks
    global notepad
    n=int(input('how many more tasks you want to add?'))
    for task in range(n):
        work_todo=input('{}.'.format(tasks+task+1))
        notepad['{}'.format(tasks+task+1)]=work_todo
    tasks=tasks+n

if __name__ == "__main__":
    menu()