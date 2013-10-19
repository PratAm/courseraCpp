CPP=g++
CPPFLAGS=-W -Wall -o2

%: %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $^
