# Linux Shell in C

Simple Linux shell written in C.

## What Does It Do?

Executes built-in commands:

* cd
* help
* exit
* pwd
* history
* ! (executes previous command)
* !n (executes nth previous commands)

Executes external commands by forking child process.

## Built With

* C
* Linux Ubuntu

## Usage/

Compile shell.c from Linux terminal.

```c
gcc -o shell shell.c
```

Execute the program.

```c
./shell
```

You are now in the shell. Exit to quit.

```c
>> help
>> pwd
>> [...]
>> exit
```

## Author

**Laura Kocubinski** [laurakoco](https://github.com/laurakoco)

## Acknowledgments

* Boston University MET Master Science Computer Science Program
* MET CS 575 Operating Systems