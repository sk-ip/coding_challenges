#stack data structure using arrays in python.

#global variables
stack=[]
length=0

def menu():
    while True:
        print('1.create a stack')
        print('2.push')
        print('3.pop')
        print('4.peek')
        print('5.exit')
        ch=int(input('enter your choice:'))
        if ch==1:
            #create a stack
            create_stack()
        elif ch==2:
            #push to the stack
            push_to_stack()
        elif ch==3:
            #pop from the stack
            val=pop_from_stack()
            print('value popped from the stack:', val)
        elif ch==4:
            #peek
            peek_into_stack()
        else:
            exit()

def create_stack():
    global stack
    global length
    num=int(input('how many elements do you want to enter:'))
    length=num
    for _ in range(num):
        data=int(input())
        stack.append(data)

def push_to_stack():
    global stack
    global length
    data=int(input('enter value to push on the stack:'))
    stack.append(data)
    length+=1

def pop_from_stack():
    global stack
    global length
    val=stack.pop(length-1)
    length-=1
    return val

def peek_into_stack():
    global length
    global stack
    print(stack)

if __name__=='__main__':
    menu()