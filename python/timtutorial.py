class Human:
    def __init__(self, name, gender):
        self.gender = gender
        self.name = name

    def ShowDetailsHuman(self):
        print(f"{self.name} is {self.gender}")


class Man(Human):
    def __init__(self, name, gender):
        super().__init__(self, name, gender)
        self.gender = "male"

h = Man("jonh")
h.ShowDetailsHuman()