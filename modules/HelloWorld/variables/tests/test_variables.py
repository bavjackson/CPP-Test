def test_variables(capsys):
    """
    Test that the lesson variable is reassigned twice
    """
    from variables.exercise import main
    captured = capsys.readouterr()
    output_lines = captured.out.splitlines()

    assert len(output_lines) >= 6
    morning_lesson = output_lines[1]
    afternoon_lesson = output_lines[3]
    evening_lesson = output_lines[5]

    assert morning_lesson != afternoon_lesson
    assert afternoon_lesson != evening_lesson