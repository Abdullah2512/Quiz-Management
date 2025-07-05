#include <iostream>
#include <string>
using namespace std;

struct Question {
    string q;
    string option1, option2, option3, option4;
    char answer1 ,answer2;
};
struct Student {
	string sname, fname;
	string rollno;
};

const int Maximum_ques = 30;
const int Maximum_sec = 3;
const int Passing_Marks = 20;

Question MathsQuestions[Maximum_ques] = {

{"\t\t\t\t\t\t 5 - 2x = 1",
"x = 0"," x = 1","x = 2", "x = 3",
'C','c'},
	
{ "\t\t\t\t\t\tWhat is the value of x in 2x + 5 = 11?",
"2", "3", "4", "5",
'B','b' },
	  
{ "\t\t\t\t\t\tSolve for y: 3y - 2 = 10",
"3", "4", "5", "6",
'B' ,'b'},
  
{ "\t\t\t\t\t\tWhat is the sum of the interior angles of a triangle?",
"180", "270", "360", "450",
'A' ,'a'},
  
{ "\t\t\t\t\t\tSolve the equation: x/4 + 2 = 5",
 "12", "16", "20", "24",
  'A' ,'a'},
{ "\t\t\t\t\t\tWhat is the value of z in 5z - 3 = 22?",
 "4", "5", "6", "7",
  'B','b' },
{ "\t\t\t\t\t\tFind the perimeter of a rectangle with length 6 and width 4",
 "20", "24", "28", "32",
  'A','a' },

{ "\t\t\t\t\t\tSolve for x: 2x^2 + 3x - 2 = 0",
 "-2", "-1", "1", "2",
  'C','c'},

{ "\t\t\t\t\t\tWhat is the surface area of a cube with edge length 5?",
 "100", "125", "150", "200",
  'B' ,'b'},

{ "\t\t\t\t\t\tSolve the inequality: 2x - 3 > 5",
   "4", "5", "6", "7",
   'B' ,'b'},

{ "\t\t\t\t\t\tWhat is the volume of a cylinder with radius 3 and height 5?",
"45", "60", "90", "120",
'A' ,'b'},

{ "\t\t\t\t\t\tSolve for y: y^2 - 4y - 3 = 0",
"-1", "1", "3", "5",
'C','c' },

{ "\t\t\t\t\t\tFind the area of a circle with radius 4",
"16π", "20π", "25π", "30π",
'A','a' },

{ "\t\t\t\t\t\tSolve the equation: x^2 + 2x - 6 = 0",
"-3", "-2", "2", "3",
'C','c' },

{ "\t\t\t\t\t\tWhat is the value of x in 3x - 2 = 10?",
"3", "4", "5", "6",
'B' ,'b'},

{ "\t\t\t\t\t\tSolve for z: z/2 + 1 = 3",
"4", "5", "6", "8",
'A' ,'a' },

{ "\t\t\t\t\t\tFind the length of the hypotenuse of a right triangle with legs 3 and 4",
"5", "6", "7", "8",
'A','a'  },

{ "\t\t\t\t\t\tSolve the inequality: x + 2 > 5",
"3", "4", "5", "6",
'B' ,'b'},

{ "\t\t\t\t\t\tWhat is the surface area of a sphere with radius 3?",
"36π", "48π", "64π", "81π",
'A' ,'a' },

{ "\t\t\t\t\t\tSolve for x: x^2 - 3x - 2 = 0",
"-1", "2", "3", "5",
'C' ,'c'},

{ "\t\t\t\t\t\tFind the volume of a rectangular prism with length 5, width 3, and height 2",
"30", "40", "50", "60",
'A' ,'a' },

{ "\t\t\t\t\t\tSolve the equation: 2x + 1 = 7",
"2", "3", "4", "5",
'B' ,'b'},

{ "\t\t\t\t\t\tWhat is the value of y in 2y + 3 = 9?",
"2", "3", "4", "5",
'B','b' },

{ "\t\t\t\t\t\tSolve for z: z - 2 = 5",
"3", "4", "5", "6",
'C' ,'c'},

{ "\t\t\t\t\t\tFind the area of a trapezoid with bases 5 and 7 and height 3",
"18", "20", "22", "24",
'A','a'  },

{ "\t\t\t\t\t\tSolve the inequality: 3x - 2 ≤ 10",
"3", "4", "5", "6",
'B' ,'b'},

{ "\t\t\t\t\t\tWhat is the circumference of a circle with radius 4?",
"8π", "12π", "16π", "20π",
'B' ,'b'},

{ "\t\t\t\t\t\tSolve for x: x^2 + 2x - 3 = 0",
"-3", "-1", "1", "3",
'C','c' },

{ "\t\t\t\t\t\tFind the perimeter of a triangle with sides 5, 6, and 7",
"18", "20", "22", "24",
'A' ,'a' },

{ "\t\t\t\t\t\tSolve the equation: x/3 + 2 = 4",
"6", "9", "12", "15",
'A' ,'a' },

};

    Question ScienceQuestions[Maximum_ques] = {
   	  
	  {"\t\t\t\t\t\tStudy of flow of fluids is called :",
	  "Thermodynamics","Viscosity","Kinematics","Fluid Dynamics",
	  'D','d'},
	  
	  {"\t\t\t\t\t\tHow many valence shell electrons does oxygen have?",
	  "Six","Eight","Two","Three",
	  'A','a' },
	  
    { "\t\t\t\t\t\tWhat is the process called when plants make their own food?" ,
"Photosynthesis", "Respiration", "Decomposition", "Fermentation",
'C' ,'c'},

{"\t\t\t\t\t\tWhich planet in our solar system is known as the Red Planet?" ,
"Mars", "Earth", "Jupiter", "Saturn",
'D' ,'d'},

{ "\t\t\t\t\t\tWhat is the largest living structure on Earth?" ,
"The Great Barrier Reef", "The Amazon Rainforest", "The Grand Canyon", "The Great Wall of China",
'B','b' },

{ "\t\t\t\t\t\tWho discovered gravity?" ,
"Isaac Newton", "Galileo Galilei", "Albert Einstein", "Leonardo da Vinci",
'C' ,'c'},

{ "\t\t\t\t\t\tWhat is the scientific term for the study of the structure, behavior, and evolution of the universe?" ,
"Cosmology", "Astronomy", "Astrology", "Geology",
'B' ,'b'},

{ "\t\t\t\t\t\tWhich type of rock is formed from the cooling and solidification of magma?" ,
"Igneous", "Sedimentary", "Metamorphic", "Foliated",
'A' ,'a' },

{ "\t\t\t\t\t\tWhat is the process called when water moves through a plant, from the roots to the leaves?" ,
"Transpiration", "Respiration", "Photosynthesis", "Evaporation",
'A','a'  },

{"\t\t\t\t\t\tWho developed the theory of evolution through natural selection?" ,
"Charles Darwin", "Gregor Mendel", "Louis Pasteur", "Albert Einstein",
'A','a'  },

{"\t\t\t\t\t\tWhat is the largest planet in our solar system?" ,
"Jupiter", "Saturn", "Uranus", "Neptune",
'A' ,'a' },

{"\t\t\t\t\t\tWhich type of cell is responsible for conducting electrical impulses in the body?" ,
"Muscle cells", "Nerve cells", "Epithelial cells", "Blood cells",
'B' ,'b'},

{"\t\t\t\t\t\tWhat is the process by which water moves through a plant, from the roots to the air?" ,
"Respiration", "Photosynthesis", "Transpiration", "Evaporation",
'C' ,'c'},

{"\t\t\t\t\t\tWhich scientist is credited with the discovery of the theory of continental drift?" ,
"Alfred Wegener", "Charles Darwin", "Galileo Galilei", "Isaac Newton",
'A' ,'a' },

{"\t\t\t\t\t\tWhat is the largest mammal on Earth?" ,
"Blue whale", "Fin whale", "Humpback whale", "Sperm whale",
'A','a'  },

{"\t\t\t\t\t\tWhat is the scientific term for the study of the Earth's physical structure, composition, and processes?" ,
"Geology", "Geography", "Geophysics", "Geochemistry",
'B' ,'b'},

{"\t\t\t\t\t\tWhich type of rock is formed from the compression and cementation of sediments?" ,
"Sedimentary", "Igneous", "Metamorphic", "Foliated",
'D' ,'d'},

{"\t\t\t\t\t\tWhat is the process called when an atom gains or loses electrons?" ,
"Ionization", "Electrolysis", "Oxidation", "Reduction",
'C','c' },

{"\t\t\t\t\t\tWhich planet in our solar system has the most moons?" ,
"Jupiter", "Saturn", "Uranus", "Neptune",
'B' ,'b'},

{"\t\t\t\t\t\tWhat is the scientific term for the study of the weather and atmosphere?" ,
"Meteorology", "Climatology", "Geology", "Oceanography",
'A' ,'a' },

{"\t\t\t\t\t\tWhich type of cell is responsible for producing hormones in the body?" ,
"Endocrine cells", "Nerve cells", "Muscle cells", "Epithelial cells",
'C' ,'c'},

{"\t\t\t\t\t\tWhat is the largest living species of lizard?" ,
"Komodo dragon", "Saltwater crocodile", "Black mamba", "African elephant",
'D' ,'d'},

{"\t\t\t\t\t\tWhat is the scientific term for the study of the Earth's oceans?" ,
"Oceanography", "Limnology", "Potamology", "Hydrology",
'A' ,'a' },

{"\t\t\t\t\t\tWho developed the theory of relativity?" ,
"Albert Einstein", "Isaac Newton", "Galileo Galilei", "Leonardo da Vinci",
'C' ,'c'},

{ "\t\t\t\t\t\tWhat is the process called when an organism's genetic information is altered?" ,
"Mutation", "Genetic drift", "Natural selection", "Hereditary",
'D','d' },

{ "\t\t\t\t\t\tWhich type of fossil fuel is formed from the remains of ancient plants?" ,
"Coal", "Oil", "Gas", "Uranium",
'B','b' },

{ "\t\t\t\t\t\tWhat is the largest planet in our solar system's diameter?" ,
"Jupiter", "Saturn", "Uranus", "Neptune",
'D','d' },

{"\t\t\t\t\t\tWho discovered the X-ray?" ,
"Wilhelm Conrad Röntgen", "Marie Curie", "Albert Einstein", "Nikola Tesla",
'C' ,'c'},

{ "\t\t\t\t\t\tWhat is the process called when water moves from the ground to the atmosphere through plants?" ,
"Evapotranspiration", "Transpiration", "Respiration", "Photosynthesis",
'B','b' },

{ "\t\t\t\t\t\tWhich type of rock is formed from the alteration of existing rocks under high pressure and temperature?" ,
"Metamorphic", "Igneous", "Sedimentary", "Foliated",
'A' ,'a' },

};

