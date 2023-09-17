#include<iostream>
using namespace std;

template<typename T>
T minimum(T x, T y)
{
    return (x<y ? x:y);
}
int main(){
    cout << "MIN value: " << minimum<int>(5,2)<<endl;
    cout << "MIN vale: " << minimum<float>(2.4, 9.1);

    return 0;
}
// template<typename T>
// T maximum(T x, T y)
// {
//     return (x>y ? x:y);
// }
// int main(){
//     cout << "Max value: " << maximum<int>(5,2)<<endl;
//     cout << "Max vale: " << maximum<float>(2.4, 9.1);

//     return 0;
// }
