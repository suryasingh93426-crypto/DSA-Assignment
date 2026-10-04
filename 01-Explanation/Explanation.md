Q1. Stack Using Array

What is a Stack?

A Stack is a linear data structure in which insertion and deletion of elements are performed from only one end, called the TOP.

A stack follows the LIFO (Last In, First Out) principle.

This means the element inserted last is removed first.

Example :

Suppose we insert:

10 → 20 → 30

The stack looks like:

TOP → 30
      20
      10

If we perform POP, 30 will be removed first.

Basic Operations of Stack

A stack mainly supports four operations:

1. PUSH()

PUSH is used to insert a new element into the stack.

Example:

PUSH(10)
PUSH(20)
PUSH(30)

Stack:

TOP → 30
      20
      10

The new element is always inserted at the TOP.

Time Complexity: O(1)

2. POP()

POP is used to remove the top element from the stack.

Example:

TOP → 30
      20
      10

After POP:

TOP → 20
      10

Therefore, 30 is removed.

Time Complexity: O(1)

3. PEEK()

PEEK is used to view the top element without removing it.

Example:

TOP → 30
      20
      10

PEEK returns:

30

The stack remains unchanged.

Time Complexity: O(1)

4. DISPLAY()

DISPLAY is used to show all elements present in the stack.

Example:

TOP → 30
      20
      10

Output:

30 20 10

Time Complexity: O(n)

Stack Overflow

Stack Overflow occurs when we try to insert an element into a stack that is already full.

For example, if the stack capacity is 5:

10 20 30 40 50

If we try to insert another element:

PUSH(60)

Stack Overflow occurs.

The new element cannot be inserted.

Stack Underflow

Stack Underflow occurs when we try to remove an element from an empty stack.

For example, if the stack is empty and we perform:

POP()

Stack Underflow occurs because there is no element available to remove.

Stack Time Complexity

Operation

Time Complexity

PUSH

O(1)

POP

O(1)

PEEK

O(1)

DISPLAY

O(n)

Stack Space Complexity

When a stack is implemented using an array of size n, its space complexity is:

O(n)


---------------------------------------------------------------------------------------------------------------


Q2. Circular Queue Using Array

What is a Queue?

A Queue is a linear data structure in which insertion is performed from the REAR and deletion is performed from the FRONT.

A queue follows the FIFO (First In, First Out) principle.

This means the element inserted first is removed first.

Example

Suppose we insert:

10 → 20 → 30

The queue looks like:

FRONT → 10  20  30 ← REAR

When DEQUEUE is performed, 10 is removed first.

What is a Circular Queue?

A Circular Queue is a type of queue in which the last position of the array is connected back to the first position.

It treats the array as a circle.

This allows the queue to reuse the empty positions created after deletion.

Basic Structure

      ┌───────────────────┐
      ↓                   │
[0] [1] [2] [3] [4] ─────┘

After reaching the last index, the REAR can move back to index 0 if space is available.

Operations of Circular Queue

A circular queue mainly supports four operations:

1. ENQUEUE()

ENQUEUE is used to insert a new element into the queue.

The new element is inserted at the REAR.

Example:

ENQUEUE(10)
ENQUEUE(20)
ENQUEUE(30)

Queue:

FRONT → 10  20  30 ← REAR

Time Complexity: O(1)

2. DEQUEUE()

DEQUEUE is used to remove an element from the queue.

The element is removed from the FRONT.

Example:

FRONT → 10  20  30 ← REAR

After DEQUEUE:

FRONT → 20  30 ← REAR

Therefore, 10 is removed.

Time Complexity: O(1)

3. FRONT()

The FRONT operation is used to view the element present at the front of the queue without removing it.

Example:

FRONT → 10  20  30 ← REAR

FRONT returns:

10

Time Complexity: O(1)

4. DISPLAY()

DISPLAY is used to show all the elements currently present in the circular queue.

Example:

FRONT → 10  20  30 ← REAR

Output:

10 20 30

Time Complexity: O(n)

Why is Circular Queue Better Than Linear Queue?

In a simple linear queue, after deleting elements from the front, empty positions can be created at the beginning.

Example:

[ ] [ ] [30] [40] [50]

The first two positions are empty.

If the REAR has already reached the last index, a linear queue may not be able to use these empty positions.

This causes wastage of memory.

A circular queue solves this problem by allowing the REAR to move back to the beginning of the array.

Therefore, the available memory is utilized more efficiently.

Full and Empty Conditions in Circular Queue

Empty Queue

A circular queue is empty when there are no elements in it.

In the array implementation:

FRONT = -1

indicates an empty queue.

--Full Queue--

A circular queue is full when the next position of REAR is the FRONT position.

The condition is:

(REAR + 1) % MAX == FRONT

When this condition is true, no more elements can be inserted.

**Time Complexity of Circular Queue**

Operation                   Time Complexity

ENQUEUE()                      O(1)

DEQUEUE()                      O(1)

FRONT()                        O(1)

DISPLAY()                      O(n)

**Space Complexity**

If the circular queue uses an array of size n, its space complexity is:

O(n)


Que--  Linear Queue vs Circular Queue



Feature                         Linear Queue                Circular Queue

Principle                        FIFO                         FIFO

ENQUEUE                          O(1)                         O(1)

DEQUEUE                          O(1)                         O(1)

DISPLAY                          O(n)                         O(n)

Memory utilization               Less efficient               More efficient

Reuse of empty positions         Limited                      Yes

Structure                        Linear                       Circular