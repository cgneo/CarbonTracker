//#include <QGraphicsWidget>
//#include <QApplication>
//#include "food_api.h"
//#include <string>
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <tesseract/baseapi.h>
//#include <leptonica/allheaders.h>

//bool check_digit(char c) {
//    vector<char> digit_vec = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//    if (find(digit_vec.begin(), digit_vec.end(), c) != digit_vec.end()) {
//        return true;
//    }
//    return false;
//}


//// Checks that a string "str" is only made of numeric characters
//// This function is used to know which part of the file corresponds to a product's id.
//bool is_id(string str)
//{
//    char space = ' ';
//    if (!check_digit(str.at(str.length() - 1)) and (str.at(str.length() - 1) != space))
//    {
//        return false;
//    }
//    for (int i = 0; i < int(str.length()) - 1; i++)
//    {
//        if (!check_digit(str.at(i)))
//        {
//            return false;
//        }
//    }
//    return true;
//}

//// Helper function that check that a string "str" is only made of numeric characters
//bool num_str(string str)
//{
//    for (char c : str)
//    {
//        if (!check_digit(c) and c != ',' and c != '.')
//        {
//            return false;
//        }
//    }
//    return true;
//}

//// Helper function that takes a string "line" and returns a vector "words" containing the words within the line
//// Here a word is defined as a non-empty string between two spaces.
//vector<string> decompose_line(string line)
//{
//    string space_delimiter = " ";
//    vector<string> words{};
//    size_t pos = 0;
//    while ((pos = line.find(space_delimiter)) != string::npos)
//    {
//        words.push_back(line.substr(0, pos));
//        line.erase(0, pos + space_delimiter.length());
//    }
//    return words;
//}

//// Helper function that takes a vector of words (corresponding to a line in the file) and returns a size-2 vector
//// Hhere the first element in a reference number for a product (its id) and the second element is the quantity
//vector<string> extract_id_quant(vector<string> words)
//{
//    string id = words[0]; // The id is always the first word in a line (by observation)
//    string quantity = words[words.size() - 5];
//    vector<string> res;
//    res.push_back(id);
//    res.push_back(quantity);
//    return res;
//}

//// This function takes a file "filename" as input and returns "res_vector" a vector of vectors of the form {id, quantity}
//// i.e each element of res_vector is a vector containing the reference number of a product and its quantity.
//// The returned vector will later be used to send queries to the data base and calculate the carbon footprint of the receipt given in the file.
//vector<vector<string>> file_to_vector(string filename)
//{
//    ifstream myfile(filename); // Open file in read mode
//    vector<vector<string>> id_quant_pairs;
//    if (myfile.is_open())
//    {
//        string line;
//        while (getline(myfile, line))
//        { // Read file line by line
//            if (!line.empty())
//            {
//                string potential_id = line.substr(0, 13);
//                bool id = is_id(potential_id);
//                if (id)
//                {                                                  // If the line begins with an id
//                    vector<string> words = decompose_line(line);   // Decompose the line into a vector of words
//                    vector<string> pair = extract_id_quant(words); // Extract the id and the quantity of the product in the line
//                    id_quant_pairs.push_back(pair);                // Append this pair to res_vector
//                }
//            }
//        }
//        myfile.close();
//    }
//    else
//        cout << "Unable to open file"; // Error handling message
//    return id_quant_pairs;
//}

//vector<vector<string>> get_receipt_info(string filepath)
//{
//    char *outText;

//    tesseract::TessBaseAPI *api = new tesseract::TessBaseAPI();

//    // Initialize tesseract-ocr with French, without specifying tessdata path
//    if (api->Init(NULL, "fra"))
//    {
//        std::cerr << "Could not initialize tesseract.\n";
//        //exit(1);
//    }

//    // Open input image with leptonica library
//    Pix *image = pixRead(filepath.c_str());
//    api->SetImage(image);

//    // Get OCR result
//    outText = api->GetUTF8Text();

//    // Put OCR result in a file
//    string filename = "/tmp/ocr_result.txt";
//    ofstream file(filename);
//    file << string(outText);
//    file.close();

//    // Call file_to_vector on the file
//    vector<vector<string>> id_quant_pairs = file_to_vector(filename);

//    // Destroy used object and release memory
//    api->End();
//    delete api;
//    delete[] outText;
//    pixDestroy(&image);

//    // simulate a vector of pairs {product_id, quantity}
//    //vector<vector<string>> id_quant_pairs = {{"8076809578257", "1"}, {"8076809530668", "1"}, {"8076809513388", "1"}};

//    // initialise empty vector to store all product_info vectors
//    vector<vector<string>> receipt_info = {};

//    // loop over id_quant_pairs and append each product_info to receipt_info
//    for (vector<string> pair : id_quant_pairs)
//    {
//        food_api api(pair[0], pair[1]);
//        api.get_reply();
//        receipt_info.push_back(api.get_product_info());
//    }

//    return receipt_info;
//}
