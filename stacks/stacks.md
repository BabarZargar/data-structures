# Stacks
> linear non primitive data structures where the data is stored in order block wise

> data is added and deleted from a common point known as top 

> LIFO: last in first out

## Stack terminology
1) Context: environment used by procedure or function during excution- arguments, local variables, global variables
2) Stack frame: region of stack where arguments, local variables and return address is stored when the function is called and involved 
3) Top: end of the stack where from insertion and deletion is done 
4) Stack overflow: top = max size - 1 (no more addition)
5) Stack underflow: top = -1 (no more deletion)

## Stack operations
1) Push (inserting an element)
2) Pop (deleting an element)
3) Traverse 

## Algorithm:
1) Push operation:
    Push (Top, maxsize, element)

    A) check the overflow condition:

        if (Top == Maxsize - 1)
        print "stack overflow"
        return

    B) else repeat step a to c until top = maxsize - 1:

        a) read element\
        b) Top = Top + 1\
        c) set stack[Top] = element

    C) Return

2) Pop:
    Pop(Top, element)

    A) check for underflow condition:
    
        if(Top == -1)then
        print "stack underflow"
        return

    B) else repeat a to b until top == -1:

        a) set element = Stack[Top]
        b) Top = Top - 1

    C) Return

3) Traverse:
    Traverse(Top)

    A) Check for underflow condition

        if (Top == -1) then
        print "Stack is empty"
        return

    B) Else repeat steps a to b until Top == -1:

        a) Print Stack[Top]
        b) Top = Top - 1

    C) Return


