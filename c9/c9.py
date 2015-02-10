from collections import Counter

def count_dict(loveString):
	d = {}
	
	for w in loveString:
		d[w] = loveString.count(w)
		
	for k in d:
		print(k + ': ' + str(d[k]))
		

def main():
	loveString = raw_input("Please type a string.\n")
	count_dict(loveString)
	return 0

if __name__ == '__main__':
	main()

