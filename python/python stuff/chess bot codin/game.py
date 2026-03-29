# creating the game here. like the boxes of the board etc.
import pygame

from const import *

class Game:
    def __init__(self):
        pass

    def showbackgound(self, surface):
        for row in range(rows):
             for col in range(cols):
                if (row+col) % 2==0:
                    color=(24,205,200)
                else:
                    color=(119,190,88)

                rect=(col*squaresize, row* squaresize , squaresize ,squaresize)

                pygame.draw.rect(surface, color, rect)

                
                                
                 