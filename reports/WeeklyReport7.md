# Jade Rakotondradano
This week I managed to complete the consumption class which will be used to complete the link between the API and the graphs. Due to some technical problems (issues with QT), we could not link together the classes and the graphs, however, will now start doing so. This week I was also able to test certain classes. In particular, consumption, base consumption and object classes. I fixed certain issues and can now begin using these classes to further the project. As we are nearing the end of the project, as trello assistance, I made sure that everyone was keeping to their tasks and had specific things to work on during the holidays. This included making sure the tasks were on the trello and that each complete task was discarded.

# Marc Salida Saouda
This week, I was able to accomplish two crucial leaps for our project. I finally understood how signals and slots work and created a class to be able to send and handles queries to the API while having a QEventLoop which will prevent us from having callbacks messing up the general code. This class will be also used for the food API with modifications to it of course. Now we can very easily merge the UI with the data because I was able to get rid of the annoying feature in the old code where we connected the query to a button and we didn't know how to integrate it in the UI. Also, I fixed the transport.cpp and transport.h files to better adapt them to the Object class and to the transport_api class. Transport is now ready to merge with other branches in the project.

Next week, I will be enjoying Christmas :p as well as helping other members of the team with their tasks and helping with the merging process.

# Zhihui Li
This week I implemented the console version of the client using QTcp.
Right now, everything is working as intended, and I have been working closely with the UI team and orchestrate the whole user experience.
The sequence of events is first: instantantiate the server <netserver> ⇒ server listens at 8080 port, the server is responsible for receiving information from other users ⇒ instantantiate the client <netclient> ⇒ the client is reponsible for talking to some other users.

As Git leader, I provided support on merging files while maintaining every member's commit history.

# Nina Bili Rossi
This week I worked on merging the donut graph into the final project. There were issues with my code not working anymore because of a Qt Update on my computer (?), and on other people’s computer as well (overall, a very confusing problem). Once I overcame that I started to implement the merging. The graph does not render yet but I definitely made progress, working with Jade and Zhihui.
  
# Jane Peltier
This week and next week, I am working on merging my work with the main UI branch and running tests to see if the display of graphs on the main UI window works well. Then I was thinking about ways to make the graphs more respectful of the overall color theme. 
  
# Alexandra Catalina Negoita
This week I completed tests for the User’s input, by testing the tests checking the validity of the input. Everything is in the tests class (from the Data-Classes file). I also started doing tests of the input for transport, and receipt. I will need to merge the tests in Data-Classes and in the Merging branch, and then I will make tests that check if the program crashes while running it.
  
# Andrés Orduña Correcher
  
This week, I particularly focused on finishing the main template for the challenges map. I created one function to pick the associated value to a key of those maps, and one function to gets a random key from any unordered map. That way, we can display different challenges and tips for the user, and they change every time they use our app. I fixed some displaying problems of the main window in full screen, as well as adding relative paths for all the files we uploaded individually, for them to be available from any device. Inside of the UI team, as sub-leader I made sure that everyone knew what they had to work on for the holidays, to ensure we finish everything on time even if we are away.

My objectives for the next two weeks are to fully finish the UI. Personally I will work on being able to upload a file from our device to be able to upload any grocery receipt, to run the code made by the data team and compute the carbon footprint on the products of the receipt. I will also keep track on the members of UI's progress, ensure communication and help if needed.

# Lucas Serog
This week I added functions to the base consumption class in order to merge with the ui team and be able to obtain information from the user and get their base footprints. When all was said and done I took a while to test the class and ran into many errors such as destroying/deleting things twice. To fix this issue, I changed multiple variables in the class to pointers and adjusted the iterators as well. Since the consumption class runs similarly I made the same changes to the consumption class so that both ran correctly.
  
# Dain Jung

  This week, I started working with the server team for " your friends " part. We came up with more ideas that we can implement on CarbonTracker, also made "friends" class and functions to link the server and the UI team. However, in order to make the server work on my QT, I had to update my QT version to the latest one (over 6). After updating, I tried to pull changes from my Git, and I got many conflicts and errors that I couldn't solve. I believe that it may be caused by the version conflict.

  Next week, I will solve the conflict and keep working on the "your friends" part. I will implement more functions and work on the UI part of updating your friends, showing who is active and creating a chat box to send a message or challenge to your fiends.

 # Amine Lamouchi 
  
  This week I was finally able to merge the OCR with the API. This concludes one of our goals for this project: a feature that allows the user to upload their grocery receipts and get the carbon footprint of what they bought. We first parse the receipt using OCR and extract the ID of each product, we then send queries to the database in order to retrieve the carbon footprints. I have also dealt with the lack of standardisation of the database by adding error handling messages and certain checks before sending queries. This ensures that we won’t get errors that may crash the system. 
Now that this is done, I will collaborate with the UI team on the way to display the query results, and if we need to retrieve more details about each product. 


# Alejandro Christlieb 

This week I worked primarily on helping on the merging of the different parts of the project, specially the UI team and the data team. Likewise, I worked on creating the JSON file where all the data will be stored and saving it in a folder inside the project by utilizing relative directory paths. I also worked on the functions that initialize and add new objects to the dictionary in the JSON file. Now I just have to create the reading functions and this should help connect the UI and the data team even better.
