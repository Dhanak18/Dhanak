#include<stdio.h>
void KmToMile(){
    float km, result;
    printf("Enter kilometer to convert to mile:\n");
    scanf("%f", &km);

    result= km*0.621;

    printf("%f kms will be %f miles\n", km, result);
}

void InchTOFoot(){
    float inch, result;
    printf("Enter inches to convert to feet:\n");
    scanf("%f", &inch);

    result= inch/12;

    printf("%f inches will be %f feet\n", inch, result);
}

void CmToInch(){
    double cm, result;
    printf("Enter centimeters to convert to inches:\n");
    scanf("%lf", &cm);

    result= cm/ (2.54);

    printf("%lf centimeters will be %lf inches\n", cm, result);
}

void PoundToKg(){
    float pound, result;
    printf("Enter pounds to convert to kgs:\n");
    scanf("%f", &pound);

    result= pound* (0.453);

    printf("%f pounds will be %f kgs\n", pound, result);
}

void InchToMeter(){
    float inch, result;
    printf("Enter inches to convert to meters:\n");
    scanf("%f", &result);

    result= inch*(0.0254);
    printf("%f inches will be %f meters\n", inch, result);
}

int main(){
    int choice;
    //float res;
    printf("1. Km to Mile\n 2.Inch to Foot\n 3. Cm to Inch\n 4. Pound to Kg\n 5. Inch to Metre\n");
    scanf("%d", &choice);
    if (choice==1){
        KmToMile();
    } else if (choice==2){
        InchTOFoot();
    } else if (choice==3){
        CmToInch();
    }else if (choice==4){
        PoundToKg();
    }else{
        InchToMeter();
    }

    return 0;
}