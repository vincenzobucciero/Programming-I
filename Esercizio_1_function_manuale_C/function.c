float distanza_2_punti (float x1, float x2, float y1, float y2)
{
    float d;

    d = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    return d;
}


float traslazione(float x1, float a, float y1, float b)
{
    float t1,t2;

    t1 = x1+a;
    t2 = y1+b;

    printf("la traslazione del punto e'\n %f\n%f", t1, t2);

    return;
}


