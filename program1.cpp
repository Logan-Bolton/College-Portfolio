#include <iostream>
using namespace std;

//personality test
//Logan Bolton
//2/9/2022
//this program asks questions and uses the answers to shape someone out as a person.

int main(){
    int looper = 1;
    while (looper == 1){

    
        int introvertScore = 0;
        int positiveScore = 0;
        int sillyScore = 0;
        int plannerScore = 0;
        int answer;
        char replay;

        cout << "--------------------------------------------------" << endl << "PERSONALITY TEST" << endl << "--------------------------------------------------" << endl;

        //-----------------------------------------------
        //*                                             *
        //*      introvert questions                    *
        //-----------------------------------------------
        //question 1
        cout << "Question 1: How often do you hang out with friends?" << endl << "1. most of the time" << endl << "2. I am always around friends " << endl << "3. only some of the time" << endl << "4. never" << endl;
        cin >> answer;
        //cout << introvertScore;
        switch (answer){
            case 1:
                introvertScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                introvertScore += 2;
                //cout << "2";
                break;
            case 3:
                introvertScore -= 1;
                //cout << "3";
                break;
            case 4:
                introvertScore -= 2;
                //cout << "4";
                break;
        }

        //question 2
        cout << "Question 2: Do you consider yourself to have friends?" << endl << "1. yes, a middle ammount" << endl << "2. yes, a lot" << endl << "3. yes, but very few" << endl << "4. no" << endl;
        cin >> answer;
        //cout << introvertScore;
        switch (answer){
            case 1:
                introvertScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                introvertScore += 2;
                //cout << "2";
                break;
            case 3:
                introvertScore -= 1;
                //cout << "3";
                break;
            case 4:
                introvertScore -= 2;
                //cout << "4";
                break;
        }
        //question 3
        cout << "Question 3: Do you think you are an introvert?" << endl << "1. More towards extrovert" << endl << "2. I am an extrovert" << endl << "3. More towards introvert" << endl << "4. I am an introvert" << endl;
        cin >> answer;
        //cout << introvertScore;
        switch (answer){
            case 1:
                introvertScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                introvertScore += 2;
                //cout << "2";
                break;
            case 3:
                introvertScore -= 1;
                //cout << "3";
                break;
            case 4:
                introvertScore -= 2;
                //cout << "4";
                break;
        }

        //-----------------------------------------------
        //*                                             *
        //*      Positivity questions                   *
        //-----------------------------------------------
        //question 4
        cout << "Question 4: Are you happy" << endl << "1. somewhat" << endl << "2. yes, very" << endl << "3. not really" << endl << "4. no" << endl;
        cin >> answer;
        //cout << positiveScore;
        switch (answer){
            case 1:
                positiveScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                positiveScore += 2;
                //cout << "2";
                break;
            case 3:
                positiveScore -= 1;
                //cout << "3";
                break;
            case 4:
                positiveScore -= 2;
                //cout << "4";
                break;
        }
        //question 5
        cout << "Question 5: do you try to frame things in a positive way?" << endl << "1. sometimes" << endl << "2. always" << endl << "3. not really" << endl << "4. no" << endl;
        cin >> answer;
        //cout << positiveScore;
        switch (answer){
            case 1:
                positiveScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                positiveScore += 2;
                //cout << "2";
                break;
            case 3:
                positiveScore -= 1;
                //cout << "3";
                break;
            case 4:
                positiveScore -= 2;
                //cout << "4";
                break;
        }
        //question 6
        cout << "Question 6: do you cry?" << endl << "1. not really" << endl << "2. no" << endl << "3. sometimes" << endl << "4. yes" << endl;
        cin >> answer;
        //cout << positiveScore;
        switch (answer){
            case 1:
                positiveScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                positiveScore += 2;
                //cout << "2";
                break;
            case 3:
                positiveScore -= 1;
                //cout << "3";
                break;
            case 4:
                positiveScore -= 2;
                //cout << "4";
                break;
        }
        //-----------------------------------------------
        //*                                             *
        //*      silly questions                        *
        //-----------------------------------------------
        //question 7
        cout << "Question 7: do you make fun out of serious situations" << endl << "1. sometimes" << endl << "2. yes" << endl << "3. I try not to" << endl << "4. no" << endl;
        cin >> answer;
        //cout << sillyScore;
        switch (answer){
            case 1:
                sillyScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                sillyScore += 2;
                //cout << "2";
                break;
            case 3:
                sillyScore -= 1;
                //cout << "3";
                break;
            case 4:
                sillyScore -= 2;
                //cout << "4";
                break;
        }
        //question 8
        cout << "Question 8: Are you silly even when its not appropriate" << endl << "1. sometimes" << endl << "2. always" << endl << "3. not often" << endl << "4. never" << endl;
        cin >> answer;
        //cout << sillyScore;
        switch (answer){
            case 1:
                sillyScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                sillyScore += 2;
                //cout << "2";
                break;
            case 3:
                sillyScore -= 1;
                //cout << "3";
                break;
            case 4:
                sillyScore -= 2;
                //cout << "4";
                break;
        }
        //question 9
        cout << "Question 9: do you get mad when people are not serious about things?" << endl << "1. not really" << endl << "2. no" << endl << "3. sometimes" << endl << "4. yes" << endl;
        cin >> answer;
        //cout << sillyScore;
        switch (answer){
            case 1:
                sillyScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                sillyScore += 2;
                //cout << "2";
                break;
            case 3:
                sillyScore -= 1;
                //cout << "3";
                break;
            case 4:
                sillyScore -= 2;
                //cout << "4";
                break;
        }
        //-----------------------------------------------
        //*                                             *
        //*      planner questions                      *
        //-----------------------------------------------
        //question 10
        cout << "Question 10: do you make long plans " << endl << "1. sometimes" << endl << "2. yes" << endl << "3. not often" << endl << "4. never" << endl;
        cin >> answer;
        //cout << plannerScore;
        switch (answer){
            case 1:
                plannerScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                plannerScore += 2;
                //cout << "2";
                break;
            case 3:
                plannerScore -= 1;
                //cout << "3";
                break;
            case 4:
                plannerScore -= 2;
                //cout << "4";
                break;
        }
        //question 11
        cout << "Question 11: I wing everything" << endl << "1. disagree" << endl << "2. strongly disagree" << endl << "3. agree" << endl << "4. strongly agree" << endl;
        cin >> answer;
        //cout << plannerScore;
        switch (answer){
            case 1:
                plannerScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                plannerScore += 2;
                //cout << "2";
                break;
            case 3:
                plannerScore -= 1;
                //cout << "3";
                break;
            case 4:
                plannerScore -= 2;
                //cout << "4";
                break;
        }
        //question 12
        cout << "Question 12: I plan everything out" << endl << "1. agree" << endl << "2. strongly agree" << endl << "3. disagree" << endl << "4. strongly disagree" << endl;
        cin >> answer;
        //cout << plannerScore;
        switch (answer){
            case 1:
                plannerScore += 1;
                //cout << "1"; used for debugging
                break;
            case 2:
                plannerScore += 2;
                //cout << "2";
                break;
            case 3:
                plannerScore -= 1;
                //cout << "3";
                break;
            case 4:
                plannerScore -= 2;
                //cout << "4";
                break;
        }
        cout << "RESULTS" << endl << "--------------------------------------------------" << endl;

        //-----------------------------------------------
        //*                                             *
        //*                results                      *
        //-----------------------------------------------
        //cout << "introvertScore: " << introvertScore << endl;
        //extrovert
        if (introvertScore >= 2){
            cout << "You are an extrovert" << endl;
        }
        if (introvertScore <= -2){
            cout << "You are an introvert" << endl;
        }
        if (-2 < introvertScore && introvertScore < 2){
            cout << "You are an omnivert" << endl;
        }
        //cout << "posScore: " << positiveScore << endl;
        //positivity
        if (positiveScore >= 2){
            cout << "You are a positive person" << endl;
        }
        if (positiveScore <= -2){
            cout << "You are a negative person" << endl;
        }
        if (-2 < positiveScore && positiveScore < 2){
            cout << "You are neither positive or negative" << endl;
        }
        //cout << "sillyScore: " << sillyScore << endl;
        //silliness
        if (sillyScore >= 2){
            cout << "You are silly" << endl;
        }
        if (sillyScore <= -2){
            cout << "You are serious" << endl;
        }
        if (-2 < sillyScore && sillyScore < 2){
            cout << "You are neither silly nor serious" << endl;
        }
        //cout << "plannerScore: " << plannerScore << endl;
        //planner
        if (plannerScore >= 2){
            cout << "You are a planner" << endl;
        }
        if (plannerScore <= -2){
            cout << "You are spontaneous" << endl;
        }
        if (-2 < plannerScore && plannerScore < 2){
            cout << "You are neither a planner or spontaneous" << endl;
        }
        cout << "--------------------------------------------------" << endl;
        
        //replay
        cout << "Would you like to take the test again?" << endl << "(y/n)" << endl;
        cin >> replay;
        if (replay == 'n', 'N'){
            looper = 2;
        }
        if (replay == 'y', 'Y'){
            looper = 1;
        }
    }
    return 0;
}
