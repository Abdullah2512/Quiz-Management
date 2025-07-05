#🎓 Quiz Management System (C++ Console Application) <br>
**📋 Description** <br>
This C++ project is a console-based Quiz Management System that allows students to take quizzes from three subjects: Mathematics, Science, and Computer Science. Each quiz consists of multiple-choice questions (MCQs) with options A–D. The application evaluates the user's answers and provides a final score with a pass/fail result based on a predefined passing criteria.

**🧠 Features**
👨‍🎓 Student name, father's name, and roll number input
📚 Three subject categories:
1. Mathematics
2. Science
3. Computer Science

📑 Each subject includes up to 30 well-structured MCQs
✅ Instant feedback on each answer (Correct/Incorrect)
📈 Final score display with pass/fail result
🔁 Option to retake the quiz with a new subject

**⚙️ How It Works**
1. The student inputs their personal details.
2. They press S or s to start the quiz.
3. A menu appears to select the subject.
4. The quiz displays one question at a time with 4 options.
5. After selecting an answer, immediate feedback is shown.
6. At the end, the total score and pass/fail status is shown.
7. The user can choose to take another quiz or exit.

**🧾 Data Structures Used**
1. struct Question: Stores question text, 4 options, and correct answers.
2. struct Student: Stores student information like name and roll number.
3. Arrays: Store lists of questions for each subject.

**📊 Scoring & Passing Criteria**
1. Total Questions: 30 per quiz
2. Correct Answer: +1 point
3. Passing Marks: 20/30

**💡 Implementation Highlights**
1. Case-insensitive answer checking (A/a, B/b, etc.)
2. Clean output formatting using tab spacing
3. Modular design using a separate displayQuiz() function
4. Loop allows users to take multiple quizzes without restarting the program

**🛠️ Technologies Used**
1. C++ Standard Library
2. Console I/O
3. Arrays and Structs

**📎 How to Run**
1. Copy the code into a .cpp file (e.g., quiz.cpp)
2. Compile using any C++ compiler (e.g., g++, Code::Blocks, Dev C++)
3. Run the executable
4. Follow on-screen instructions

**🚧 Limitations / Future Improvements**
1. Currently uses fixed questions hardcoded in arrays
2. No timer or negative marking
3. Limited input validation
4. Could be extended with file handling or GUI
