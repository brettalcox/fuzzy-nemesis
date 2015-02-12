def main():
	total = 0
	for i in range(1, 999):
		if ((i % 3 == 0) or (i % 5 == 0)):
			total += i
	print(total)
	
	return 0

if __name__ == '__main__':
	main()

