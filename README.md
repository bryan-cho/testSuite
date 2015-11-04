# runSuite

Testing script  made to test small C++ programs using bash.

Please star if you benefited from this script!

Contains: 

* [runSuite](#runsuite) - the actual testing script
    * [Aliasing](#aliasing)
    * [Usage](#usage)
    * [Options](#options)
* [createSuite](#createsuite) - script that generates suite files for your convenience.

## runSuite

#### Aliasing:

To use runSuite from any directory add this line to your `.bashrc`:

```bash
alias runSuite='~/[cloned directory]/runSuite'
```

#### Usage:

runSuite takes a program and runs it using provided `.in` and `.out` files. 

`.in` - contains input that the program will take in using STDIN

`.out` - contains expected output from the program being run with corresponding `.in` file

**To run**:

```bash
runSuite suitefile program [-valgrind] [-v] [-sr] [-stderr]
```

`suitefile` - is a text file containing a list of test names that are in your current directory

`program` - is an executable C++ program

**Example**:

*Inside suite.txt*

```bash
test1
test2
```

Then your directory will contain:

```
test1.in test1.out test2.in test2.out
```

Try the sample tests!

```bash
cd sample-tests
runSuite suite1.txt ./helloworld
runSuite suite1.txt ./helloworldbad
```

![Picture 1](https://github.com/bryanc208/testSuite/blob/master/sample1.png "Sample good outcome")

![Picture 2](https://github.com/bryanc208/testSuite/blob/master/sample2.png "Sample fail outcome")

**NOTE**: Change `runSuite` to `../runSuite` if you have not aliased the script in your `/.bashrc`!

#### Options:

By default, runSuite will simply run the program with the provided `.in` and `.out` files.

Here are some options that work with runSuite:

* `-valgrind` - check your program for memory leaks by running **valgrind** on your program for each test.

**NOTE**: This will only work if you have **valgrind** installed on your machine. There are some known problems with **valgrind** on Mac OS X so the behavior may be different than when used on a Linux machine.

* `-v` - enable `-v` option for valgrind to get more verbose output

* `-sr` - enable `--show-reachable=yes` option for valgrind

* `-stderr` - show messages to stderr. By default, stderr messages from the program will not show when using runSuite.

## createSuite:

For convenience, there is a script `createSuite` provided to easily make suite files for tests in the current directory.

Simply run the script with a name for the suite file and the suite file will be generated in the current directory.

**Usage**:

```bash
createSuite suitefile.txt
```


