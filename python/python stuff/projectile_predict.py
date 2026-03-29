#user enters velocity of projectile, angle with horizontal and the program gives prdicted range, height, time of flight
import math
class projectile:
    def __init__(self):
        self.angle=float(input("enter angle with horizontal ( in radian and 3 decimal places) ", ))
        self.velocity=float(input("enter velocity(in meters per sec)", ))
        # self.velocity=velocity
        # self.angle=angle

    def maxHeight(self):
        self.maxHeight=float(((self.velocity)*(self.velocity)*(math.sin(self.angle))*(math.sin(self.angle)))/(2*9.8))
        print(self.maxHeight)

    
    def raange(self):
        self.raange=float(2*(self.velocity)*(self.velocity)*((math.sin(self.angle)))*((math.cos(self.angle)))/9.8)
        print(self.raange)

coin=projectile()
coin.maxHeight()
coin.raange()
# completed
#math is module imported to do sine, cos , tan etc functions.but it takes input in radians