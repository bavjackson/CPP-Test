import importlib
from datetime import datetime

def test_integers():
    """
    Test that the correct integers have been assigned
    """
    from numbers_1.exercise import main
    
    actual_year = datetime.now().year
    assert actual_year == main.current_year
    assert main.hours_in_a_day == 24
    assert main.days_in_a_week == 7

def test_floats():
    """
    Test that the correct floats have been assigned
    """
    from numbers_1.exercise import main

    assert main.pi_to_three_places == 3.142
    assert main.chance_of_heads_in_coin_flip == 0.5

def test_print_year(capsys):
    """
    Test that the correct floats have been assigned
    """
    from numbers_1.exercise import main
    importlib.reload(main)

    captured = capsys.readouterr()
    actual_year = datetime.now().year
    assert str(actual_year) in captured.out.strip()