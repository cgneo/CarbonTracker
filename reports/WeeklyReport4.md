# Steven Van Heiningen 
This week I created more functionalities (login page, create account page) to the survey and merged my code with Andres. When merging we encountered several problems which delay our progress: Creation of useless files by QT, compatibility issues between Mac and Windows or the QT designer, different versions of QT between our computers.
Next week I will be continuing tackling these issues and we will merge the code of the different subteams in the UI team. I will also be working with the Data team to make sure we ask the user for the inputs needed in the data-part.

# Jade Rakotondradano
This week we were able to create the link with the API openfoodfacts and our project! I then worked on the classes and saw how we could complete them as well as finish the functions for these. I specifically worked on the Consumption and base_consuption classes and completed them with the necessary functions. For the coming week, I will make sure that all classes are complete and function by testing them. I will then make the link between what we get from the API and our classes.

# Cyrine Ben Tanfous
This week I mainly focused on designing the info/ Tips page, by choosing the good layouts, images, and content for the page. We also tried to understand how some features of qt widget works (colors, horizontality...) to make our design a bit more personalized to the CarbonTracker theme. I also did some research on how to concretely create the interactive page of the user and his friends (creation of a tree after collecting a certain number of seeds) but did not manage to implement it yet, so I plan on doing it next week, and also work with the other UI sub-teams to start implementing their parts on the general layout created by Dain and I.

# Nina Bili-Rossi 
This week I explored the features of Qt charts and created some dynamics pie charts and line charts. I worked on how to link the data with this new types of charts. I worked on a function which would make a pie slice explode when hovered, using slots and signals. I plan to continue this next week and soon be able to link the charts with actual data from the data team.

# Lucas Serog
This week I continued working on the classes we created for our application. I specifically worked on class inheritance and creating virtual functions in the classes as well as editing the classes to make sure shared functions with the same implementations did not repeat one another. Next week I plan on helping merge the UI code with the data teams code in order to get closer to the final product.

# Catalina Negoita
This week, I designed with Alejandro a draft of our Database. We decided on the tables with their attributes and on the relationships between them. Then, I started implementing it in MySQL locally. It is not finished yet, but next week, I plan on finalizing it. Once I get access on Zihui's server, I will be able to implement the database on his server.

# Marc Saouda
This week, I worked on establishing a connection with an API that will provide us with CO2 emission of transport. For that, I added a header to our request which will contain our unique API key and I sent a POST request with data and parameters to get back an accurate estimate of emission. Next week, I will work on hiding that API key so that not everyone has access to it and I will work on integrating the code of connection to API in the Transport class and optimizing that class.

# Jane Peltier
This week during the lecture, Nina and I succeeded in making QtCharts work on our computers.
I used the codes implemented last week :
“implementation of a code to create 2 types of bar charts in order to visualize carbon emission for each sector of emission (food, travel, home, etc), and to visualize your emission compared to the emission of other people (not finished yet)”
I did not finish the second code I mentioned however, I worked on making the graphs appear on a window with Qt Widget App and I modified the code to make the appearance of the graphs animated.
Next week I plan on finishing the two graphs, animating them, and most surely working on other graphs to implement, on the display of these graphs (asking help to the UI general layout and UI personnel info subteams). Nina and I also changed the distribution of graphs. Nina is now in charge of the line graph and I may help her if I finish my tasks early this week.

# Zhihui Li
This week I implemented session terminal program (previous weeks were GUI programs) because I tested on Ubuntu server, and it only accepts console program.
I fixed some bugs last week (for example QString::fromUtf8 causes problem on Linux, so I changed to QString::fromStdString), and I made terminal output colorful.
Another thing I did this week was to fix the server. My server on AWS had been having serious internal errors and I have no choice but to shut it down, wipe clean, and delete the instance. I have to create a new instance on AWS EC2. Next week, hopefully the server could be functional.

# Alejandro Christlieb
At the beginning of this week I worked together with Catalina and the server team to define the relationships between our classes and create the draft of the database. I also created the outline and the header files of the "BaseConcumption" and "Consumption" classes, adding comments and defining functions that were to be done by other data members. Additionally, I reviewed and tested the "Date" and "Receipt" classes, adding more particular methods that weren't defined yet and succesfully managing to create receipt objects with their respective date and duration attributes. Lastly, we had a meeting Sunday morning to distribute tasks for the following week, where I explained to my coworkers the methodologies to be followed in order to test the classes on the main, despite lacking some of the functions from other teammates. My goal for next week will be to ensure that the server team establish a connection between our SQL DB and our C++ application, as well as to make sure that the merging and testing of the UI and the classes goes smoothly. 

# Dain Jung
This week, I continued working on the profile section as planned. I worked on the detailed features to make it aesthetically pleasing and fixed the general layout to use the space more efficiently. Also, I communicated with Cyrine, my teammate for the general UI then divide the work to make the work flow more efficient.
Next week, we will continue working on general layout especially on the profile page. Also, the UI team will merge our code to avoid the potential conflict in the future.

# Amine Lamouchi 
This week, I created a functional program that allows us to retrieve information from openfoodfacts. After struggling to send queries with cURL, I switched to QNetwork thanks to the recommendation of Marc and Jade. Once I learned how to send queries (using QNetwork) and retrieve data (in a Json file), I used QJson to parse it and extract the information we needed (carbon footprint, product name, category etc…). The next step for me is to link this program to the OCR and write some error handling messages (mainly for food products that don’t figure in the database). This will be my objective for next week as we are starting to merge the sub-projects together.

# Andrés Orduña
This week I worked on adding more design updates to the survey, as well as adapt the templates we have created with the actual questions we thought of in the previous weeks. I merged my code with Steven’s to have a version of it closer to the final model (with functionalities, actual questions of the survey and a aesthetically pleasing user-friendly survey). We have some compatibility issues between our versions of Qt or our laptop systems which slowed us down in the merging process and running our codes in both of our computers. Next week, we have to settle those issues, and work with the data team to determine the more relevant survey questions with their available data. Moreover, we have to merge the user interface together to have a functional version of our desktop application by this week.
