C_SOURCES := $(wildcard ex_*.c)
RUST_SOURCES := $(C_SOURCES:.c=.rs)

all: $(RUST_SOURCES)

%.rs: %.c
	c2rust-transpile --emit-modules $< -o $@
	mv $@/src/$@ $@_
	rm -rf $@/
	mv $@_ $@

clean:
	rm -rf $(RUST_SOURCES)

.PHONY: all clean

