# Code_Sandbox
A sandbox of code (mostly scripts) with which I tinker.
## Script Directory
1. log-off.bat - Windows batch file to log-off of the current user. 
2. minimum_remainder_investment.c - C file to calculate the number of shares from Company A and number from Company B to purchase in order to have the minimum amount leftover (remainder).  
	a. To run on Windows, install the .zip file from the Releases section here: https://github.com/skeeto/w64devkit/releases .

	b. Extract the .zip file and run the w64devkit.exe file. A command prompt environment will open.

	c. Navigate to where the minimum_remainder_investment.c file is saved.

	d. To create a C object file, use the command: gcc -o NAME_OF_OBJECT_EXECUTABLE minimum_remainder_investment.c

	e. To execute, run the command: ./NAME_OF_OBJECT_EXECUTABLE

4. mocking_spongebob.py - A script that takes an input string and alternates the case of each character of the input string to generate a caption for the mocking Spongebob meme template.
5. resume_builder.py - The exact location within my resume template for the position and company to which I was applying to changes location based on the content of the resume. To simplify updating my resume, I've created a script to pass position, company, and career statement arguments as arrays to the document merging process. Thus, the output resume files will automatically have distinct names based on the array element used as an argument in the for-loop iteration with which it was created. The next step is to make the key logic more modular.
6. shutdown.bat - Windows batch file to force shutdown the machine immediately.
