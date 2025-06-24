# MyNumber Exercise
## + operator

The starting point for this exercise is the completion of the previous exercise.  The objective is to complete the class, by adding a plus operator.

Whilst the current version of the class will compile and run with current code.  Uncomment the use of the binary plus operator.  A number of uses are illustrated, to reflect the requirement to provide a symetric binary plus operator.  It is now necessary to provide an implementation of the plus operator.

In order to provide a symmetric binary plus operator, this would need to be provided as a global operator function.  Essentially two options are available, one is as a 'friend', whilst the other approach does not require friendship and simply calls a public member function.  The latter option is more flexible.

