class Student:

    def __init__(self,name,marks):
        self.name = name
        self.marks =marks
        print("adding new student in database..")


s1 = Student("topu",80)
print(s1.name)

s2 = Student("fuck",99)
print(s2.name,s2.marks)