#ifndef UNTITLED5_4B_2_H
#define UNTITLED5_4B_2_H
void scal(int tab[], int left, int center, int right)
{
    int h1 = center-left+1;
    int pom1[h1];
    for(int i = left; i<= center;i++){
        pom1[i-left] = tab[i];
    }
    int h2 = right-center;
    int pom2[h2];
    for(int i = center+1; i<= right;i++){
        pom2[i-center-1] = tab[i];
    }
    int j= 0;
    int k = left;
    int i = 0;
    while(i<h1 and j< h2){
        if(pom2[j]<pom1[i]){
            tab[k] = pom2[j];
            j++;
        }
        else{
            tab[k] = pom1[i];
            i++;
        }
        k++;
    }
    while(i<h1){
        tab[k] = pom1[i];
        i++;
        k++;
    }
    while(j<h2){
        tab[k] = pom2[j];
        k++;
        j++;
    }

}

void merge_sort(int tab[], int left, int right)
{
    if(right == left) return;
    int center = (left+right)/2;
    merge_sort(tab, left, center);
    merge_sort(tab, center+1, right);
    scal(tab, left, center, right);
}

void merge_sort(int tab[], int size)
{
    merge_sort(tab, 0, size);
}
#endif //UNTITLED5_4B_2_H
