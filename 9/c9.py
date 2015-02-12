from collections import Counter

def count_dict(loveString):
	d = {}
	
	for w in loveString:
		d[w] = loveString.count(w)
		
	for k in d:
		print(k + ': ' + str(d[k]))
	return d
	
def main():
	userString = raw_input("Enter your name: ")
	loveString = raw_input("Enter your love's name: ")
	finalString = userString + "loves" + loveString
	
	d = {}
	d = count_dict(finalString)
	
	while True:
		begin = 0;
		end = -1;
		addDict = {}
		lengthOfD = len(d) 
		if (lengthOfD % 2 == 0):
			for i in range(0, lengthOfD / 2):
				addDict[i] = d[d.keys()[begin]] + d[d.keys()[end]]
				begin += 1 
				end -= 1
				
				if (addDict[i] > 9):
					addDict[i] = round(addDict[i] / 2)

		else:
			for i in range(0, (lengthOfD / 2) + 1):
				if (begin == (len(d) / 2)):
					addDict[i] = d[d.keys()[begin]]
					
					if (addDict[i] > 9):
						addDict[i] = round(addDict[i] / 2)
				else:
					addDict[i] = d[d.keys()[begin]] + d[d.keys()[end]]
					begin += 1 
					end -= 1
					
					if (addDict[i] > 9):
						addDict[i] = round(addDict[i] / 2)
		print (addDict)
		
		if (len(d) <= 2):
			break
		else:
			d = addDict
	final = addDict[0] * 10
	print(userString + " loving " + loveString + " has a "),
	print(final),
	print( "% chance of working!")
	
	return 0

if __name__ == '__main__':
	main()

