from random import *

file = open("tc5.txt","w")

n = 30000

file.write(f"{n}\n")
for i in range(n):
    no1 = randint(0,1000000000)
    no2 = randint(0,1000000000)
    file.write(f"{no1} {no2} \n")

file.close()