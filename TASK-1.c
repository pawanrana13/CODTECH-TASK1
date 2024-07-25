#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
typedef struct {
    char question[100];
    char options[4][100];
    int correct_answer;
} Question;

Question questions[100] = {
    {"What is the capital of France?", {"Paris", "London", "Berlin", "Rome"}, 0},
    {"What is the largest planet in our solar system?", {"Earth", "Saturn", "Jupiter", "Uranus"}, 2},
    {"which party win the election of 2024?",{"congress","BJP","AAP","RJD"}, 1},
    {" In which country has tallest statue namely The statue of Unity located?",{"America","Russia","India","UK"},2},
    {"who was the second man to walk on the moon?",{"Neil Armstrong","Charles Pete","Rakesh Sharma","Edwin Aldrin"},3},
    {"which Country won The ICC Men's T20 2024?",{"South Africa","India","England","Afghanistan"},1},
    {"which country won the FIFA World Cup 2022?",{"France","Portugal","Brazil","Argentina"},3},
    {"Which Country was never conquered by other countries?",{"Japan","Nepal","Russia","Russia"},0},
    {"In which year The 2nd World War was started?",{"1938","1939","1915","1947"},1},
    {"Which animal is the largest Animal in Land?",{"Giraffe","Rhinosauros","Elephant","Yalk"},2},
    {"Which is the Fastest animal in the world?",{"Cheetah","Panther","Leopard","Jaguar"},0},
    {"which city is known as Pink City in India?",{"Jaipur","Raipur","Ajmer","Jhalawar"},0},
    {"who was known as the IRON MAN of India?",{"Bhagat Singh","Jawahar Lal Nehru","Sardar Vallabh Bhai Patel","Rajguru"},2},
    {"What is the capital of India?",{"Mumbai","West Bengal","Delhi","Hyderabad"},2},
    {"who is the Richest man of Asia?",{"Mukesh Ambani","Gautam Adani","Zhong Shanshan","Prajogo Pangestu"},1},
    {"Who is known as the GOD OF CRICKET?",{"Virat kohli","MS Dhoni","Kapil Dev","Sachin Tendulkar"},3},
    {"who is the chairman of TESLA?",{"Mark Zukerberg","Elon Musk","Sundar Pichai","Steve Jobs"},1},
    {"Who is the author of the book HARRY POTTER?",{"Chetan Bhagat","JK Rowling","Robert Frost","Jane Austen"},1},
    {"which Production House owns the MARVEL CINEMATIC UNIVERSE?",{"Disney","Dharma Production","Paramount","Universal Picture"},0},
    {"which Actor played the role of Bahubali in the Movie BAHUBALI?",{"Allu Arjun","Thalapathy Vijay","Prabhas","Suriya"},2},
    {"Who is known as the KING KHAN of BOLLYWOOD?" ,{"Shah Rukh Khan","Salman Khan","Amir Khan","Saif Ali Khan"},0},
    {"which Indian model was crowned as the First Miss Universe?" ,{"Harnaz Kaur Sandhu","Lara Dutta","Sushmita Sen","Priyanka Chopra"},2},
    {"who wrote RAMAYANA?",{"Tulsi das","Valmiki","ved vyas","Shri Ganesh"},1},
    {"who was RAVANA?",{"God","Human","Saint","Demon"},3},
    {"in what year did the Great October Socialist Revolution take place?",{"1917","1923","1914","1920"},0},
    {"What is the largest lake in the world?",{"Caspian Sea","Baikal","Lake Superior","Ontario"},1},
    {"Which planeyt in the solar system is known as the RED PLANET?",{"Venus","Mars","Earth","Jupiter"},1},
    {"Which river is the longest in the world?",{"Amazon","Nile","Mississipi","Yangtze"},0},
    {"What gas i used to extinguish fires?",{"Oxygen","Nitrogen","Carbon Dioxide","Hydrogen"},2},
    {"What animal is the national symbol of Australia?",{"Koala","Emu","Crocodile","Kangaroo"},3},
    {"What is the name of process by which plants convert sunlight into energy?",{"Respiration","Oxidation","Photosynthesis","Evolution"},2},
    {"What chemical element is designated as Hg?",{"Silver","Tin","Copper","Mercury"},3},
    {"In what year was the first international modern Olympiad held?",{"1896","1900","1912","1924"},0},
    {"For which of these discipline Nobel Prize is awarded?",{"Physics,Chemistry","Physiology","Medicine","All of the above"},3},
    {"Entomology is the science that studies?",{"Behaviour of human beings","Insects","The originn and history of technical and scientific terms","The formation of rocks"},1},
    {"Hitler's party is known as?",{"Labour party","Nazi party","Ku-Klux-Klan","Democratic party"},1},
        {"Ecology deals with?",{"Birds","Cell formation","Relation between organisms and their environment","Tissues"},2},
        {"Which is the largest Island?",{"New Guinea","Andaman Nicobar","Greenland","Hawaii"},2},
        {"Which is te hottest continent?",{"Africa","South Asia","North America","Australia"},0},
        {"What do Koala usually eat?",{"Bamboo","Eucalyptus","Aloe vera","Banana"},1},
        {"What is the most popular bread in France?",{"Brioche","Baguette","White bread","Ciabatta"},1},
        {"What is the official currency of Japan?",{"Won","Yuan","Yen","Dollars"},2},
        {"What is the phobia of thunder and rain called?",{"Agoraphobia","Ombrophobia","Acrophobia","Claustrophobia"},1},
        {"What does Carpe Diem mean in Latin?",{"Enjoy the moment","Have Fear","Sorry i blew it","Hello"},0},
        {"Which one of the following countries is not in AAfrica?",{"Morocco","Yemen","Sudan","Algeria"},1},
        {"Where does the Shushi come from?",{"Japan","China","America","South Korea"},0},
            {"in which centuary the Mona Lisa was painted?",{"18th centuary","15th centuary","16th centuary","14th centuary"},2},
            {"Who wrote the GREAT GATSBY novel?",{"Leo tolstoy","Hemingway","Stephen King","F.Scott Fitzgerald"},3},
            {"Which is the richest country in  the  world?",{"Qatar","Russia","USA","UAE"},0},
            {"Which country is the biggest producer of coffee?",{"Spain","India","Ethopia","Brazil"},3},
            {"in what year was the United Nations(UN) found?",{"1945","1919","1956","1961"},0},
            {"Which city is called the CITY OF WINDS?",{"Chicago","Seattle","Washington","Veliky Novgorod"},0},
            {"Which animal is a symbol of peace and neutrality?",{"Polar bear","White bear","White Lion","White crane"},3},
            {"What element is the main costituent of diamonds?",{"Carbon","Oxygen","Silver","Gold"},0},
            {"What year was the first man sent to space?",{"1957","1961","1969","1975"},1},
                {"Which sea is considered the most salty on Earth?",{"Red sea","Mediterian sea","Dead sea","Black sea"},2},
                {"Which organ in the human body is responsible for the secretion of bile?",{"Liver","Kidney","Spleen","Stomach"},0},
                {"what chemical is designated as Cu?",{"Zinc","Copper","Cobalt","Kurtz"},1},
    {"In which year French revolution take place?",{"1789","1812","1905","1793"},0},
                {"What ocean is between Africa and Australia?",{"Pacific","Indian","Atlantic","Arctic"},1},
                {"Which chemial elemen makes up most of the atmosphre of Mars?",{"CO2","o","N","H"},0},
                {"In which country did the Chernobyl nuclear disaster take place?",{"Russia","Ukraine","Belarus","lithuania"},1},
                {"What ocean lies between North America ans Eurasia?",{"Quiet","Atlantic","Indian","Arctic"},1},
                {"Which country is famous for its pyramids and the Sphinx?",{"India","China","Mexico","Egypt"},3},
                    {"What year did the Great Depresion start?",{"1914","1929","1939","1945"},1},
    {"Which planet is the solar system is known as the PLANET OF LOVE?",{"Venus","Mars","Earth","Jupiter"},0},
                    {"What year was the Olympic Organization founded?" ,{"1886","1896","1900","1912"},1},
                    {"Which planet is known as the BLUE PLANET?",{"Venus","Earth","Uranus","Neptune"},1},
                    {"Which actor portrayed James Bond in a record seven movies?",{"Brad Pitt","Daniel Craig","Pierce Brosnan","Roger Moore"},3},
                    {",Which among the following was the last ruler of Gupta empire?",{"Vishnugupta","Chandragupta 2","Buddhagupta","Kumaragupta 2"},0},
                    {"Which of the following is/are the 9 gems of Chandragupta Vikramaditya?",{"Amarsimha","Harisena","Kahapnaka","All of the above"},3},
                    {"Which leader was honored with the Grand Cross of the legion of Honour?",{"Xi Jinping","Vladmir Putin","Narendra Modi","Volodymyr Zelensky"},2},
                    {"The book titled Memories Never Die was launched as a tribute to?",{"Atal Bihari Vajpaye","Naveen Patnaik","Abdul Kalam","Yogi Adityanath"},2},
                    {"Which Union Ministry achieved a Guinness World Record for Largest display of Lambani items?",{"Ministry of MSME","Ministry of Culture","Ministry of External Afairs","Ministry of Commerce and Industry"},1},
                        {"Which organisation has asked schools to consider Indian languages as teaching medium?",{"UGC","NITI Aayog","CBSE","NCERT"}},
                        {"Tiger Orchid species originated from which region?",{"Australia","South-East Asia","Europe","North America"},1},
                        {"What is the name of the weather event which rise in the sea surface temperature?",{"Marine heat waves","Oceanic heat waves","Pacific heat waves","Surface heat waves"},0},
                        {"Which state has announced the establishment of MANGROVE CELL?",{"Kerala","Tamil Nadu","West Bengal","Assam"},2},
                        {" The National Green Tribunal ordered a ban on cruise ships operating on water bodies of which state?",{"Odisha","Madhya Pradesh","Gujarat","Rajasthan"},1},
                        {"Rashtriya Poshan Maah is observed in which month in India?",{"August","September","October","November"},1},
                        {"When is the internatonal Dayy for South-South Cooperation observed?",{"July 12","August 12","Septembee 12","October 12"},2},
                        {"What is the theme of World Heart Day 2023?",{"Use heart know heart","Prevent heart diseases","Exercise daily","Healthy food habits"},0},
                        {"When is the National Space Day celebrated in India?",{"August 21","August 23","August 25","August 27"},1},
                            {"Which tennis player won the Wimbledon men's single title 2023?",{"Novak Djokovic","Rafael Nadal","Carlos Alcaraz","Stephano Tsitsipas"},2},
                            {"Leon Marchand who was seen in the news is associated with which sports?",{"Tennis","Swimming","Cricket","Football"},1},
                            {"Which European country has been Qualified for the ICC Mens T20 World Cup?",{"Ireland","Greece","Spain","Croatia"},0},
                            {"Which Indian state hosts the 7th edition of the men's Asian Champioships Trophy hockey tournament?",{"Goa","Tamil Nadu","Maharashtra","Odisha"},1},
                            {"Which company announced a breakthrough in creating Majorana Zero modes?",{"Google","Microsoft","Apple","Samsung"},1},
                            {"What is the name of the internet ransomware virus regarding which CERT-in issued an advisory?",{"Agata","Akira","Aira","Alima"},1},
                            {"Micron is set to established India's first semiconductor plant in which state?",{"Tamil Nadu","Gujarat","Maharashtra","Uttar Pradesh"},1},
                            {"Which company has unveiled the GPTbot web crawler developed to enhanced AI models?",{"Microsoft","Open AI","Google","Apple"},1},
                            {"Where is the ISRO Telemetry Tracking and Command Network located?",{"Bengaluru","Mahendra Giri","Cochin","Sikkim"},0},
                            {"What is NBRI Namoh 108 which has been developed by CSIR-NBRI?",{"Cotton","Lotus","Rice","Mango"},1},
                                {"Who was Arjuna's charioter in the war?",{"Karna","Lord Krishna","Hanumana","Vidur"},1},
                                {"Which is the holliest of all rivers?",{"Ganga","Krishna","Yamuna","Brahmaputra"},0},
                                {"Who is the author of MAHABHARATA?",{"Ved Vyas","Agasthya","Valmiki","Vidura"},0},
                                       
                                                                                
};

