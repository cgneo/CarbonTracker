# Zhihui Li 
This week I created secure SQL database using MySQL with secure password admin and I modified the setting in /etc/mysql/mysql.conf.d/mysqld.cnf to allow any remotely accessible interfaces. I also configured server firewall sudo ufw enable. sudo ufw allow mysql to allow mysql connections.
The difficulties of this week is that our server is linux ubuntu, and to make our programs run on the server, we need to compile in linux environment. So I have to install a virtual machine on my local computer, download Qt, and install it. But many erros came along the way. First is the default storage space where my virtual machine allocated is 20GB which is less than the minimum requirement of installation space required by Qt. I tried to expand the storage but the disk utility gparted doesn't give the option to swap the free space to the root partition. So I have to delete this virtual machine and redo everything where I manually set the storage space to 50GB. Now the installation of Qt is completed, the problem is that Qt doesn't launch in the desktop. So I have to install by command line and it finally worked. Next week, I'll be implementing socket connection with the existing session mannagement (and upload it to our server) and help my other teammate to connect with the SQL database on our server.

# Jane Peltier
This week during lecture and at home, I worked on the implementation of a code to create 2 types of bar charts in order to visualize carbon emission for each sector of emission (food, travel, home, etc), and to visualize your emission compared to the emission of other people (not finished yet). However, I have been stuck on visualizing them as the QtCharts internal library is needed and I am still struggling to make it work even after 2 hours of TD spent on it with help of TAs. I plan on solving this issue Monday.
Also had a meeting with the UI team, and we will try to merge codes for the initial UI next week.
Next week I will try to visualize the graphs when I will manage to make QtCharts available on my computer, then I will work on line graphs to describe the evolution of carbon emission through time, thanks to data input in the daily entry quiz.

# Catalina Negoita
This week, I created a text file that reads and writes data from database, thus being a means of communication between the Database and the UI. I also implemented an SQL Query template through which we will be able to execute the data from the database. The implementation is not finished yet, because I need the exact structure of the Database. That is why, next week, I will work with the Database team on designing the database in SQL, and then I will be able to finish the SQL Query in Qt.

# Nina Bili Rossi
This week I worked on trying to explore more graphing tools. I tried to use QtCharts but ran into issues and am currently working on resolving those with the help of TAs and with Jane. I also prepared a few functions to treat the data that will be given by the data team and use it to make a dynamic pie chart that will show how the user's food input category accounts for what proportion of his food related carbon emissions (on a daily basis). Next week I hope to be able to work with QtChart, which will enable the use of legends and other useful functionalities.

# Dain Jung
This week I created a design demo on Monday. Then, I started working on QT while exploring more potentially useful libraries and tools. As result, I created a general layout with the different pages on QT. Also, for next week, I have done some research and followed a tutorial. in addition, UI team had a meeting to check up the general progress for every subgroups of UI.
Next week, I will finish the profile page. On the profile page, we are going to put weekly challenges to encourage the users to reduce carbon footprint, and give a tree seed as a reward if the "challenges" checkbox is clicked. Therefore next week, I am also going to implement a progress bar related to the seeds status.

# Jade Rakotondradano
During the week, I worked specifically on writing a code that could interpret a .json file from a web URL. I downloaded the libcurl library which was useful to read files from web addresses. I also found a code online which could help me to implement this function. One problem with this is that they use jsoncpp which I am replacing with QJson as it is an internal library of QT and is easier to share with others. I now work on a separate branch to ensure that the others are not affected by my downloading of the library. For next week, I will try to complete the code and test it with input from Amine. I will be asking for help from the TAs as I am not fully able to complete this on my own. Once this is done, I plan to work on implementing functions of the food class to be able to categorise the elements (which will be done by interpreting the .json files again). I hope to have all of this complete in the next 2 weeks so that my team can move forward and connect the OCR to the database.

# Marc Saouda
This week, after multiple meetings with the data team we were able to take an important step in the architecture of the project. I also coded one core class of our project (the object class) and I looked into how we can compute the carbon footprint of transportation. Next week, I will look more into that and see if we need an API or if it can be done manually. Either way, I will try to finalize the transport classes which will then have a method to compute a carbon footprint.

