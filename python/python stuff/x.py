#acessing thigs in dictionary
car_owner_list={ "5940":"browny",
              "6355":"hiyu",
              "7260":"panda",
              }
# print(carownerlist.items())
kam=int(input(" plz press 1 to find required car owner from list \n plz press 2 to update car owner list " , ))
if kam ==1:
    a=input("enter car number " , )
    if a in car_owner_list:
        print("car owner found ")
        print(car_owner_list.get(a))
    else:
        print("no")

else:
    car_num=(input("enter car number \n"))
    car_owner=input("enter car owner\n")
    car_owner_list.update({car_num:car_owner})

print(car_owner_list)

    # car owner problem solved