class cats:
    def __init__(self, name, age , tail_length, type) :
        self.name=name
        self.age=age
        self.tail_length=tail_length
        self.type=type

class gharelu_billi(cats):
    def __init__(self, breed):
        self.breed=breed

class big_cats(cats):
    def __init__(self, species):
        self.species=species


meautai=cats("meautai", 23, 47, "domestic")
taigu_hiya=cats("richard parkar" , 36 , 51 , "wild")
liyu_hiya=big_cats("pantheriya leo")  