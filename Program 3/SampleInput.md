# Input
```
Enter production 0: A->aBa
Enter production 1: B->bB|#

First Set
Enter First(A): a
Enter First(B): b#

Follow Set
Enter Follow(A): $
Enter Follow(B): a

If no entry, enter err
M[0,0] M[A,a] = A->aBa
M[0,1] M[A,b] = err
M[0,2] M[A,$] = err
M[1,0] M[B,a] = B->#
M[1,1] M[B,b] = B->bB
M[1,2] M[B,$] = err

Stack $A
Enter the input 	abba$
```
# Expected Output
```
M[0,0]  M[A,a] = A->aBa
M[1,1]  M[B,b] = B->bB
M[1,1]  M[B,b] = B->bB
M[1,0]  M[B,a] = B->#
 ch = $ StackTop = $  abba$ is Accepted
```