#include <iostream>
using namespace std;
int average(int);

int main() 
{
//輸入成績
  int num;
  cout << "請輸入共有幾筆成績:";
  cin >> num;
  int score[num];
  for(int i = 0; i < num; i++)
  {
    cout << "請輸入第" << i+1 <<"筆成績:";
    cin >> score[i];
//    cout << i << score[i] << "\n";
  }

//計算平均
  float total = 0, average;
  for(int i = 0; i < num; i++)
  {
    total += (float)score[i];
  }
  average = total / num;
  cout << "總平均:" << average <<"\n";

//判斷及格
  if (average >= 60)
  {
    cout << "總平均及格!\n";
  }
  else if (average < 60)
  {
    cout << "總平均不及格!\n";
  }
//最高低分
  int min = 100, max = 0;
  for(int i = 0; i < num; i++)
  {
    if(score[i] > max)
    {
      max = score[i];
//      cout << "H" << max << score[j];
    }
    
    if(min > score[i])
    {
      min = score[i];
//      cout << "L" << min << score[j];
    }
  }
  cout << "最高分:" << max << "\n";
  cout << "最低分:" << min;

//成績排序
int sort[num], high = 0;
for(int i = 0; i < num; i++)
{
  for(int i = 0; i < num - 1;i++)
  {
    if(score[i] >= high)
    {
    int sort[] = score[i];
    score[]
    }
  }
  
  //score[j]
}
}
