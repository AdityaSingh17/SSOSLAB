# Input

```
Enter input string:
id+id*id
```

# Expected Output

```
GRAMMAR is
E->E+T|T
T->T*F|F
F->(E)|id


Stack	Input		Action

$id	  +id*id$	SHIFT->id
$T	  +id*id$	REDUCE TO T
$E	  +id*id$	REDUCE TO E
$E+	   id*id$	SHIFT->symbol
$E+id	 *id$	SHIFT->id
$E+F	 *id$	REDUCE TO F
$E+T	 *id$	REDUCE TO T
$E+T*	  id$	SHIFT->symbol
$E+T*id	   $	SHIFT->id
$E+T*F	   $	REDUCE TO F
$E+T	   $	REDUCE TO T
$E	       $	REDUCE TO E

String accepted
```
