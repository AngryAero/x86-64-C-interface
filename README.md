## x86-64 C interface
This project is created to compare the performance of C and x86-64 assembly language.

Members: 
Cerezo, Aero John Mendoza
Chua, Micole Keesha Ang 


### Comparative Results
The following table shows the execution time of each vector size: $n = 2^{28}$, $n = 2^{24}$, $n = 2^{20}$ respectively.
| Trial No. | Execution Time in C | Execution Time in x86-64 | Trial No. | Execution Time in C | Execution Time in x86-64 | Trial No. | Execution Time in C | Execution Time in x86-64 |
|---|---|---|---|---|---|---|---|---|
| 1 | 1.080 | 0.786 | 1 | 0.038 | 0.038 | 1 | 0.003 | 0.002 |
| 2 | 1.093 | 0.718 | 2 | 0.045 | 0.042 | 2 | 0.003 | 0.003 |
| 3 | 0.650 | 0.606 | 3 | 0.039 | 0.039 | 3 | 0.003 | 0.002 |
| 4 | 0.610 | 0.592 | 4 | 0.041 | 0.038 | 4 | 0.002 | 0.002 |
| 5 | 0.614 | 0.612 | 5 | 0.043 | 0.039 | 5 | 0.003 | 0.003 |
| 6 | 0.622 | 0.600 | 6 | 0.040 | 0.040 | 6 | 0.003 | 0.003 |
| 7 | 0.623 | 0.607 | 7 | 0.039 | 0.038 | 7 | 0.003 | 0.002 |
| 8 | 0.613 | 0.605 | 8 | 0.039 | 0.038 | 8 | 0.003 | 0.003 |
| 9 | 0.637 | 0.683 | 9 | 0.039 | 0.038 | 9 | 0.003 | 0.002 |
| 10 | 0.614 | 0.613 | 10 | 0.038 | 0.038 | 10 | 0.003 | 0.003 |
| 11 | 0.619 | 0.605 | 11 | 0.039 | 0.038 | 11 | 0.003 | 0.003 |
| 12 | 0.613 | 0.613 | 12 | 0.038 | 0.038 | 12 | 0.003 | 0.003 |
| 13 | 0.629 | 0.609 | 13 | 0.038 | 0.038 | 13 | 0.003 | 0.003 |
| 14 | 0.621 | 0.613 | 14 | 0.043 | 0.044 | 14 | 0.002 | 0.002 |
| 15 | 0.618 | 0.606 | 15 | 0.039 | 0.038 | 15 | 0.002 | 0.002 |
| 16 | 0.820 | 0.607 | 16 | 0.038 | 0.039 | 16 | 0.004 | 0.002 |
| 17 | 0.622 | 0.603 | 17 | 0.039 | 0.038 | 17 | 0.003 | 0.003 |
| 18 | 0.617 | 0.608 | 18 | 0.040 | 0.039 | 18 | 0.003 | 0.002 |
| 19 | 0.619 | 0.607 | 19 | 0.041 | 0.038 | 19 | 0.003 | 0.002 |
| 20 | 0.616 | 0.612 | 20 | 0.041 | 0.038 | 20 | 0.003 | 0.003 |
| 21 | 0.680 | 0.611 | 21 | 0.039 | 0.038 | 21 | 0.003 | 0.002 |
| 22 | 0.621 | 0.611 | 22 | 0.039 | 0.039 | 22 | 0.002 | 0.002 |
| 23 | 0.620 | 0.609 | 23 | 0.038 | 0.038 | 23 | 0.003 | 0.003 |
| 24 | 0.626 | 0.606 | 24 | 0.038 | 0.038 | 24 | 0.003 | 0.003 |
| 25 | 0.619 | 0.612 | 25 | 0.039 | 0.039 | 25 | 0.003 | 0.002 |
| 26 | 0.621 | 0.611 | 26 | 0.039 | 0.037 | 26 | 0.003 | 0.002 |
| 27 | 1.029 | 0.790 | 27 | 0.045 | 0.038 | 27 | 0.003 | 0.003 |
| 28 | 0.632 | 0.617 | 28 | 0.039 | 0.038 | 28 | 0.003 | 0.003 |
| 29 | 0.629 | 0.609 | 29 | 0.039 | 0.038 | 29 | 0.003 | 0.003 |
| 30 | 0.618 | 0.605 | 30 | 0.039 | 0.038 | 30 | 0.003 | 0.002 |

---
The following table shows the average execution time of each vector size: $n = 2^{28}$, $n = 2^{24}$, $n = 2^{20}$ respectively.

| Vector Size | Average Execution Time in C | Average Execution Time in x86-64 |
|---|---|---|
| $2^{28}$ | 0.6748 | 0.6262 |
| $2^{24}$ | 0.0397 | 0.0386 |
| $2^{20}$ | 0.0029 | 0.0025 |

---
### Analysis
After running a series of test, the results shows a clear difference between C and x86-64 assembly. In all vector sizes, x86-64 performed better than the C version.
The cause of this better performance may be the fact that x86-64 is a lower level language than C. x86-64 works closer with the CPU than C. Therefore, the operations are more optimized than C.
However, the result is not the same case when tested in a different machine as seen this [report](https://docs.google.com/document/d/1ukZxdZWP0r6hB3OceCpBOVEX-klCIu30kQRAMjo-IMo/edit?usp=sharing). 
The probable cause may be the fetching of the instruction from the memory from the separate assembly code file.

---
### Screenshots
![image](https://github.com/user-attachments/assets/020a7d91-6400-43b3-a773-f3a2b23ce798)

### Video Demonstration


https://github.com/user-attachments/assets/059019aa-40e2-495e-98df-b3cea94930f5


