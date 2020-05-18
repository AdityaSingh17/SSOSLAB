# SSOSLAB
This repository contains lab programs for System Software and Operating System laboratory (17CSL67).

## Installing Lex and YACC on Ubuntu
```
sudo apt update
sudo apt install flex bison
```

## General Execution steps for:

### Lex programs
```
lex prog.l
cc lex.yy.c
./a.out
```

### YACC programs
```
lex prog.l
yacc -d prog.y
cc lex.yy.c y.tab.c
./a.out
```
