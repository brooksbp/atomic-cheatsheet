all:
	gcc -O0 atomic.c -o atomic
	objdump -d atomic > atomic.`uname -m`
	rm atomic
