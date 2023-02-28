SOURCES = $(wildcard *.c)


all: $(SOURCES:.c=)

%: %.c
	$(CC) -o $@ $<

clean:
	rm -f $(SOURCES:.c=)
