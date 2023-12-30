
    for(i=1;i<=10;i++){
        q=1.0/(long double)i;
        convert(q,10,6);
        printf("\t");
        convert(q,6,6);
        printf("\t");
        convert(q,12,6);
        printf("\n");
    }

    return 0;
}