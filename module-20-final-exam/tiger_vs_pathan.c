#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    int cnt[T][2];
    for(int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        
        char S[N+1];
        scanf("%s", S);

        cnt[i][0] = 0; 
        cnt[i][1] = 0;
        
        for(int j = 0; j < N; j++) {
            if(S[j] == 'T') {
                cnt[i][0]++; // t
            } else if (S[j] == 'P') {
                cnt[i][1]++; // p
            }
        }
    }

    for(int i = 0; i < T; i++) {
        if(cnt[i][0] == cnt[i][1]) {
            printf("Draw\n");
        } else if(cnt[i][0] > cnt[i][1]) {
            printf("Tiger\n");
        } else if(cnt[i][1] > cnt[i][0])  {
            printf("Pathaan\n");
        }
    }

    return 0;
}