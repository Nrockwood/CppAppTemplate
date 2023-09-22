.PHONY: all configure build test format

all: configure build test format

configure:
	mkdir -p build
	(cd build && cmake -DCMAKE_BUILD_TYPE=Debug ..)

build:
	mkdir -p build
	(cd build && make)

test:
	./build/bin/unit_tests --gtest_shuffle

format:
	find include test -iname '*.h' -o -iname '*.cpp' | xargs clang-format -i