class bhobho:
    def __init__(self,name,age,breed):
        self.name=name
        self.age=age
        self.breed=breed

    def showdetails(self):
            print(f"details of dog\n1.{self.name}\n2.{self.age}\n3.{self.breed}\n")

class kam(bhobho):
    def __init__(self,occupation):
          self.occupation=occupation
    def showdetails1(self):
         print(f"bhobho works as {self.occupation}\n")

dog1=bhobho("menu",65,"boerboel")
dog2=bhobho("chattin",12,"poodle")
dog1.showdetails()
dog2.showdetails()
