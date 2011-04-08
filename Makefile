##Variables
 name_of_bin = House 
 objects = main.o
 lib_dirs = -L/usr/lib/
 h_dirs = -I./include 
 override CFLAGS += -Werror -O0 -g3 -Wall -fPIC -Wundef -fexceptions $(h_dirs)

##Directives
 vpath %.cpp ./src

$(name_of_bin) : $(objects) 
	g++ $(lib_dirs) -o $(name_of_bin) $(objects) 

main.o : main.cpp  
	g++ -c $(CFLAGS) $<


.PHONY : clean 
clean :
	rm -vf $(name_of_bin) *.o
