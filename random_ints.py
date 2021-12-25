import random

ints = []

len = 15

i = 0

while i < len:
	n = random.randint(0, 16)
	if (n not in ints):
		ints.append(n)
		i += 1

string_ints = [str(int) for int in ints]
str_of_ints = " ".join(string_ints)
print(str_of_ints)