Question ComputerScienceQuestions[Maximum_ques] = {
    {"\t\t\t\t\t\t What is the programming language used for this quiz?",
	 "Java", "C++", "Python", "JavaScript",
	'B','b'},
    
	{"\t\t\t\t\t\t What is the primary function of the CPU?",
	 "Memory", "Input/Output", "Processing", "Storage", 
	 'D','d'},

  {"\t\t\t\t\t\t What type of computer memory is volatile?",
 "RAM", "ROM", "Cache", "Hard Drive", 
 'A','a' },

{"\t\t\t\t\t\t What is the purpose of a firewall?", "To protect against viruses",
 "To block unauthorized access", "To improve network performance", "To provide internet connection", 
 'B','b'},

{"\t\t\t\t\t\t Which software is used for creating documents?",
 "Adobe Photoshop", "Microsoft Excel", "Microsoft Word", "Google Chrome",
'C','c'},

{"\t\t\t\t\t\t What is the term for a network of interconnected computers?",
 "Internet", "Intranet", "Extranet", "LAN",
  'A','a' },

{"\t\t\t\t\t\t What type of malware is designed to extort money?",
 "Virus", "Worm", "Trojan", "Ransomware", 
 'D','d'},

{"\t\t\t\t\t\t Which hardware component is responsible for providing power to the computer?",
 "Power Supply", "Motherboard", "CPU", "RAM", 
 'A','a' },

{"\t\t\t\t\t\t What is the purpose of a router?", "To connect multiple computers to the internet", 
"To provide wireless connectivity", "To improve network security", "To increase network speed", 
'A','a' },

{"\t\t\t\t\t\t Which software is used for creating spreadsheets?",
 "Microsoft Word", "Microsoft Excel", "Adobe Photoshop", "Google Chrome", 
 'B','b'},

{"\t\t\t\t\t\t What is the term for a computer's ability to perform multiple tasks simultaneously?",
 "Multitasking", "Multiprocessing", "Multithreading", "Multiprogramming", 
 'A','a' },

{"\t\t\t\t\t\t Which type of computer is designed for portability?",
 "Desktop", "Laptop", "Tablet", "Server", 
 'B','b'},

{"\t\t\t\t\t\t What is the purpose of a surge protector?",
 "To protect against power surges", "To improve network performance", "To provide internet connection", "To block unauthorized access", 
 'A','a' },

{"\t\t\t\t\t\t Which software is used for creating presentations?",
 "Microsoft Word", "Microsoft Excel", "Microsoft PowerPoint", "Google Chrome", 
 'C','c'},

{"\t\t\t\t\t\t What is the term for a network attack that involves flooding a system with traffic?",
 "DDoS", "Malware", "Phishing", "Spoofing", 
 'A','a' },

{"\t\t\t\t\t\t Which hardware component is responsible for storing data?",
 "RAM", "ROM", "Hard Drive", "SSD", 
 'C','c'},

{"\t\t\t\t\t\t What is the purpose of a VPN?",
 "To provide internet connection", "To block unauthorized access", "To improve network performance", "To protect against cyber threats", 
 'D','d'},

{"\t\t\t\t\t\t Which software is used for creating graphics?",
 "Adobe Photoshop", "Microsoft Word", "Microsoft Excel", "Google Chrome", 
 'A','a' },

{"\t\t\t\t\t\t What is the term for a type of malware that disguises itself as legitimate software?",
 "Trojan", "Virus", "Worm", "Ransomware", 
 'A','a' },

{"\t\t\t\t\t\t Which hardware component is responsible for controlling the computer's operations?", 
 "CPU", "Motherboard", "RAM", "Power Supply", 
 'A','a' },


{"\t\t\t\t\t\t Which software is used for creating databases?", 
 "Microsoft Access", "Microsoft Excel", "Microsoft Word", "Google Chrome", 
 'A','a' },

{"\t\t\t\t\t\t What is the term for a type of cyber attack that involves tricking users into revealing sensitive information?",
 "Phishing", "Spoofing", "DDoS", "Malware", 
 'A','a' },

{"\t\t\t\t\t\t Which hardware component is responsible for providing input to the computer?",
 "Keyboard", "Mouse", "Monitor", "Speaker", 
 'A','a' },

{"\t\t\t\t\t\t What is the purpose of a router?",
 "To connect multiple computers to the internet", "To provide wireless connectivity", "To improve network security", "To increase network speed", 
 'A','a' },

{"\t\t\t\t\t\t Which software is used for creating videos?", 
 "Adobe Premiere", "Microsoft Word", "Microsoft Excel", "Google Chrome", 
 'A','a' },

{"\t\t\t\t\t\t What is the term for a type of malware that replicates itself?",
 "Virus", "Worm", "Trojan", "Ransomware", 
 'A','a' },

{"\t\t\t\t\t\t Which hardware component is responsible for storing the computer's operating system?",
 "Hard Drive", "SSD", "RAM", "ROM", 
 'A','a' },
 
 {"\t\t\t\t\t\t Which of these can store data optically",
  " Flash Memory", "DVD", "HDD", "CPU",
  'B','b'},
  
  {"\t\t\t\t\t\t Which type of software is used for managing files and folders ?",
   "File Manager", "Disk Cleaner", "Antivirus", "OS", 
   'A','a' },

{ "\t\t\t\t\t\t A smallest chunk of data is called ?",
 "GB", "KB", "Byte", "Bit", 
 'D','d'},
 
};


