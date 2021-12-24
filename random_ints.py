import random

ints = []

len = 100

for i in range(len):
	n = random.randint(-2147483648, 2147483647)
	if (n not in ints):
		ints.append(n)

string_ints = [str(int) for int in ints]
str_of_ints = " ".join(string_ints)
print(str_of_ints)
