#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    int temp = 0;

    //하나는 오름차순 하나는 내림차순으로 정렬후
    //곱하기 하는이유 - 큰수끼리 곱해졋을때 숫자가 더 커지기 때문에 
    //평균적으로 작은수가 나올려면 큰수랑 작은수 곱하기를 해줌
    sort(A.begin(), A.end());
    sort(B.rbegin(), B.rend());

    for (int i = 0; i < A.size(); i++)
    {
        temp = A[i] * B[i];
        answer += temp;
    }
    

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}
