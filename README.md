# Testing Suite

Testing suite made to test small C++ programs using bash.

#### Aliasing:

To use runSuite from any directory add this line to your `.bashrc`:

```bash
alias runSuite='~/[cloned directory]/runSuite'
```

#### Usage:

runSuite takes a program and runs it using provided `.in` and `.out` files. 

`.in` - contains input that the program will take in using STDIN

`.out` - contains expected output from the program being run with corresponding `.in` file

To run:

```bash
runSuite suitefile program [-valgrind] [-v] [-sr] [-stderr]
```

`suitefile` - is a text file containing a list of test names that are in your current directory

`program` - is an executable C++ program

Example:

*Inside suite.txt*

```bash
test1
test2
```

Then your directory will contain:

```
test1.in test1.out test2.in test2.out
```

#### Options:

By default, runSuite will simply run the program with the provided `.in` and `.out` files.

Here are some options that work with runSuite:

`--valgrind` - check your program for memory leaks by running valgrind on your program for each test

`-v` - enable `-v` option for valgrind to get more verbose output

`-sr` - enable `--show-reachable=yes` option for valgrind

`-stderr` - show messages to stderr. By default, stderr messages from the program will not show when using runSuite.
