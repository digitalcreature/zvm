TARGET=zvm

all: $(TARGET)

$(TARGET): *.c *.h
	gcc *.c -o $@

clean:
	rm -rf $(TARGET)
