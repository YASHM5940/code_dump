#main coding file

import pygame
import sys
from const import * 
from game import Game

class Main:
    def __init__(self):
        pygame.init()
        self.screen= pygame.display.set_mode( (width, height))
        pygame.display.set_caption('chess')
        self.game=Game
# this basicaly creates the screen of chess 
    def mainloop(self):
        game=self.game

        
        while True:
            game.showbackgound(self.screen, self.screen)

            for event in pygame.event.get():
                if event.type==pygame.QUIT:
                    pygame.quit()
                    sys.exit()
                    #this loops mouse inputs and all the other moves and stuff. basikkaly handles the inputs
            pygame.display.update()        
        

main=Main()

main.mainloop()