BUILD = Build


PROJ_NAME = ONLINEVOTING


INC = online.h
INCLUDE_LIBS = ~/Miniproject/3_Implementation/unity.h\
               ~/Miniproject/3_Implementation/unity_internals.h


SRC = multionline.c \
online.c 


TEST_SRC = ~/Miniproject/3_Implementation/3_Implementation/test.c\
               ~/Miniproject/3_Implementation/3_Implementation/unity.c

INC	= -Iinc\
-Iunity\




PROJECT_OUTPUT= $(PROJ_NAME).out
TEST_OUTPUT = Test_$(PROJECT_NAME).out

all:$(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

run: $(PROJ_NAME)
	   ./$(PROJECT_OUTPUT)


# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build