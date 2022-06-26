
-> We can encounter 2 types of errors : compile-time and run-time
    - Compile-time are errors with which the program cannot compile without resolving (undeclared use of a type... );
    - Run-time errors are those which either crashes the program or produce wrong output. (divide by zero);

-> We use exceptions to handle compile/run -time errors in the following aspects:
    - To allow a program to continue executing (the error have minor effect on the program).
    - To notify the user of the problem. (Interaction from user could resolve the issue).
    - Terminate the program in a controlled manner (instead of sudden crash. the program close with a justifiable msg);

-> Exception in c++ is a class which other exceptions classes are derived from in a speciality hierarchy:


                         ------------
                        | Exception  |
                        -------------
                        |   |        |
                        |   |        |
        ________________|   |   _____|_______
        |                   |  | logic_error |
 _______|_______            |  |_____________|
| runtime_error |           |           |
|_______________|           |           |________________________    __________________
        |                   |                                   |___| invalid_argument |
        |                   |______________________             |   |__________________|
________|________________________                  |            |     
|                               |                  |            |    __________________
|                               |                  |            |___|    length_error  | 
|________________         ______|__________        |            |   |__________________|
| overflow_error |       | underflow_error |       |            |    ___________________
|________________|       |_________________|       |            |___|   out_of_range   |
                                                   |                |__________________|
                                                   |
___________________________________________________|________________
|                       |                   |                      |
|_____________   _______|________   ________|________    __________|________
|  bad_alloc  | |    bad_cast    | |  bad_type_id   |   |   bad_exception   |
|_____________| |________________| |________________|   |___________________|

-> Exception class provides the `what()` virtual method for it's derivatives to describe their errors.
-> Exceptions 