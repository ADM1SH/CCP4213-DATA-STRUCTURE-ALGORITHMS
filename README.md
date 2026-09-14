# CCP4213: Data Structures & Algorithms

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B17-00599C.svg?logo=cplusplus)](https://en.cppreference.com/)
[![Build: Make](https://img.shields.io/badge/Build-Makefile-orange.svg)](Makefile)
[![Institution: MMU](https://img.shields.io/badge/Institution-Multimedia_University-blue.svg)](https://www.mmu.edu.my/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

Official coursework, laboratory exercises, and algorithmic projects for CCP4213: Data Structures and Algorithms at Multimedia University (MMU).

## Description
This repository contains complete implementations and benchmarks of abstract data types (ADTs) and foundational algorithmic paradigms in modern C++. Every data structure is built from first principles to demonstrate internal memory layouts, pointer manipulation, and asymptotic runtime trade-offs.

### Core Topics Covered
* **Linear Structures**: Singly linked lists, doubly linked lists, circular buffers, stack ADTs (array and pointer based), and FIFO queues.
* **Hierarchical Trees**: Binary Search Trees (BST), AVL balanced trees with single/double rotations, and binary heap priority queues.
* **Graphs and Networks**: Adjacency list and matrix representations, Breadth-First Search (BFS), Depth-First Search (DFS), and shortest path algorithms.
* **Sorting and Search**: Comparative study of Quicksort, Mergesort, Heapsort, Radix sort, and binary search with boundary analysis.

## Repository Layout
```text
CCP4213-DATA STRUCTURE & ALGORITHMS/
├── class/              # Lecture code samples and theoretical demonstrations
├── lab/                # Weekly laboratory assignments and verified solutions
├── midtermLockin/      # Intensive midterm revision problems and exam patterns
├── project/            # Comprehensive course project implementing complex ADTs
├── revision/           # Algorithmic drill exercises and past exam implementations
└── Revision_Master/    # Consolidated review modules for final assessments
```

## Requirements
* Compiler: GCC `g++` (version 9.0+) or Clang (version 10.0+) supporting C++17
* Build System: GNU Make
* Memory Debugger: Valgrind (Linux) or ASan (AddressSanitizer on macOS)

## Installation & Compilation
Clone the repository:
```bash
git clone https://github.com/ADM1SH/CCP4213-DATA-STRUCTURE-ALGORITHMS.git
cd CCP4213-DATA-STRUCTURE-ALGORITHMS
```

Compile a specific laboratory or revision module with full diagnostic warnings:
```bash
g++ -std=c++17 -O2 -Wall -Wextra -Wpedantic -fsanitize=address -o bst_demo lab/bst_implementation.cpp
```

## Usage
Run the compiled binary:
```bash
./bst_demo
```

Run Valgrind memory leak verification:
```bash
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./bst_demo
```

## Support
For questions, clarifications, or reporting issues:
https://github.com/ADM1SH/CCP4213-DATA-STRUCTURE-ALGORITHMS/issues

## Roadmap
* [x] Implement linear data structures (Lists, Stacks, Queues).
* [x] Implement non-linear tree structures (BST, AVL, Heaps).
* [x] Complete laboratory exercises and midterm revision modules.
* [x] Implement final course project.
* [ ] Add automated GoogleTest suite for regression verification.

## Contributing
1. Fork this repository.
2. Create your branch: `git checkout -b feature/heap-sort-optim`.
3. Commit clean, commented code: `git commit -m "feat: add iterative heapsort"`.
4. Push and open a Pull Request.

## Authors and Acknowledgment
* **Adam Anwar** (ADM1SH) - Implementation and optimizations.
* **Multimedia University (MMU)** - Course syllabus, laboratory specifications, and guidance.

## License
Released under the MIT License. See `LICENSE` for details.

## Project Status
Completed university coursework. Maintained as a high-quality reference for C++ data structures and algorithmic implementations.
