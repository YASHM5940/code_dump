# browny iss program se apne khane ki chize kiidhar hein, and kintni hein woh dekhta h.
# brown sarri chize ek class "khana_in_fridge" mein store karta
import pprint
class khana_in_fridge:
    def __init__(self,list_of_food):
        self.list_of_food=list_of_food
        
'''
parameters of a food item-
    tikha, metha, namkeen, etc
    quantity as in 100 kg,10gms,90 liters etc
    name of compony
    price per item
    energy per item/serve

'''
class khana_specifications(khana_in_fridge):
    def __init__(self,name, taste, quantity, company, price, calorie):
        self.name=name
        self.taste=taste
        self.quantity=quantity
        self.company=company
        self.price=price
        self.calarie=calorie
    
    def print_khana(self):
        print(self.name)

    def __str__(self):
        return f"{self.name}"

food1=khana_specifications("honey","meetha", 900, "brownn", 90, 675)
food2=khana_specifications("pancake", "meetha", 300, "brownn", 850, 900)

list_of_food=[food1, food2]
# print(len(list_of_food))=2 for now

# now the main role of the program.browny asks what all is there and orders food.we make this a new function

def fridge_work():
    a=int(input('''henlo, what do u want?\n
       press 1 for food list\n
       press 2 to find entered food\n
       press 3 for exit fridge\n'''))
    if a==1:
       print(food1, food2) , 
    #   or we can use a loop(the ideal way coz food list can be large) while()
    elif a==2:
        food_name=input("enter food name")
        p=0
        for b in range(len(list_of_food)):
            if food_name==(list_of_food[b].name):
                p=1
                break
        if p==1:
            print("food available")
        else:
            print("soory , food unavailable")
    elif a==3:
        print("thank u .eat again!")


fridge_work()