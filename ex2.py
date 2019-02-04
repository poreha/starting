#coding utf 8

print("Trying out Python")
name = input("Present yourself: ")
print("You are going to regret entering my Lair,",name,"!")
answ = input("~Python prepares for a Fight!~\n Do you fight? {Y/N}")
 
 #PEP - 8 Look it up
 
if answ == 'Y' :
		print("~You fight the Python~")
		#пропуск цикла pass
		fight = input(">Guard(follow instructions)\nOR\n>Attack(browse the Net) \n You choose: ")
		if fight == 'Guard' : 
			path = 1
			print("~You TAKE 0 Damage and gain 1 Advantage~")

		elif fight == 'Attack' :
			path = 0
			print("~You DEAL 2 Damage, but become Vulnerable~")
		else : print("~You TAKE 5 Damage~\nBe Careful!") 
		
			
elif answ == 'N' :
	print("~You flee from the Dangers of this World and find Yourself unable to become a Hero~")
	print("~!BAD END!~")
else : 
	print("~Python Attacks You~\n~You TAKE Critical Damage~")
	print(">You Died<\n~!BAD END!~")
		
