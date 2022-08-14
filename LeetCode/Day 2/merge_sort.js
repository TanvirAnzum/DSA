const merge(arr,p,q,r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    let L[n1],m[n2];

    for(let i=0;i<n1;i++) L[i] = arr[p + i];
    for(let i=0;i<n2;i++) M[i] = arr[q+1 + i];

    let i,j,k;
    i = 0,j =0,k=p;

    while(i < n1 && j < n2) {
        if(L[i] <= M[j] {
            arr[k] = L[i];
            i++:
        })
        else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = L[i];
        j++;
        k++;
    }
}