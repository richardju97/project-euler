# Problem 1 of Project Euler

# Find the sum of all multiples of 3 or 5 below 1000.

# Brute Force Method
def problem1():
	sum = 0
	for i in range (0, 1000):
		if ((i % 3 == 0) or (i % 5 == 0)):
			sum += i
	return sum
	
def problem2():
	previousTerm = 1
	currentTerm = 2
	sum = 0
	
	while (currentTerm <= 4000000):
		if (currentTerm % 2 == 0):
			sum += currentTerm
		nextTerm = previousTerm + currentTerm
		previousTerm = currentTerm
		currentTerm = nextTerm
	return sum
	
# Binary Search-esque / Somewhat Brute Force Method
def problem3(double num):
	double largestPrime = 1
	double currentNumber = 2
# 	double largestPossible = 
	
# 	while (currentNumber < largestPossible):
	return 0
	
	
print "Answer to Problem 1: " + str(problem1())
print "Answer to Problem 2: " + str(problem2())
print "Answer to Problem 2: " + str(problem3(600851475143))