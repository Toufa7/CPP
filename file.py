
num = input()

var = num.split(' ')

string = str(input())

a = int(var[0]) - 1
b = int(var[1])

sub = string[a:b][::-1]

hi = string[0:a]

bi = string[b:len(string)]

last = hi + sub + bi

print (last)