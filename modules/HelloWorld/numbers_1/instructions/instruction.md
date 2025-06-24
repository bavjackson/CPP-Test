<style>
code, pre {
  font-size: 0.9rem;
}
</style>

# Numbers

## Learning
Congratulations on debugging your first script. Now that you’ve tamed the errors, let’s dive into something a little more… *calculated*. We're going to look at how Python handles numbers. There are two data types we need to learn about: integers and floats.

Integers, or an ```int```, are whole numbers. They are counting numbers (e.g. 1, 2, 3) and include zero (0) and their negative counterparts. They are how you measure the number of people in a room or the score in a sports game.

Floats, or a ```float```, are decimal numbers. ```float``` is short for floating-point number. They're used when you want to represent fractions or need to measure to fine accuracy. For example, π is given to three decimal places as 3.142. If you calculate the average score of an eighth grade physics test, you likely end up with a decimal number (e.g. 82.7).

Integers and floats can be stored as variables, or can be used literally (i.e. directly typed out) when writing a program. Python can perform a variety of simple and complex operations on both integers and floats. It's like having a powerful calculator at your disposal.

```python
an_integer = 5
a_float = 10.5
print(an_integer + a_float)   # Will print 15.5

print(a_float - 3)            # Will print 7.5
```

You've been provided with an incomplete Python file containing the name of some common integers and floats. Fill them out with the appropriate values and then use the print function to display the ```current_year``` variable in the Output window.