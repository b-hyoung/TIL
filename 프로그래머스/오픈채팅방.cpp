#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

//구글링과 ai에게 질문해서 만들어진 코드

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> userInfo; // <Key: uid, Value: nickname> 형태의 map
    
    for(const string& str : record){
        //string값을 받아와 공백 기준으로 나눠준 뒤 
        // 문자열은 string 숫자 int로 자동변환을 위한 stringstream 사용
        stringstream ss(str);
        //map내부에 값을 넣기 위해 변수 선언(enter,uid1234,prodo)
        string command,uid,nickname;
        
        //ss를 통해 받아온 0번째 인덱스값의 Enter와 uid1234넣기
        ss >> command >> uid;
        
        //닉네임 변경 조건(재입장 , 닉네임변경)
        if(command == "Enter" || command == "Change"){
            //다 받고 남은 마지막 인덱스값 nickname에 할당
            ss >> nickname;
            //유저 이름을 uid라는 키값 안에 할당하기
            //uid가 중복된다면 nickname만 변경됨
            userInfo[uid] = nickname;
        }
    }
    for(const string& str:record){
        stringstream ss(str);
        string command,uid,nickname;
        ss >> command >> uid;
        
        if(command == "Enter"){
            answer.push_back(userInfo[uid] + "님이 들어왔습니다.");
        }else if(command == "Leave"){
            answer.push_back(userInfo[uid] + "님이 나갔습니다.");
        }
    }
    
    return answer;
}