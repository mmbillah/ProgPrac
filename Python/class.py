import itertools

class Dog:
    # Class attributes
    species = "Canis familiaris"

    # Instance attributes
    def __init__(self,name,age):
        self.name=name
        self.age=age

    # Instance method
    def __str__(self):
        return f"{self.age} is {self.name} years old" #preferred way of string formatting
        #return '{} is {} years old'.format(self.name,self.age)

    # Another instance method
    def speak(self, sound):
        return f"{self.name} says {sound}"
        #return '{} says {}'.format(self.name,sound)


#define some child classes
#they all belong to the parent class Dog
class JackRussellTerrier(Dog):

    def __str__(self):
        return f"Just modified the parent class string method!"

    def speak(self,sound='Arf'):
        #return f"{self.name} says {sound}"
        return super().speak(sound)  

class Dachshund(Dog):
    def speak(self,sound='barf'):
        return f"{self.name} says {sound}"

class Bulldog(Dog):
    def speak(self,sound='tarf'):
        return f"{self.name} says {sound}"

#dog_name=['Buddy','Miles','Terry','Tom','Thunder']
#dog_age=[9,4,5,7,10]

#mydogs=[]
#for (i, j) in zip(dog_name,dog_age):
#    mydogs.append(Dog(i,j))

buddy=Dog('Buddy',9)
miles=Dog('Miles',4)

#we can define dogs in terms of the child classes as below
#child classes inherit all the attributes and methods of the parent class
jack=JackRussellTerrier('Jack',10)
jim=Dachshund('Jim',11)
jill=Bulldog('Jill',12)

mydogs=[buddy,miles]
print(mydogs)
for dog in mydogs:
    #print('Name: {} Age: {} Species: {}'.format(dog.name,dog.age,dog.species))
    print(f"Name: {dog.name} Age: {dog.age} Species: {dog.species}")   

print(buddy)
print(buddy.speak('Woof woof!!'))
print(type(jill))
print(isinstance(jill,Dachshund))
print(jill.speak('Wu la la'))
print(jack.speak())
print(jill.__str__())
