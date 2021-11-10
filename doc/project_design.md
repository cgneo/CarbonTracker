## Functionalities

- What will your project do, precisely?

CarbonTracker is a desktop GUI app that quantifies and analyzes CO2 emissions, using databases, by retrieving and computing the environmental impact of food, transport, and shopping on our everyday lifestyle.

Precisely, the specific functionalities that our application will have will be the following:

	•	Calculate footprint from manually inputted data, which primarily will be either food or transportation methods
	
	•	Retrieve the CO2 footprint from a supermarket bill in PDF format by uploading the file to the application 
	
	•	Track each users' footprint and display graphically their performance over time 
	
	•	Allow users to compete with friends by having a centralized server where information is uploaded
	
	•	Create individual and customizable profiles to simplify future calculations
	
	•	Have a display of general environmental awareness actions that can be done to decrease your footprint

Optional functionalities we would like to implement if we succeed with the previous:

	•	Giving each user personalized feedback based on their consumption habits
	
	•	Create friendly challenges between users to increase the usability
	
	•	Add a collection of rewards and achievements that can be awarded according to users' performance


## Deadlines and deliverables

- What intermediate deadlines do you have, and what subset of functionalities will you deliver in each deadline?

The following intermediate deadlines should allow all of our sub-teams to achieve their objectives on time to have a successful project:

	•	End of week 3 
	
		⁃	Data team: achieve a connection between database used (OpenFoodFacts) and our project. Specifically, being able to obtain the ecological
		footprint for any product 
	
	•	End of week 4 
	
		⁃	UI team: have a general structure of the whole project's user interface (precise details will be sorted out later)
	
		⁃	UI team: create the layout for the input forms to add data manually. Particularly, being ready to connect the user interface with the data 
	gathering. 
	
		⁃	Data team: have the OCR analysis done, that is, retrieving and parsing information from the analyzed PDF files appropriately.
	
		⁃	Server team: have the main functioning of the server, which implies being able to store and retrieve data from the central server.  	


## Software Architecture

- How are you sub-dividing your project?Which modules are you implementing?

The main modules we will have in our project are the following:  

	•	Data analysis and extraction: this team will be in charge of linking our project with the DB's and calculating the footprints. For this, we will be using OCR libraries (possibly Tesseract), as well as the API's of the OpenFoodFacts project. Thus, this module will be sub-divided into the following: 
	
		⁃	OCR and data scanning
	
		⁃	Data extraction from databases
	
	•	Server: this module will consist in the creation of a server through the Qt Networks Module. A central database to store the information of our users will be made in SQL or Mongo.
	
	•	User Interface: the front-end of the application will be developed through the QT Widget Application Modules and the QT GUI Modules. 	


- What external dependencies do you have? Why?

Some of the external dependencies that we have are the availability and functioning of the libraries that we will be using. Namely, these are some of the external libraries/sources whose implementation on different architectures or the project itself could be problematic:

	•	Tesseract - OCR C++ library
	
	•	OpenFoodFacts DB and Python API





