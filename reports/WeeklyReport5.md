# Lucas Serog
This week I mainly continued merging classes. I looked at the receipt and consumption classes and looked at how to rewrite the functions so they make sense when the user interacts with the interface. Next week I'd like to finish this and merge with the ui team.

# Andrés Orduña
This week I solved the issues between the compatibility of my code in my Qt creator and other devices, which took me some time to figure out. I started working with the data team to determine the useful data they could use to compute the carbon footprint with their known data bases. I therefore redesigned a bit the questions for the user to input data.

Next week we will merge more of our work between the UI team and the data team.

# Marc Saouda
This week, I hid the API key in a txt file and created a function that would retrieve it and add it to the header of the URL request. I also did further research on the API to know how to better use it. I can now send requests to the API with input parameters and retrieve accurate estimation of emitted CO2 quantity. Next week, I am going to work with UI team and Data team to start the merging process and work to improve our classes.

# Cyrine Ben Tanfous
This week, I focused on finishing the info/tips tab implementing the different sections of the page, and I managed to change the design of my widgets in order to make all of the interface coherent with Dain, since we have chosen the final theme of the UI after looking at some inspirations. However, I have some issues with implementing images in the tab, I tried three different methods but still didn't manage to solve this problem.
Hence, next week, in addition to merging all of the ui team's parts together, I will try to solve this issue, and finalize the text that I will display in the different info and tips widgets.

# Jade Rakotondradano
This week I implemented some functions in the food class that would be compatible with the functions that read and decode a food item from a receipt scan (which extracts a barcode of the food item). From this, we will be merging with other work by different members of the data team so that we can begin testing what we have done.

# Dain Jung
This week, I implemented the progress bar to show your progress of daily challenges and some push button to input the activities (open another tab and be able to answer the survey that other subgroup of UI has worked on).

Next week, I am going to move on to merge with graphs and survey subgroups to make the profile page more complete. Also, I will start working on the leader board/ ranking page with the server team.

# Nina Bili Rossi
this week I worked on exploding pie slices on my donut chart. I should be completely done with this part now. Once this was done I worked on manipulating line graphs. In particular, I worked on the legends and how to change the axes (for different time scales for instance, as we want to use them to represent carbon footprint over time)

# Alexandra Catalina Negoita
This week, I implemented functions that create, read and write a JSON file. I created a new folder server-user, where I implemented a JSON file of nested dictionaries with attributes that retrieve information from the user. I used QJsonDocument that provides methods for reading and writing JSON documents, and QJsonParseError in order to report errors in JSON parsing. It is not finished yet, but it shows the the information that needs to be given by the user to the server, such as username, age, country, etc. Next week, I will work on coding the tests for our project.

# Jane Peltier
This week, I managed to create tabs to display graphs on each tab. I personalized the graphs with the information and units that needed to be displayed. As I had errors appearing from nowhere on my code before the TD, Nina and I’s codes could not be merged Monday. We will try to merge them by the end of the week or next Monday. Next week I plan on writing code to create a summary page with three graphs for the user to see his overall carbon emission, and I will try to make the menu graph fancier and animated (already started this week).

# Zhihui Li
Zhihui:
This week, we implemented QT TCP connection for user to connect to other users and send files to each other. This is based on open-source project github.com/manfredipist/QTcpSocket, where a user is simultaneously a client (which receives other users' messages) and a server (which responds to other users' requests).

This open-source project is using GUI, which is going to make the program crash on a linux server. So this week I manually converted the library into console programs (see commit 05b3048, where most of my works are in "main.cpp").

The difficulties lie in the dependency, where QtAbstractSocket's error handling function is only present in Qt5.15 and above, so we have to user Qt's MaintainerTool to add new Qt the latest version.

The next step is to store everyone's IP address. We decided to store it in memory using QMap (dictionary), where the key is userID, value is their IP address.


# Alejandro Christlieb Picazo 
This week I created the testing class for our project and designed the general structure of how the testing will be done. The idea being to create automated testing for all the modules in the project and then running them to debug easily the project. Additionally, I worked with Zhihui and Catalina to design a new communication way, where instead of using a central SQL DB we will now use peer to peer communication with Json files. I started researching and creating some functions about this.

# Amine Lamouchi 
This week I tried to merge the OCR and the openfoodfacts API into the same program. This program takes in a picture of a grocery receipt and returns the carbon footprint of the listed products. However, I have been struggling with integration issues as well as bugs due to missing products in the database . Since the database is not well standardised I am also implementing error handling procedures and I hope to achieve this by the end of this week. 

# Steven van Heiningen 
This week I discussed witht the people from the data team what exactly is needed for from us and from them. Also I looked into the compatibility issue between Mac and Windows of Qt creator. I should mention that my schedule this week did not allow me to spend much time on the project.
Next week, we will finally merge the whole UI, the graph, survey and general part. Also, we will do major work on the UI survey itself. I plan on solving the compatibility issue or to decide on how to handle it otherwise; also to change all the dialogs to windows. Also I will do work on completion of the survey, for example doing aesthetic work.