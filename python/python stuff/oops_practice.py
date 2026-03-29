class school_staff:
    def __init__(self,role,salary):
        self.role=role
        self.salary=salary

    def personal_details(self):
        print("name: ", self.name)
        print("age: ", self.age)
        print("subject: ", self.subject)


# creating class teacher which inherits things from school_staff
class Teacher(school_staff):
    def __init__(self, name, age, subject):
        self.name=name
        self.age=age
        self.subject=subject

        super().__init__("teacher(HOD)" , "40k")

teacher1=Teacher("billu", 52, "science")
teacher1.personal_details()


        