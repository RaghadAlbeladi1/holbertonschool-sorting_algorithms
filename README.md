  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" alt="C logo" width="60" height="60"/>
  &nbsp;&nbsp;
 

<div align=center>  
    <img  
    style="text-align:center"  
    src="https://raw.githubusercontent.com/coding-max/hbtn_config/main/assets/head_low-level.png"  
    alt="Holberton School"/>  

![Willy Wonk](https://raw.githubusercontent.com/RaghadAlbeladi1/holbertonschool-sorting_algorithms/main/willy-wonk.png)  
<h1 align="center">C - Sorting Algorithms & Big O</h1>
<br> 
</div>


### Description
Team project.focuses on implementing classic sorting algorithms using the C programming language.  
The goal is to deeply understand how different algorithms perform, compare their time complexities using **Big O notation**, and master low-level programming techniques such as pointer manipulation and memory management.

In addition to implementation, we learned to test, debug, analyze performance, and collaborate effectively using Git and GitHub.

--- 

### Requirements
- Ubuntu 22.04 LTS is used for compilation and testing.
- No use of global variables.
- No use of standard library functions (e.g., `printf`, `puts`) unless explicitly allowed.
- All `.c` and `.h` files must comply with the **Betty coding style**.
- All output files and answers must end with a newline.
- Time and space complexities must follow short Big O notation:
  - `O(1)`, `O(n)`, `O(n^2)`, `O(nlog(n))`, `O(log(n))`, `O(n!)`

--- 
<div align="center">

### Raghad Albeladi

| File               | Description                                                                 |
|--------------------|-----------------------------------------------------------------------------|
| sort.h             | Header file with prototypes and typedefs for sorting algorithms.           |
| 0-bubble_sort.c    | Bubble Sort algorithm implementation for integer arrays.                   |
| 2-selection_sort.c | Selection Sort algorithm implementation for integer arrays.                |

*Raghad implemented header file `sort.h` and worked on the Bubble Sort and Selection Sort algorithms (tasks 0 and 2), including complexity files.*

---

### Najwa Aljunaidel

| File                     | Description                                                                      |
|--------------------------|----------------------------------------------------------------------------------|
| 1-insertion_sort_list.c  | Insertion Sort algorithm implementation for doubly linked lists.                |
| 3-quick_sort.c           | Quick Sort algorithm implementation for integer arrays.                         |

*Najwa focused on the Insertion Sort algorithm (task 1) and Quick Sort algorithm (task 3), including complexity files.She also ensured the files are Betty compliant.*

</div>

</div>


---

### Team Project Summary

This project on C - Sorting Algorithms & Big O was developed collaboratively by Raghad Albeladi and Najwa Aljunaidel. We divided the tasks to maximize efficiency and leverage our individual strengths. I (Raghad) implemented the header file sort.h and worked on the bubble sort, selection sort, and quick sort algorithms (tasks 0, 2, and 3). Najwa focused on the insertion sort algorithm (task 1). Throughout the project, we coordinated closely to ensure code consistency, maintainability, and adherence to project requirements. Our combined efforts resulted in a comprehensive understanding of sorting techniques and their complexities, and we thoroughly tested each algorithm to ensure correctness and performance.

---
## Big O Complexity

| Algorithm        | Best Case | Average Case | Worst Case |
|------------------|-----------|--------------|-------------|
| Bubble Sort      | O(n)      | O(n^2)       | O(n^2)      |
| Insertion Sort   | O(n)      | O(n^2)       | O(n^2)      |
| Selection Sort   | O(n^2)    | O(n^2)       | O(n^2)      |
| Quick Sort       | O(nlog(n))| O(nlog(n))   | O(n^2)      |


## Compilation / Instalistaion
      To compile all files and generate an executable `sort`:
      
![C5FOCL4VcAEeMqn](https://github.com/user-attachments/assets/d8588522-f21c-41fe-b851-710b7d1a1a2f)

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sort
```

To run a specific sorting algorithm:

```bash
./sort
```

Or you can test specific algorithms using the provided `main` files:

```bash
gcc -Wall -Wextra -Werror -pedantic print_array.c bubble_sort.c 0-main.c -o bubble
./bubble
```

---
## Examples
### Example 1: Testing Bubble Sort

Suppose you have an integer array:

```c
int array[] = {5, 2, 9, 1, 5, 6};
size_t size = sizeof(array) / sizeof(array[0]);
``` 
You run the bubble sort function on this array, and it should sort the array in ascending order.Expected output after sorting:
```c
1, 2, 5, 5, 6, 9
```
### Example 2: Testing Insertion Sort on Doubly Linked List

Suppose you have a doubly linked list created from the following integer array:

```c
int array[] = {8, 3, 7, 4, 9};
size_t size = sizeof(array) / sizeof(array[0]);
listint_t *list = create_listint(array, size);
```
You run the insertion sort function on this doubly linked list, and it should sort the list in ascending order.
Expected output after sorting:
```c
3, 4, 7, 8, 9
```












---
## Testing

To test each algorithm:  
Run the corresponding main file with the algorithm and `print_array.c` / `print_list.c`

Example for testing Quick Sort:

```bash
gcc -Wall -Wextra -Werror -pedantic print_array.c quick_sort.c 3-main.c -o quick
./quick
```
---
## Authors


<table align="center">
  <tr>
    <td align="center">
      <img src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExd25mdmozcjhzbzRhc3BnNGg3bDdpOTg3Z3Jla3gwdHZuaXM4bWhzdiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9cw/otuYfiaJeYSM05ECs5/giphy.gif" width="100" height="100" style="border-radius: 50%;" alt="Raghad GIF" /><br />
      <a href="https://github.com/RaghadAlbeladi1">Raghad Albeladi</a>
    </td>
    <td align="center">
      <img src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExd25mdmozcjhzbzRhc3BnNGg3bDdpOTg3Z3Jla3gwdHZuaXM4bWhzdiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9cw/otuYfiaJeYSM05ECs5/giphy.gif" width="100" height="100" style="border-radius: 50%;" alt="Najwa GIF" /><br />
      <a href="https://github.com/NajwaAljunaidel">Najwa Aljunaidel</a>
    </td>
  </tr>
</table> 
<div align="center" style="margin-top: 30px;">
  <img src="https://github.com/user-attachments/assets/5f8d33ce-fed8-438a-935c-a9916afef26e" alt="Holberton logo" width="150" height="75" style="margin-right: 20px;" />
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/e/e2/Tuwaiq_Academy_Logo.svg/2560px-Tuwaiq_Academy_Logo.svg.png />
</div>




