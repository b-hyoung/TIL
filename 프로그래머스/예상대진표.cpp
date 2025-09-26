//https://school.programmers.co.kr/learn/courses/30/lessons/12985

#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    //8명 참여 A는4번 B는 7번
    int answer = 0;
    
    for(n; n > 1; n /= 2){
        a= a%2 == 0 ? a : a+1;
        b= b%2 == 0 ? b : b+1;
        if(a==b){
            answer++;
            break;
        }else{
            a = a / 2;
            b = b / 2;
            answer++;
        }
    }
    

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << answer << endl;

    return answer;
}