# Lucas Serog
This week, my focus was centered around the architecture of our application and its classes. In order to do so, I met with the data team to discuss how we were going to store and call pieces of data. I looked for libraries relevant to this matter, and since we had discussed storing our data in the shape of a dictionary, I was able to find the library QMap. I have looked at the documentation for it and next week I am planning on implementing it in our project. I also ran into issues with GitHub as one of our branches crashed, but we discussed this matter with the whole project team and suggested ways in which we could take preventive measures to avoid this situation again.

# Steven Van Heiningen 
This week, I discovered all the elements of QT that we need for creating the UI. During the TD I solved an issue with linking several dialogs together, this is now solved. With this, I started on the product itself, where I implemented the essential functionalities (receiving input form user, posing several questions).
Next week, the UI team plans to merge the code of the several subteams. I will continue working on the product (survey when creating account) itself, makings sure it is functional as well as looking good.

# Alejandro Christlieb 
Thorughout this week my main task was to organize the data team to define the project's architecture and start writing all the basic structure of our classes. As such, I helped them standarize what our different people did and joined together all the class files in the same version. I also began adding more particular function and doing some abstraction processes, as thinking were to virtualize functions for child classes. Similarly, I thought and designed how the data structure will be managed on our C++ application to be easily compatible with an SQL database, thinking about the possible primary keys and relationships between our different type of objects, which will be essential for having a functional SQL database. Lastly, I led a team meeting Sunday morning with the whole team to update everyone on our advancements, discuss briefly how we will merge the DB, data and UI, and standarize cleaner practices with Github to avoid problems we had this week. Next week I will help the server team designing the SQL DB, updating the UML diagram, and will keep on merging the different parts of our project. 

# Cyrine Ben Tanfous
This week, with Dain, we managed to create a first design for the UI with the different layouts (graphs, challenges, user’s profile…) on the same page. However, we weren’t convinced by this layout, so we focused on another model, where each page will correspond to a specific part.
For the rest of the week, and planning on finishing it next week, I mainly focused on making this draft more intuitive and more coherent with our carbon tracker theme, I looked at different methods to link the design that we want the code that we already have, also one of the focus of next week will be to put in place the reward layout (with an additional tree for each user) in the challenge section.

# Amine Lamouchi
This week, the goal of the data team was to link the results of the OCR (i.e the reference numbers of the food products) with the database of Openfoodfacts. 
To achieve this, I divided the goal into two steps:  (1) Send queries to Openfoodfacts using cURL to retrieve the JSON file storing the data  (2) Parse the JSON file using QJSON or jsoncpp to extract the carbon footprint.

Since we weren’t familiar with JSON nor with cURL, I compiled a list of resources (video tutorials, forums and documentation) on how to use JSON API and cURL then shared it with the members of the data team.
Our midweek goal was to go over the resources I sent so that we could start coding during Thursday’s TD session.

To check on everyone’s progress, I led a meeting with the data team the night before the TD and we went over the more challenging aspects of these resources. At the end of the meeting we agreed on our tasks for the TD session and decided that I would focus on how to download and compile jsoncpp and libcurl during the 8am session so that Jade can start coding in the 10am session.

Although I managed to download and compile jsoncpp, I was unsuccessful in linking libcurl. After the TD session, I optimised the OCR program and made it compatible with Carrefour receipts.

# Andrés Orduña
This week I worked on the setting up of the profile page. Off coding, I worked on the questions that the user will fact to input their data to have information around different categories: food, consumption (electronic and clothes), home (energy consumption). This, making sure that the answers were easy to provide from the user’s perspective. With the rest of the UI team we met to check everyone’s work and specify design matters. We also had a general meeting about Github. Coding wise, we have a first draft of the general structure of the survey with a main window with interconnected dialog windows, where we are going to implement the questions we have designed.

Next week, on the UI-Profile part we have to get more of the inputing data done as well as working with the other teams to make sure we store that data correctly. In terms of functionalities, linking every answer of the survey to some objects and user (so start working with the classes of the project). Moreover we will have to merge the three branches of the UI we are working in, so Graphs, Profile and General Design to have a first general User Interface, we will continue to polish in the following weeks.