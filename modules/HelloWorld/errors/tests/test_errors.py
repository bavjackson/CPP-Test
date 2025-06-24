import os
import pathlib

def test_errors():
    """
    Test that all errors in the code are resolved and a print statement remains in the file
    """
    from errors.exercise import main

    with open(os.path.join(pathlib.Path(__file__).parent, "..","exercise", "main.py"), "r") as file:
        content = file.read()
        assert "print(" in content


