#include<bits/stdc++.h>
#define long long ll;
using namespace std;


int main(void){
    int n;
    int cnt = 0;
    double sum = 0.0;
    cin >> n;
    char a[50], b[50];
    for (int i = 0; i < n; i++){
        double temp;
        scanf("%s", a);
        sscanf(a, "%lf", &temp);
        sprintf(b, "%.2f", temp);
        int flag = 0;
        for (int j = 0; j < strlen(a); j++){
            if (a[j] != b[j]){
                flag = 1;
                
            }
        }
        if (flag || temp < -1000 || temp > 1000){
            printf("ERROR: %s is not a legal number\n", a);
           
        }else{
            cnt++;
            sum+=temp;
        }
    }
    if (cnt == 1)
        printf("The average of 1 number is %.2f", sum);
    else if(cnt > 1)
        printf("The average of %d numbers is %.2f", cnt, sum / cnt);
    else
        printf("The average of 0 numbers is Undefined");

    return 0;
}
