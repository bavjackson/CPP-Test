import os
import pathlib

def test_comment(capsys):
    """
    Tests a print statement is commented out and has not just been deleted
    """
    from comments.exercise import main
    captured = capsys.readouterr()
    assert captured.out == ""

    with open(os.path.join(pathlib.Path(__file__).parent, "..","exercise", "main.py"), "r") as file:
        content = file.read()
        assert "print(" in content