<style>
code, pre {
  font-size: 0.9rem;
}
</style>

# Comments

## Learning

When we write code, we often want to insert text that will be ignored by the computer. This text is called a comment. Python will interpret any text on a line after a ```#``` as a comment.

Comments are an incredibly useful feature of most programming languages. They help to make the code more readable.

They are often used to provide a note for yourself or others to describe what a variable or function is doing:

```python
# This variable counts how many times "r" appears in the word strawberry
strawberry_r_count = 3

# This function calculates how many times "r" appears in the word strawberry
strawberry_r_count = calculate_r_no_in_strawberry()
```

You can also use comments to stop a section of code from running to experiment with new code or help with testing:

```python
# calculation_result = old_inefficient_function()
calculation_result = new_clean_function()
```

In future lessons, comments will be used to provide guidance for completing exercises.

Let's experiment with commenting in Python! Comment out the print statement in the accompanying Python script to prevent the text from displaying in the Output window.