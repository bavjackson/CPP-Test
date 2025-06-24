def test_multiplication():
    """
    Tests the variables were multiplied together
    """
    from calculations_1.exercise import main
    
    assert main.hours_in_a_week == 24 * 7

def test_division():
    """
    Tests the variables were divided
    """
    from calculations_1.exercise import main

    assert main.circle_diameter == 10 / 3.142