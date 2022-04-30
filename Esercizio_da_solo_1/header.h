#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED



#endif // HEADER_H_INCLUDED

int fattorialeI(int n)
{
  int i, fatt=1;

  for(i=1;i<=n;i++)
        fatt=fatt*i;

  return fatt;
}

float fattorialeF(float n)
{
    int i;
    float fatt=1.0F;
    if(n>1.0F){
        for(i=2.0F;i<=n;i++)
            fatt=fatt*(float)i;
    }
    return fatt;

}
