def test_hello_world(capsys):
    """
    Test main prints "Hello World!"
    """
    from hello_world.exercise import main

    captured = capsys.readouterr()
    assert "Hello World!" in captured.out.strip()


