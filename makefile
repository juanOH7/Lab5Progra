FriendList.exe: Lab5Progra.o person.o
	g++ Lab5Progra.o person.o -lncurses
Lab5Progra.o: Lab5Progra.cpp person.hpp
	g++ -c Lab5Progra.cpp -lncurses
person.o: person.hpp person.cpp
	g++ -c person.cpp