int main(void) {
    int score = 0;
    int current_question = 0;
    srand(time (NULL));
    printf("Welcome to the quiz game!\n");
    printf("You will be presented with 100 multiple choice questions.\n");
        printf("Choose the correct answer for each question.\n");
        printf("Good luck!\n\n");

        while (current_question < 100) {
            printf("Question %d: %s\n", current_question + 1, questions[current_question].question);
            for (int i = 0; i < 4; i++) {
                printf("%d. %s\n", i + 1, questions[current_question].options[i]);
            }
            int user_answer;
            printf("Enter your answer (1-4): ");
            scanf("%d", &user_answer);
            if (user_answer == questions[current_question].correct_answer + 1) {
                printf("Correct!\n");
                score++;
            } else {
                printf("Incorrect. The correct answer is %s.\n", questions[current_question].options[questions[current_question].correct_answer]);
            }
                    current_question++;
                    printf("\n");
                }
                printf("Your final score is %d out of 100.\n", score);

                if (score >= 80) {
                    printf("Congratulations! You passed the quiz with flying colors!\n");
                } else if (score >= 50) {
                    printf("Good job! You passed the quiz, but there's room for improvement.\n");
                } else {
                    printf("Sorry to say, but you didn't quite make the cut. Better luck next time!\n");
                }

                return 0;
            }
