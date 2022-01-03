import random

ints = []

len = 500

i = 0

while i < len:
	n = random.randint(0, 4000)
	if n not in ints:
		ints.append(n)
		i += 1

string_ints = [str(int) for int in ints]
str_of_ints = " ".join(string_ints)
print(str_of_ints)
