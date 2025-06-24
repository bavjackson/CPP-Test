<style>
code, pre {
  font-size: 0.9rem;
}
</style>

# Variables

## Learning
In programming, variables are like boxes where we can store information. Think of a variable as a labelled box where you can store a value, such as a number, word, or even more complex data. This value can be retrieved, updated or replaced as your program runs.

In Python, variables are incredibly versatile. You don't need to declare the type of data you want to store explicitly. Python will figure it out as you assign data to the variable (put information in the box). We use the equals sign ```=``` to make this assignment.

```python
name = "Ben"      # A word (string)
age = 25          # A number (integer)
is_happy = True   # True or False (boolean)
```

Variables names can't contain spaces or symbols, other than an underscore ```_```. They can't begin with a number, but can contain numbers after the first letter (e.g. ```nice_variable_8```).

Assigning variables is an important foundational skill for a new computer programmer. Let's use the ```lesson``` variable to assign different subjects to the Afternoon class and the Evening class. 

Using the ```print()``` function we can write the ```lesson``` variable to the Output after each reassignment to see the subject change. As Python will execute the script sequentially (from top to bottom), we will see the subject for the Morning class print first, and the Evening class print last.