# Week 1: **C Programming Basics**  
This week's session introduces the fundamentals of C programming, exploring its significance, core features, and foundational concepts.  

---

## **Topics Discussed**  

### **Why Learn C Programming?**  
C is an essential programming language for systems-level development and embedded systems due to:  
1. **Low-Level Memory Access**: Offers precise control using **pointers**.  
2. **Dynamic Memory Allocation**: Allows efficient management of system resources.  

#### **Why Not Python?**  
- Python uses an **interpreter** to execute code, which makes it slower than compiled languages like C.  
- Python’s abstraction layer relies on the operating system, making it less suitable for embedded systems where direct hardware interaction is necessary.  

#### **Why Not Assembly?**  
- Assembly language is hardware-specific, meaning code written for one microcontroller might not work on another without significant modification.  
- Assembly is harder to read, write, and debug compared to C, making development slower and less portable.  

---

### **Compilation Process**  
Understand how C code is converted into executable programs. Here are useful resources:  
- [C Compilation Process - TutorialsPoint](https://www.tutorialspoint.com/cprogramming/c_compilation_process.htm)  
- [Compilation Process in C - StackZero](https://www.stackzero.net/compilation-process-in-c/)  

---

### **Toolchains**  
#### Native Toolchain:  
- Tools for compiling code directly on your development machine.  

#### Cross Toolchain:  
- Tools for compiling code on one platform to execute on another (e.g., ARM-based devices).  
  [Learn More](https://www.linkedin.com/pulse/buildingcompilation-process-using-gnu-arm-toolchain-mohamed-ali/)  

---

### **Core Programming Concepts**  

#### **Variables in C**  
Variables are essential for managing data in C programming.  
![Visual Guide to C Variables](https://scienceprog.com/wp-content/uploads/2018/03/C_variables.jpg)  

#### **Escape Sequences and Format Specifiers**  
Learn tools to format output and handle special characters.  
- [Guide on Escape Sequences](https://www.codingeek.com/tutorials/c-programming/escape-sequences-and-format-specifiers-in-c-programming-language/)  

#### **C Operators**  
Operators allow efficient data manipulation.  
- [Comprehensive Overview of Operators in C](https://logicmojo.com/operators-in-c)  

---

## **Code Explanation from Tasks**  

### 1. **`getchar();`**  
Used to consume the newline character left in the input buffer after reading an integer. Prevents interference with subsequent input.  

### 2. **`fgets` with Null Termination**  
```c
// Reads a line of text (e.g., the student's name) into the student_Name array.
// It ensures safety by limiting the input size to prevent buffer overflow.
fgets(student_Name, sizeof(student_Name), stdin);

// Removing the newline (\n):
// strcspn(student_Name, "\n") identifies the newline's position.
// Replacing it with '\0' ensures a properly terminated string.
student_Name[strcspn(student_Name, "\n")] = '\0';
