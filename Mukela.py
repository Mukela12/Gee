Mukela  = int(input("Enter number:"))
def add(Mukela):
    Mukela = Mukela + 1000
    print(Mukela)
add(Mukela)
# alright another part

class Thegreat:
    def __init__(self, Mukela):
        self.Mukela = Mukela
        self.calculate()

    def calculate(self):
        self.Mukela = self.Mukela + 3000
        print(self.Mukela)

Thegreat(Mukela)