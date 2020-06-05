# Input

```
Enter the 0 production	E->E+T
Enter the 1 production	E->T
Enter the 2 production	E->T*F
Enter the 3 production	T->F
Enter the 4 production	F->(E)
Enter the 5 production	F->a

The productions entered
 E->E+T
 E->T
 E->T*F
 T->F
 F->(E)
 F->a
0 E->E+T
1 E->T
2 E->T*F
3 T->F
4 F->(E)
5 F->a
Enter the input:	a*a+a

```

# Expected Output

```
Stack		Symbol		Input			Action
______		______		_____			______
  0  5        a			*a+a$			Shift
  0  3        F			*a+a$			Reduce r6F->a
  0  2        T			*a+a$			Reduce r4T->F
  0  2  7    T*			a+a$			Shift
  0  2  7  5    T*a			+a$			Shift
  0  2  7 10    T*F			+a$			Reduce r6F->a
  0  1        E			+a$			Reduce r3E->T*F
  0  1  6    E+			a$			Shift
  0  1  6  5    E+a			$			Shift
  0  1  6  3    E+F			$			Reduce r6F->a
  0  1  6  9    E+T			$			Reduce r4T->F
  0  1        E			$			Reduce r1E->E+T
  0  1        E			$			Accept parsing
______		______		_____			______


```
