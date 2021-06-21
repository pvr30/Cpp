#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /// Que . 1
    char a[100],b[100],d[100];
    scanf("%s",a);
    scanf("%s",b);
    scanf("\n");
    scanf("%[^\n]%*c",d);
    /* n order to take a line as input, you can use scanf("%[^\n]%*c", s); where 8 is defined as char s[MAX_LEN] where MAX_LEN is the maximum size of 8.
    Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c,
    it reads the newline character and here, the used * indicates that this newline character is discarded.*/
    printf("%s\n",a);
    printf("%s\n",b);

    printf("%s",d);


    /// Que. 2
    int i1,i2;
    float f1,f2;
    scanf("%d%d",&i1,&i2);
    scanf("%f%f",&f1,&f2);
    printf("%d %d\n",i1+i2,i1-i2);
    printf("%0.1f %0.1f\n",f1+f2,f1-f2);  /// arrangement of floating points
    return 0;

    ///Que 3
    /*
    void update(int *a,int *b) {
    // Complete this function
    *a=*a+*b;
    *b=abs(*a-(2**b));
    }


    int main() {
        int a, b;
        int *pa = &a, *pb = &b;

        scanf("%d %d", &a, &b);
        update(pa, pb);
        printf("%d\n%d", a, b);

        return 0;
    }
    */

    /// Que. 4 Good Que.

    void calculate_the_maximum(int n, int k) {
      //Write your code here0.
    int a=0,b=0,c=0,d,e,f;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            d=i|j;
            e=i&j;
            f=i^j;
            if(d<k)
            {
                if(b<d)
                b=d;
            }
            if(e<k)
            {
                if(a<e)
                a=e;
            }
            if(f<k)
            {
                if(c<f)
                c=f;
            }
        }
    }
    printf("%d\n%d\n%d",a,b,c);
    }


    int main() {
        int n, k;

        scanf("%d %d", &n, &k);
        calculate_the_maximum(n, k);

        return 0;
    }

    /// Que.5 Pattern

    int n;  //5
    scanf("%d",&n);
    int len = (n*2)-1,min; //9
    for (int i=0;i<len;i++)
    {
        for (int j=0;j<len;j++)
        {
            min=i<j?i:j;
            min=min<len-i?min:len-i-1;
            min=min<len-j-1?min:len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }




    /// Que.6 Printing Tokens

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' '){
            printf("\n");
        }
        else{
            printf("%c",s[i]);
        }
    }

    /// Que.7


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='0'){
           zero++;
        }
        else if(s[i]=='1'){
            one++;
        }
        else if(s[i]=='2'){
            two++;
        }
        else if(s[i]=='3'){
            three++;
        }
        else if(s[i]=='4'){
            four++;
        }
        else if(s[i]=='5'){
            five++;
        }
        else if(s[i]=='6'){
            six++;
        }
        else if(s[i]=='7'){
            seven++;
        }
        else if(s[i]=='8'){
            eight++;
        }
        else if(s[i]=='9'){
            nine++;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}



    return 0;
}
