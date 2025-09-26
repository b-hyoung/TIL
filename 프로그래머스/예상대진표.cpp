//https://school.programmers.co.kr/learn/courses/30/lessons/12985

/*
2의 N승을 구해서 대진 수를 구하고
a 또는 b가 홀수면 +1을 통해 짝수로 만들어서 비교
같지 않으면 2를 계속 나눠서 2에서 만나게함.
*/

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
//이해한 더 좋은 코드 훔쳐오기
/**
    0/2는 0이니까 모든 수를 0에서 만나게 하신듯
    경험치 +1
 */
#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    a--;
    b--;
    int answer=0;
    while(a!=b){
        a=a/2;
        b=b/2;
        answer++;
    }
    return answer;
}