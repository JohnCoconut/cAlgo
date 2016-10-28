from random import randint

MAX = 3000000

f = open('rand.txt', 'w')
for i in xrange(MAX):
    number = str(randint(-1 * MAX, MAX)) + ' '
    f.write(number)

f.close()
