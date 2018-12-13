# a rock paper scissors program in python
import random
comp_win=0
player_win=0
def Generator():
    tools={0:'rock',1:'paper',2:'scissors'}
    ran=random.randint(1,10)
    return tools[ran%3]

def comparator(c_play, p_play):
    global comp_win, player_win
    if c_play==p_play:
        print(c_play)
        print('tie game')
        print('\ncomp_win={comp_win}, \nplayer_win={player_win}'.format(comp_win=comp_win, player_win=player_win))
        print('\n----------------------xxxxx------------------------------')
    elif c_play=='scissors' and p_play=='paper':
        print(c_play)
        print('computer wins')
        comp_win+=1
        print('\ncomp_win={comp_win}, \nplayer_win={player_win}'.format(comp_win=comp_win, player_win=player_win))
        print('\n----------------------xxxxx------------------------------')
    elif c_play=='rock' and p_play=='scissors':
        print(c_play)
        print('computer wins')
        comp_win+=1
        print('\ncomp_win={comp_win}, \nplayer_win={player_win}'.format(comp_win=comp_win, player_win=player_win))
        print('\n----------------------xxxxx------------------------------')
    elif c_play=='paper' and p_play=='rock':
        print(c_play)
        print('computer wins')
        comp_win+=1
        print('\ncomp_win={comp_win}, \nplayer_win={player_win}'.format(comp_win=comp_win, player_win=player_win))
        print('\n----------------------xxxxx------------------------------')
    elif p_play=='rock' and c_play=='scissors':
        print(c_play)
        print('player wins')
        player_win+=1
        print('\ncomp_win={comp_win}, \nplayer_win={player_win}'.format(comp_win=comp_win, player_win=player_win))
        print('\n----------------------xxxxx------------------------------')
    elif p_play=='scissors' and c_play=='paper':
        print(c_play)
        print('player wins')
        player_win+=1
        print('\ncomp_win={comp_win}, \nplayer_win={player_win}'.format(comp_win=comp_win, player_win=player_win))
        print('\n----------------------xxxxx------------------------------')
    elif p_play=='paper' and c_play=='rock':
        print(c_play)
        print('player wins')
        player_win+=1
        print('\ncomp_win={comp_win}, \nplayer_win={player_win}'.format(comp_win=comp_win, player_win=player_win))
        print('\n----------------------xxxxx------------------------------')

def menu():
    rounds=int(input('how many rounds you want to play:'))
    print('type any of the three -- > \n 1.rock\n 2.paper\n 3.scissors')
    for _ in range(rounds):
        c_play=Generator()
        p_play=input('\nyour play:')
        comparator(c_play,p_play)
        
if __name__=='__main__':
    menu()