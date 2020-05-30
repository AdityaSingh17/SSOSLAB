# Input (Round Robin)
```
Enter the number of jobs:
3

Enter Arrival & Burst time:
Job0: 1 24
Job1: 2 3
Job2: 3 3

1:Round Robin
2:Shortest Job First
1
Enter quantum size for Round Robin: 4
```

# Expected Output
```
The Round Robin schedule details are:

Job	TaT	WT
0	30	6
1	7	4
2	10	7
```

# Input (Shortest Job First)
```
Enter the number of jobs:
4

Enter Arrival & Burst time:
Job0: 0 8
Job1: 1 4
Job2: 2 9
Job3: 3 5

1:Round Robin
2:Shortest Job First
2
```

# Expected Output
```
The SJF schedule details are:

Job	TaT	WT
0	17	9
1	4	0
2	24	15
3	7	2
```