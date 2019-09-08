
LIBS += -lopengl32
LIBS += -lglfw3

all: bin/app.exe

bin/app.exe: src/main.c
	$(CC) -o $@ $^ $(LIBS)
