all: a.out

a.out: lab1.cpp
	g++ -std=c++11 lab1.cpp

test: a.out
	./a.out

clean:
	rm -f a.out
	rm -f b.out
	rm -f c.out

b.out: ioTest.cpp
	g++ -std=c++11 ioTest.cpp -o b.out

c.out: demo.cpp
	g++ -std=c++11 demo.cpp -o c.out

ioTest: b.out
	./b.out

demo: c.out
	./c.out
