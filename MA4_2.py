#!/usr/bin/env python3

from integer import Integer
from time import perf_counter as pc

def fib_py(n):
	if n <= 1:
		return n
	else:
		return(fib_py(n-1)+fib_py(n-2))

def main():
	f = Integer(5)
	print(f.get())
	f.set(7)
	print(f.get())

	times=[]
	for n in range(30,46):
		start = pc()
		f = fib_py(n)
		end = pc()
		times += [end-start]
		print(f"Time elapsed: {round(end-start, 2)} seconds")
	print(times)

if __name__ == '__main__':
	main()
