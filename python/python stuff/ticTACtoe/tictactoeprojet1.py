# first we define/make the game board

def printBoard():
    print(f"0|1|2")# usinf "f" string in print statement to make stuff eazier
    print(f"-|-|-")
    print(f"3|4|5")
    print(f"-|-|-")
    print(f"6|7|8")
    print(f"-|-|-")
    # this is the "game board" which has 9 blocks numbered from 0 to 8  
    # the intermidiate lines are put to make it look good

# now the main coding and initialization of the "x" and "o"

if __name__=="__main__":
    xState=[0,0,0,0,0,0,0,0]
    # this initializes "x" in the cpu for the game. it has 8 "0"s in the list to represent 8 available blocks in the game board
    zState=[0,0,0,0,0,0,0,0]
    # similarly we initialize "o".
    print("welcome to tic tac toe!")
    # first , its x ki turn so--
    turn=1  #1 for "x", 0 for "o"

    while(True):
        printBoard()
        if(turn==1):
            print("x ki baari")
            value=int(input("enter the block number:" , ))
            # now player x will enter the number , on game board the block as the entered number will become "x"
            

