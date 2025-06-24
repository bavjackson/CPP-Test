<style>
code, pre {
  font-size: 0.9rem;
}
</style>

# Calculations, Part 2

## Learning
Great work so far! You’ve learned how to use Python for basic arithmetic and calculations. But sometimes, math requires a bit more *power* or precision. That’s where the exponent ```**``` and modulo ```%``` operators come into play.

The exponent operator raises one number to the power of the base. In school you were probably used to seeing powers written as superscript numbers (smaller numbers written above and to the right-hand side of the base number). Since we can't do this with a keyboard, we use the ```**``` operator.

```python
base = 2
power = 3

result = base ** power  # 2 raised to the power of 3
print(result)           # Will print 8
```
In this example, ```2 ** 3``` means 2 x 2 x 2 = 8. The exponent operator is very useful when dealing with squares, cubes, and other powers.

The modulo operator calculates the remainder after one number is divided by another. Imagine you’re sharing sweets with your friends: how many are left after everyone gets an equal share?

```python
total_candies = 14
friends = 4

remainder = total_candies % friends
print(remainder)  # Will print 2
```

In this case, if you divide 14 sweets among 4 friends, each gets 3 candies, and there’s 2 left over.

Let's put these new tools to use. Imagine you’re refurbishing a square room with tiles. Each tile is a perfect 1 by 1 meter square, and you want to ensure your room is fully covered. Calculate the number of tiles required if each side of the room is 5 meters in length. If tiles come in packs of 6, how many spare tiles will you have after buying enough packs to completely tile the room.