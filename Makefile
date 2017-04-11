CFLAGS=-Wall -g
LDLIBS=-lhippo-linux-x86_64
LDFLAGS=-L. -Wl,-R.

build: hippo-demo

clean:
	rm -rf hippo-demo || true

.PHONY: build clean
