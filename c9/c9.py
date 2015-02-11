from collections import Counter

def count_dict(loveString):
	d = {}
	
	for w in loveString:
		d[w] = loveString.count(w)
		
	for k in d:
		print(k + ': ' + str(d[k]))
	return d
	
def main():
	loveString = raw_input("Please type a string.\n")
	d = {}
	d = count_dict(loveString)
	
	
	begin = 0;
	end = -1;
	addDict = {}
	lengthOfD = len(d) 
	if (lengthOfD % 2 == 0):
		for i in range(0, lengthOfD / 2):
			addDict[i] = d[d.keys()[begin]] + d[d.keys()[end]]
			begin += 1 
			end -= 1
	else:
		for i in range(0, (lengthOfD / 2) + 1):
			if (begin == (len(d) / 2)):
				addDict[i] = d[d.keys()[begin]]
			else:
				addDict[i] = d[d.keys()[begin]] + d[d.keys()[end]]
				begin += 1 
				end -= 1
				
			
	print (addDict)
	
	return 0

if __name__ == '__main__':
	main()

