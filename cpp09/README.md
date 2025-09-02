# C++ Standard Template Library

Standard Template Library (STL) is a collection of pre-built classes and functions that make it easy to manage data using common data structures like vectors, stacks, and maps. It saves time and effort by providing ready-to-use, efficient algorithms and containers.

## Components of STL

The components of STL are the features provided by STL in C++ that can be classified into 3 types:

- Containers
- Algorithms
- Iterators

These components are designed to be efficient, flexible, and reusable, making them an integral part of modern C++ programming.

## Containers

Containers are the data structures used to store objects and data according to the requirement. Each container is implemented as a template class that also contains the methods to perform basic operations on it. Every STL container is defined inside its own header file.

Containers can be further classified into 4 types:

- Sequence Containers
- Container Adaptors
- Associative Containers
- Unordered Associated Containers


## Algorithms

STL algorithms offer a wide range of functions to perform common operations on data (mainly containers). These functions implement the most efficient version of the algorithm for tasks such as sorting, searching, modifying and manipulating data in containers, etc. All STL algorithms are defined inside the `<algorithm>` and `<numeric>` header file.


## Iterators

Iterators are the pointer like objects that are used to point to the memory addresses of STL containers. They are one of the most important components that contributes the most in connecting the STL algorithms with the containers. Iterators are defined inside the `<iterator>` header file.


# Reverse Polish Notation (RPN)

Reverse Polish Notation is a way to write mathematical expressions without parentheses and without worrying about operator precedence.

- Normal math notation (infix notaton): `3 + 4`
- In RPN: `3 4 +`

So instead of writing `number` -> `operator` -> `number`, RPN writes `number` -> `number` -> `operator`.

Let's evaluate:

```
3 4 + 2 *
```

## Step 1: Start with an empty stack

```
stack: []
```

## Step 2: Read first token → `3`

It's a number → **push** it.

```
stack: [3]
```

## Step 3: Read next token → `4`

It's a number → **push** it.

```
stack: [3, 4]
```

## Step 4: Read next token → `+`

It's an operator → pop two numbers:

- Pop `4` and `3`.
- Compute `3 + 4 = 7`.
- Push `7` back.

```
stack: [7]
```

## Step 5: Read next token → `2`

It's a number → push it.

```
stack: [7, 2]
```

## Step 6: Read next token → `*`

It's an operator → pop two numbers:

- Pop 2 and 7.
- Compute 7 * 2 = 14.
- Push 14 back.

```
stack: [14]
```

## Step 7: End of expression

Final result = `14`


# Ford-Johnson algorithm - Merge-Insert Sort Algorithm

Let’s sort this example array:

```
[7, 2, 5, 3, 1, 6, 4]
```

## Step 1 — Split into small groups

We divide the array into small groups (usually 5 elements each or fewer).

```
Group 1: [7, 2, 5, 3, 1]
Group 2: [6, 4]
```

## Step 2 — Sort each group using Insertion Sort 🧩

Insertion Sort is very fast for small groups.

- Sort [7, 2, 5, 3, 1] → becomes [1, 2, 3, 5, 7]
- Sort [6, 4] → becomes [4, 6]

Now we have:

```
Group 1: [1, 2, 3, 5, 7]
Group 2: [4, 6]
```

## Step 3 — Merge groups using Merge Sort 🔄

Now we merge these sorted groups efficiently:
First merge:

```
[1, 2, 3, 5, 7] + [4, 6]
```

Compare first elements → take the smaller one each time:

```
[1, 2, 3, 4, 5, 6, 7]
```

✅ Final sorted array.