
GCC := g++-7

OUTPUT := code1
SOURCES := $(wildcard *.cpp)
CCFLAGS := -std=c++17

all: $(OUTPUT)
	
$(OUTPUT):
	$(GCC) $(CCFLAGS) -o $(OUTPUT) $(SOURCES)   
	
clean:
	rm $(OUTPUT)
	
.PHONY: all
