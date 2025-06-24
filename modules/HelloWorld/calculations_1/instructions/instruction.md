<style>
code, pre {
  font-size: 0.9rem;
}
</style>

# Calculations, Part 1

## Learning
So far you've learned about variables and how Python treats numbers. Variables are like named boxes for data, and numbers can be either integers (whole numbers) or floats (numbers with decimal points).

But programming isn’t just about storing data—it’s also about working with that data to do useful things. Python lets you use both simple and complex mathematical operations to perform calculations. You should be familiar with addition ```+```, subtraction ```-```, multiplication ```*```, and division ```/```.

```python
a = 12
b = 3

summation = a + b     # Addition
difference = a - b    # Subtraction
product = a * b       # Multiplication
quotient = a / b      # Division

print(summation)      # Will print 15
print(difference)     # Will print 9
print(product)        # Will print 36
print(quotient)       # Will print 4.0
```

Notice when we perform division, the result has a decimal place. Python will convert all integers to floats before it carries out this operation.

Python will also raise a ```ZeroDivisionError``` if you attempt to divide by 0. So you should probably avoid doing that.

You're now going to put your mathematical skills to the test with the help of Python. Multiply together the integers and floats provided in the Python file to calculate values for the ```hours_in_a_week``` and ```circle_diameter``` variables.