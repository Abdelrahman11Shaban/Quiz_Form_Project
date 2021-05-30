#include<iostream>
#include<string>
#include<string.h>

using namespace std;

char Guess;
int Total; //Cause i use total at the class and the main

class Question
{
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4; 
	//That's is the varibles that any varible with "Question" data type has.
	char Correct_Answer;
	int Question_Score;

public:

	// A Function to set values of any variable.

	void Question::SetValues(string q, string a1, string a2, string a3, string a4, char ca, int pa)
	{
	    Question_Text = q;
		Answer_1 = a1;
		Answer_2 = a2;
		Answer_3 = a3;
		Answer_4 = a4;
		Correct_Answer = ca;
		Question_Score = pa;
	}//end SetValues


	//A Function to print the varibles.

	void Question::AskQuestion()
	{

		cout << endl;
		cout << "               " << endl;
		cout << Question_Text << endl;
		cout << "a. " << Answer_1 << endl;
		cout << "b. " << Answer_2 << endl;
		cout << "c. " << Answer_3 << endl;
		cout << "d. " << Answer_4 << endl;
		cout << endl;

		cout << "What is your answer?" << endl;
		cin >> Guess;
		

		if (Guess == Correct_Answer)
		{
			cout << endl;
			cout << "Great! You are correct." << endl;
			cout << "                                      " << endl;
			Total = Total + Question_Score; //To store the marks you get in the Quiz.
			
		}//end if

		else 
		{
			cout << endl;
			cout << "Oh No! You are wrong." << endl;
			cout << "The correct answer is "<< Correct_Answer<< "." << endl;
			cout << "                                      " << endl;
			cout << endl;

		}//end else

	}//end AskQuestion

}; //end class


int main() 
{

	cout << "                                    " << endl;
	cout << "                                    " << endl;
	cout << "     Welcome to C++ Quiz!           " << endl;
	cout << "                                    " << endl;
	cout << "              By                    " << endl;
	cout << "                                    " << endl;
	cout << "      Abdelrahman Shaban :)         " << endl;
	cout << "                                    " << endl;
	cout << "                                    " << endl;
	cout << "                                    " << endl;

	cout << "Please Press Enter to start the quiz." << endl;
	cin.get(); //Function which used to read a single character from the user. 

	string name;
	int Section;

	cout << "What is your name?" << endl;
	getline(cin,name); //To read a full name with it's spaces.
	cout << endl;

	cout << "What is your section?" << endl;
	cin >> Section;

	string Respond;
	cout << "                                " << endl;
	cout << "Are you ready to take the Quiz " << name << "? Yes/No." << endl;
	cin >> Respond;

	if (Respond == "Yes" || Respond == "yes")
	{
		cout << endl;
		cout << "Ok, Good Luck! :)" << endl;
	}

	else 
	{
		cout << "Ok, Goodbye! :)" << endl;
		system("pause");
		return 0;
	}


	//Define variables it's data type is Question.

	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;
	

	//Set values to this variables by function SetValues.

	q1.SetValues("1. What is the only function all C++ programs must contain?",
		"start()",
		"system()",
		"main()",
		"program()",
		'c', // The correct answer.
		1); //The mark of the question.

	q2.SetValues("2. The system i++; is equivalent to: ",
		"i = i + i",
		"i = i + 1",
		"i = i - 1",
		"i = i + 2",
		'b',
		1);

	q3.SetValues("3. In C++, 17 % 5 = ",
		"2",
		"3",
		"4.5",
		"5",
		'a', 
		1);

	q4.SetValues("4. Which of the following is a correct identifier in C++?",
		"5Ahmed_ali",
		"1_Mohamed",
		"Hamed_k",
		"$Salem",
		'c',
		1);

	q5.SetValues("5. Which function is used to read a single character from the console in C++?",
		"cin.get(ch)",
		"getline(ch)",
		"read(ch)",
		"scanf(ch)",
		'a',
		1);

	q6.SetValues("6. Which of the following escape sequence represents tab?",
		"\\n",
		"\\t",
		"\\a",
		"\\n\\t",
		'b',
		1);

	q7.SetValues("7. Which of the following is C++ equivalent for printf()?",
		"cin",
		"input",
		"print",
		"cout",
		'd',
		1);

	q8.SetValues("8. Which of the following will not return a value?",
		"void",
		"char",
		"int",
		"double",
		'a',
		1);

	q9.SetValues("9. In int main(), what does the int stand for?",
		"initialize",
		"integer",
		"nothing",
		"inheritance",
		'b',
		1);

	q10.SetValues("10. The relational operator for equal is: ",
		"=",
		"/=",
		"=/",
		"==",
		'd',
		1);

	//Calling this function to print the questions.

	q1.AskQuestion();
	q2.AskQuestion();
	q3.AskQuestion();
	q4.AskQuestion();
	q5.AskQuestion();
	q6.AskQuestion();
	q7.AskQuestion();
	q8.AskQuestion();
	q9.AskQuestion();
	q10.AskQuestion();

	
	

	if (Total >= 7)
	{
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "           Great you are passed the quiz!              " << endl;
		cout << "                                                       " << endl;
		cout << "           Your total score is " << Total << " Out of 10 " << endl;
		cout << "                                                       " << endl;
		cout << "                CONGRATULATIONS! :)                    " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;


	}//end if

	else
	{

		
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "           Sorry, you failed the quiz. :(              " << endl;
		cout << "                                                       " << endl;
		cout << "           Your total score is " << Total << " Out of 10 " << endl;
		cout << "                                                       " << endl;
		cout << "              Better luck next time! :]                " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;
		cout << "                                                       " << endl;

	}//end else
	
	system("pause");

	return 0;

}// end main