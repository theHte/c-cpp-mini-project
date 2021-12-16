# MakeFile Template

## Steps for create your makefile

you need to install make

On linux `sudo <your-package-manager> make`

### replace <your-package-manager> with your package manager

## Template
create `Makefile` in your project

you can use this example

```
CC=gcc
CFLAGS=-Wall -g

main: <your-file>
	$(CC) $(CFLAGS) -o <your-output> <your-file>
```
