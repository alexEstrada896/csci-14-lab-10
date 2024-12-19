. (5 pts) Write a complete program in C++ that mixes two primary colors to get a secondary color.

Your program should prompt the user to enter the names of two primary colors to mix. The colors red, blue, and yellow are known as the primary colors because they cannot be made by mixing other colors. When you mix two primary colors, you get a secondary, as shown here:

When you mix red and blue, you get purple.
When you mix red and yellow, you get orange.
When you mix blue and yellow, you get green. 
Your program must implement input validation. If the user enters anything other than "red," "blue," or "yellow," the program should display an error message (also prints error message if user inputs two same colors). Otherwise, the program should display the name of the secondary color that results from the mixing along with the two primary colors the user entered. 

Sample output on invalid input:

Your input is invalid. Please enter red, blue, or yellow.
Sample output on valid input:

Mixing red and yellow creates orange.
q2 incorrect output
2. (5 pts) Write a complete program in C++ that prompts the user to enter the names of three runners and the time it took (in seconds) each of them to finish a race. The program should display who came in first, second, and third place. Your program must also implement input validation (assume the user will at least enter numbers for times). It should only accept positive numbers for the times.  

Sample valid input and output.

Input:

What is the name of the runner 1: Alex
What is their time (in seconds) to finish the race: 75
What is the name of the runner 2: Jordan
What is their time (in seconds) to finish the race: 67
What is the name of the runner 3: Taylor
What is their time (in seconds) to finish the race: 89 
Output:

Jordan came in first place, Alex came in second place, and Taylor came in third place.
