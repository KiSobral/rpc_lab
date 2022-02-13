struct operandos{ 
    float v[10];
    int len;
};

program PROG {
    version VERS {
        float findSmallest(operandos) = 1;
        float findGreatest(operandos) = 2;
    } = 110011;
} = 55000555;