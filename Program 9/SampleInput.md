# Input
```
Enter the no of empty frames: 3 
Enter the length of the string: 5 
Enter the string: hello 
```
# Expected Output
```
**** MENU **** 
1: FIFO 
2: LRU 
Enter your choice: 1 

PAGE	FRAMES	    FAULTS 
h	    h � � 	    Page fault 1 
e	    h e � 	    Page fault 2 
l	    h e l 	    Page fault 3 
l	    h e l 	    No page fault 
o	    o e l 	    Page fault 4 

Enter 1 to continue, 0 to finish: 1 

**** MENU **** 
1: FIFO 
2: LRU 
Enter your choice: 2 

PAGE	FRAMES	    FAULTS 
h	    h � � 	    Page fault 1 
e	    h e � 	    Page fault 2 
l	    h e l 	    Page fault 3 
l	    h e l 	    No page fault 
o	    e l o 	    Page fault 4 

Enter 1 to continue, 0 to finish: 0 
```