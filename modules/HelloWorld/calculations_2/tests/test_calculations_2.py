import os
import pathlib

def test_exponent():
    """
    Tests the correct result was achieved using the exponent operator
    """
    from calculations_2.exercise import main
    
    assert main.tiles_required == 5 ** 2

    with open(os.path.join(pathlib.Path(__file__).parent, "..","exercise", "main.py"), "r") as file:
        content = file.read()
        assert "**" in content

def test_modulo():
    """
    Tests the correct result was achieved using the modulo operator
    """
    from calculations_2.exercise import main
    
    assert main.leftover_tiles == 25 % 6

    with open(os.path.join(pathlib.Path(__file__).parent, "..","exercise", "main.py"), "r") as file:
        content = file.read()
        assert "%" in content