void displayQuiz(Question questions[], string SectionName) {
    int score = 0;
    for (int i = 0; i < Maximum_ques; i++) {
        cout << "\t\t\t\t\t\tQ # " << i + 1 << ":\n";
        cout << questions[i].q << "\n";
        cout << "\t\t\t\t\t\tA) " << questions[i].option1 << "\n";
        cout << "\t\t\t\t\t\tB) " << questions[i].option2 << "\n";
        cout << "\t\t\t\t\t\tC) " << questions[i].option3 << "\n";
        cout << "\t\t\t\t\t\tD) " << questions[i].option4 << "\n";
        char userAns;
        cout << "\t\t\t\t\t\tEnter your answer (A/B/C/D): ";
        cin >> userAns;
        if (userAns == questions[i].answer1||userAns==questions[i].answer2) {
            cout << "\t\t\t\t\t\tCorrect!\n\n";
            score++;
        } else {
            cout << "\t\t\t\t\t\tIncorrect. The correct answer is " << questions[i].answer1<< ".\n";
        }
    }
    cout << "\t\t\t\t\t\tQuiz finished!\n";
    cout << "\t\t\t\t\t\tYour final score in " << SectionName << " is " << score << "/" << Maximum_ques << ".\n";
    if (score >= Passing_Marks) {
        cout << "\t\t\t\t\t\tCongratulations! You have PASSED.\n";
    } else {
        cout << "\t\t\t\t\t\tSorry! You have FAILED.\n";
    }
}
 int main() {
	Student S1;
	char start;
	char S,s;
    while (true) {
        cout<<"\t\t\t\t\t\tEnter your first name :";
        cin>>S1.sname;
        cout<<"\t\t\t\t\t\tEnter your Father name :";
        cin>>S1.fname;
        cout<<"\t\t\t\t\t\tEnter your roll no :";
        cin>>S1.rollno;
		cout<<"\n"<<"\t\t\t\t\t\tEnter key 'S' to start the quiz: ";
		cin>>start;
		if(start=='S'||start=='s')
		{
	    cout <<"\n"<< "\t\t\t\t\t\tQuiz Management Program\n";
        cout << "\t\t\t\t\t\t-------------------------\n";
        cout << "\t\t\t\t\t\tSelect a section:\n";
        cout << "\t\t\t\t\t\t1. Maths\n";
        cout << "\t\t\t\t\t\t2. Science\n";
        cout << "\t\t\t\t\t\t3. Computer Science\n";
        cout << "\t\t\t\t\t\t4. Quit\n";
    }
    else
    cout<<"Quiz ended";
        int SectionChoice;
        cin >> SectionChoice;
        switch (SectionChoice) {
            case 1: displayQuiz(MathsQuestions, "Maths"); break;
            case 2: displayQuiz(ScienceQuestions, "Science"); break;
            case 3: displayQuiz(ComputerScienceQuestions, "Computer Science"); break;
            case 4: cout << "\t\t\t\t\t\tThank you for using the Quiz Management Program. Goodbye!\n"; return 0;
            default: cout << "\t\t\t\t\t\tInvalid choice. Please try again.\n";
        }
        cout << "\t\t\t\t\t\tWould you like to take another quiz? (y/n): "<<"\n";
        char response;
        cin >> response;
        if (response != 'y' && response != 'Y') break;
    }
    return 0;
}