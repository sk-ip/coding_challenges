# bubble sort program

import array
#global variables
arr=array.array('i',[])
n=0

def bubblesort():
    inputarray()
    displayarray(n)
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j]>arr[j+1]:
                k=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=k
    print('the sorted array is as follows')
    displayarray(n)

def inputarray():
    global arr,n
    n=int(input('how many elements in the array?'))
    print('enter elements in the array')
    for _ in range(0,n):
        val=int(input())
        arr.append(val)

def displayarray(n):
    print('displaying the array:')
    for i in range(0,n):
        print('\n {}'.format(arr[i]))

if __name__ == '__main__':
    bubblesort()