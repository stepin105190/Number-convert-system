SRC = unity/unity.c\
src/conversions_systems.c\
test/test_conversions_systems.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = Conversions_Systems.exe

BUILD = build

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}

clean:
	rm -rf $(PROJECT_NAME)
