sticks = 21
print ("    o o o o o o o o o o o o o o o o o o o o o")
print ("    | | | | | | | | | | | | | | | | | | | | |")
print ("\n----------Welcome to 21 Matchsticks Game----------\n")
print ("There are 21 sticks, you can take 1-4 number of sticks at a time.")
print ("Whoever will take the last stick will loose.\n")

while True:
    print ("\nSticks left: ", sticks)
    sticks_taken = int(input("Take sticks(1-4):"))
    if sticks == 1:
        print ("You took the last stick, you loose!!!")
        break
    if sticks_taken >= 5 or sticks_taken <= 0:
        print ("Wrong choice (Select sticks 1-4)")
        continue
    print ("\nComputer took: ", (5 - sticks_taken))
    sticks -= 5