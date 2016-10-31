name = raw_input("Enter your name:")
letter = list(name)
i = 0
luck = 0
while i != len(letter):
	luck += int(ord(letter[i]) - 96)
	i += 1
while luck > 9:
	luck = luck%10 + (luck%100)/10 + (luck%1000)/100

print
print "Hello "+name+"! Your lucky number is: ",luck
