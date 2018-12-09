# program for stopwatch in python
from datetime import date, datetime

def stopwatch():
    ch=0
    while True:
        print('stopwatch')
        print('1. start')
        print('2. stop')
        print('3. show time')
        print('4. exit')
        ch=input('enter your choice:')
        if ch=='1':
            start=datetime.now()
            print('time started at',start)
        elif ch=='2':
            stop=datetime.now()
            print('time stopped at',stop)
        elif ch=='3':
            time_taken=start-stop
            print('your timing is:',divmod(time_taken.days * 86400 + time_taken.seconds, 60))
        else:
            print('exiting')
            exit()  

if __name__=="__main__":
    stopwatch()

