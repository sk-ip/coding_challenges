# a todo program in python

def todo_app():
    notepad={}
    tasks=int(input('how many tasks you want to complete:'))
    for task in range(tasks):
        work_todo=input('{count_of_task}.)'.format(count_of_task=task+1))
        notepad['{}'.format(task+1)]=work_todo
    
    print('\n TODO  list is as follows:\n')
    for task in range(tasks):
        print('{task}.)'.format(task=task+1),notepad['{task}'.format(task=task+1)])

if __name__ == "__main__":
    todo_app()