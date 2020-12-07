# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` 
finish.close;
```

2. **What bug does the original code have?**
I didn't put the ()
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I thought it did not require it.
4. **How to correct the bug?**
Just need to add ()
5. **The corresponding bug-free code or code snippet is:**

```
finish.close();
```

6. **What is the take-away message from this bug?**
Make sure to double check my syntax
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
/*make a object*/
ifstream finish:

```

2. **What bug does the original code have?**

  The bug is using : instead of ;



3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
It was a typo
4. **How to correct the bug?**
I just need to use ;
5. **The corresponding bug-free code or code snippet is:**

```
/*make a object*/
ifstream finish;

```

6. **What is the take-away message from this bug?**
Make sure to double check my syntax
---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
finish.open(file);
while(finish & n>0)
```

2. **What bug does the original code have?**
I used & instead of &&
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I thought that one & would be enough.


4. **How to correct the bug?**
I have to use &&
5. **The corresponding bug-free code or code snippet is:**

```
finish.open(file);
while(finish && n>0)

```

6. **What is the take-away message from this bug?**

Always revisit notes to understand the concepts.
