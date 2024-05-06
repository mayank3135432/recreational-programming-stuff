#include<stdint.h>
struct s0 {
    struct s0* f0;
    int32_t f4;
};

struct s1 {
    struct s0* f0;
    int32_t f4;
};

void fun_1030(int64_t rdi);

void fun_1050(int64_t rdi, struct s1* rsi);

void fun_1040(int64_t rdi, struct s1* rsi, int64_t rdx);

void display(struct s0* rdi, struct s1* rsi, int32_t edx) {
    int64_t rdx3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;

    *reinterpret_cast<int32_t*>(&rdx3) = edx;
    v4 = *reinterpret_cast<int32_t*>(&rsi);
    v5 = *reinterpret_cast<int32_t*>(&rdx3);
    v6 = 0;
    while (v6 < v4) {
        fun_1030(0x7b);
        v7 = 0;
        while (v7 < v5) {
            rdx3 = static_cast<int64_t>(v7) << 3;
            __asm__("movd xmm0, rax");
            fun_1050("%lf,", rsi);
            ++v7;
        }
        fun_1040(0x205d, rsi, rdx3);
        ++v6;
    }
    fun_1030(10);
    return;
}

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s0* fun_1060();

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s0* solve(struct s0* rdi, struct s1* rsi, int32_t edx) {
    struct s0* v4;
    int32_t v5;
    int32_t v6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t v14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t* rdi17;
    int32_t* rsi18;
    int32_t* rdi19;
    int32_t* rsi20;
    int1_t zf21;
    int32_t v22;
    int32_t* rdi23;
    int32_t* rsi24;
    int32_t v25;
    int32_t* rdi26;
    int32_t* rsi27;
    int32_t* rdi28;
    int32_t* rsi29;
    int32_t v30;
    int32_t v31;
    int32_t* rdi32;
    int32_t* rsi33;
    int32_t* rdi34;
    int32_t* rsi35;
    int32_t* rdi36;
    int32_t* rsi37;
    int32_t* rdi38;
    int32_t* rsi39;
    int32_t* rdi40;
    int32_t* rsi41;
    int32_t* rdi42;
    int32_t* rsi43;
    int32_t* rdi44;
    int32_t* rsi45;
    struct s2* rdi46;
    struct s0* rax47;
    struct s0* v48;
    int32_t v49;
    struct s3* rdi50;
    int32_t* rsi51;
    struct s0* rax52;
    struct s0* v53;

    v4 = rdi;
    v5 = *reinterpret_cast<int32_t*>(&rsi);
    v6 = edx;
    *reinterpret_cast<struct s0**>(&rdi->f0) = rsi->f0;
    rdi7 = &rdi->f4;
    rsi8 = &rsi->f4;
    __asm__("pxor xmm1, xmm1");
    __asm__("ucomisd xmm0, xmm1");
    if (__intrinsic() || reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 96) {
        addr_1503_5:
        v9 = 0;
    } else {
        v10 = 0;
        v11 = 0;
        while (v11 < v5) {
            *rdi7 = *rsi8;
            ++rdi7;
            ++rsi8;
            __asm__("pxor xmm1, xmm1");
            __asm__("ucomisd xmm0, xmm1");
            if (__intrinsic() || v4 + v11) {
                v10 = v11;
            }
            ++v11;
        }
        if (v10) 
            goto addr_14bf_15; else 
            goto addr_14b5_16;
    }
    while (v9 < v5) {
        *rdi7 = *rsi8;
        rdi12 = rdi7 + 1;
        rsi13 = rsi8 + 1;
        *rdi12 = *rsi13;
        rdi7 = rdi12 + 1;
        rsi8 = rsi13 + 1;
        v14 = 0;
        while (v14 < v6) {
            *rdi7 = *rsi8;
            rdi15 = rdi7 + 1;
            rsi16 = rsi8 + 1;
            __asm__("divsd xmm0, [rbp-0x10]");
            *rdi15 = *rsi16;
            rdi17 = rdi15 + 1;
            rsi18 = rsi16 + 1;
            *rdi17 = *rsi18;
            rdi19 = rdi17 + 1;
            rsi20 = rsi18 + 1;
            zf21 = reinterpret_cast<int32_t>((v4 + v9)->f0) + (static_cast<int64_t>(v14) << 3) == 0;
            *rdi19 = *rsi20;
            rdi7 = rdi19 + 1;
            rsi8 = rsi20 + 1;
            __asm__("ucomisd xmm0, xmm1");
            if (__intrinsic()) 
                goto addr_15f9_39;
            __asm__("ucomisd xmm0, xmm1");
            if (!zf21) 
                goto addr_15f9_39;
            ++v14;
        }
        v22 = v9 + 1;
        while (v22 < v5) {
            *rdi7 = *rsi8;
            rdi23 = rdi7 + 1;
            rsi24 = rsi8 + 1;
            *rdi23 = *rsi24;
            rdi7 = rdi23 + 1;
            rsi8 = rsi24 + 1;
            v25 = v9;
            while (v25 < v6) {
                *rdi7 = *rsi8;
                rdi26 = rdi7 + 1;
                rsi27 = rsi8 + 1;
                *rdi26 = *rsi27;
                rdi28 = rdi26 + 1;
                rsi29 = rsi27 + 1;
                __asm__("mulsd xmm1, [rbp-0x8]");
                __asm__("subsd xmm0, xmm1");
                *rdi28 = *rsi29;
                rdi7 = rdi28 + 1;
                rsi8 = rsi29 + 1;
                ++v25;
            }
            ++v22;
        }
        ++v9;
    }
    v30 = v9 - 1;
    while (v30 > 0) {
        v31 = v30 - 1;
        while (v31 >= 0) {
            *rdi7 = *rsi8;
            rdi32 = rdi7 + 1;
            rsi33 = rsi8 + 1;
            *rdi32 = *rsi33;
            rdi34 = rdi32 + 1;
            rsi35 = rsi33 + 1;
            *rdi34 = *rsi35;
            rdi36 = rdi34 + 1;
            rsi37 = rsi35 + 1;
            *rdi36 = *rsi37;
            rdi38 = rdi36 + 1;
            rsi39 = rsi37 + 1;
            __asm__("mulsd xmm1, [rbp-0x18]");
            __asm__("subsd xmm0, xmm1");
            *rdi38 = *rsi39;
            rdi40 = rdi38 + 1;
            rsi41 = rsi39 + 1;
            *rdi40 = *rsi41;
            rdi42 = rdi40 + 1;
            rsi43 = rsi41 + 1;
            *rdi42 = *rsi43;
            rdi44 = rdi42 + 1;
            rsi45 = rsi43 + 1;
            __asm__("mulsd xmm1, [rbp-0x18]");
            __asm__("subsd xmm0, xmm1");
            *rdi44 = *rsi45;
            rdi7 = rdi44 + 1;
            rsi8 = rsi45 + 1;
            --v31;
        }
        --v30;
    }
    rdi46 = reinterpret_cast<struct s2*>(static_cast<int64_t>(v5) << 3);
    rax47 = fun_1060();
    v48 = rax47;
    v49 = 0;
    while (v49 < v5) {
        rdi46->f0 = *rsi8;
        rdi50 = reinterpret_cast<struct s3*>(&rdi46->f4);
        rsi51 = rsi8 + 1;
        rdi50->f0 = *rsi51;
        rdi46 = reinterpret_cast<struct s2*>(&rdi50->f4);
        rsi8 = rsi51 + 1;
        ++v49;
    }
    rax52 = v48;
    addr_18f2_104:
    return rax52;
    addr_15f9_39:
    *reinterpret_cast<int32_t*>(&rax52) = 0;
    *reinterpret_cast<int32_t*>(&rax52 + 1) = 0;
    goto addr_18f2_104;
    addr_14bf_15:
    v53 = *reinterpret_cast<struct s0**>(&v4->f0);
    *reinterpret_cast<struct s0**>(&v4->f0) = (v4 + v10)->f0;
    (v4 + v10)->f0 = v53;
    goto addr_1503_5;
    addr_14b5_16:
    *reinterpret_cast<int32_t*>(&rax52) = 0;
    *reinterpret_cast<int32_t*>(&rax52 + 1) = 0;
    goto addr_18f2_104;
}

int64_t puts = 0x1046;

void fun_1040(int64_t rdi, struct s1* rsi, int64_t rdx) {
    goto puts;
}

int64_t putchar = 0x1036;

void fun_1030(int64_t rdi) {
    goto putchar;
}

int64_t malloc = 0x1066;

struct s0* fun_1060() {
    goto malloc;
}

int64_t _ITM_deregisterTMCloneTable = 0;

int64_t fun_10a0(int64_t rdi) {
    int64_t rax2;

    rax2 = 0x4030;
    if (1 || (rax2 = _ITM_deregisterTMCloneTable, rax2 == 0)) {
        return rax2;
    } else {
        goto rax2;
    }
}

int64_t printf = 0x1056;

void fun_1050(int64_t rdi, struct s1* rsi) {
    goto printf;
}

int64_t __gmon_start__ = 0;

void fun_1003() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __libc_start_main = 0;

int64_t main();

void fun_1073() {
    __asm__("cli ");
    __libc_start_main(main, __return_address(), reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __asm__("hlt ");
}

signed char __TMC_END__ = 0;

int64_t __cxa_finalize = 0;

int64_t __dso_handle = 0x4028;

int64_t fun_1113() {
    int1_t zf1;
    int64_t rax2;
    int1_t zf3;
    int64_t rdi4;
    int64_t rax5;

    __asm__("cli ");
    zf1 = __TMC_END__ == 0;
    if (!zf1) {
        return rax2;
    } else {
        zf3 = __cxa_finalize == 0;
        if (!zf3) {
            rdi4 = __dso_handle;
            __cxa_finalize(rdi4);
        }
        rax5 = fun_10a0(rdi4);
        __TMC_END__ = 1;
        return rax5;
    }
}

int64_t _ITM_registerTMCloneTable = 0;

int64_t fun_1163() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = 0;
    if (1 || (rax1 = _ITM_registerTMCloneTable, rax1 == 0)) {
        return rax1;
    } else {
        goto rax1;
    }
}

void fun_18f7() {
    __asm__("cli ");
    return;
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    signed char[4] pad4;
    int32_t f4;
};

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

int64_t main() {
    struct s4* rdi1;
    struct s0* rax2;
    struct s0* v3;
    int32_t v4;
    struct s0* rax5;
    int32_t* rsi6;
    struct s5* rdi7;
    struct s6* rsi8;
    struct s7* rsi9;
    struct s8* rdi10;
    struct s9* rsi11;
    struct s10* rdi12;
    struct s11* rsi13;
    struct s12* rdi14;
    struct s13* rsi15;
    struct s14* rdi16;
    struct s15* rsi17;
    struct s16* rdi18;
    struct s17* rsi19;
    struct s18* rdi20;
    struct s19* rsi21;
    struct s20* rdi22;
    struct s21* rsi23;
    struct s22* rdi24;
    struct s23* rsi25;
    struct s24* rdi26;
    struct s25* rsi27;
    struct s26* rdi28;
    struct s27* rsi29;
    struct s28* rdi30;
    struct s29* rsi31;
    struct s30* rdi32;
    struct s31* rsi33;
    struct s32* rdi34;
    struct s33* rsi35;
    struct s34* rdi36;
    struct s35* rsi37;
    struct s36* rdi38;
    struct s37* rsi39;
    struct s38* rdi40;
    struct s39* rsi41;
    struct s40* rdi42;
    struct s41* rsi43;
    struct s42* rdi44;
    struct s43* rsi45;
    struct s44* rdi46;
    struct s45* rsi47;
    struct s46* rdi48;
    struct s47* rsi49;
    struct s0* rax50;
    int32_t v51;

    *reinterpret_cast<int32_t*>(&rdi1) = 24;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = 0;
    rax2 = fun_1060();
    v3 = rax2;
    v4 = 0;
    while (v4 <= 2) {
        *reinterpret_cast<int32_t*>(&rdi1) = 32;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = 0;
        rax5 = fun_1060();
        (v3 + v4)->f0 = rax5;
        ++v4;
    }
    __asm__("pxor xmm0, xmm0");
    rdi1->f0 = *rsi6;
    rdi7 = reinterpret_cast<struct s5*>(&rdi1->f4);
    rsi8 = reinterpret_cast<struct s6*>(&rsi9->f4);
    rdi7->f0 = rsi8->f0;
    rdi10 = reinterpret_cast<struct s8*>(&rdi7->f4);
    rsi11 = reinterpret_cast<struct s9*>(&rsi8->f4);
    rdi10->f0 = rsi11->f0;
    rdi12 = reinterpret_cast<struct s10*>(&rdi10->f4);
    rsi13 = reinterpret_cast<struct s11*>(&rsi11->f4);
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s12*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s13*>(&rsi13->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s14*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s15*>(&rsi15->f4);
    rdi16->f0 = rsi17->f0;
    rdi18 = reinterpret_cast<struct s16*>(&rdi16->f4);
    rsi19 = reinterpret_cast<struct s17*>(&rsi17->f4);
    rdi18->f0 = rsi19->f0;
    rdi20 = reinterpret_cast<struct s18*>(&rdi18->f4);
    rsi21 = reinterpret_cast<struct s19*>(&rsi19->f4);
    rdi20->f0 = rsi21->f0;
    rdi22 = reinterpret_cast<struct s20*>(&rdi20->f4);
    rsi23 = reinterpret_cast<struct s21*>(&rsi21->f4);
    rdi22->f0 = rsi23->f0;
    rdi24 = reinterpret_cast<struct s22*>(&rdi22->f4);
    rsi25 = reinterpret_cast<struct s23*>(&rsi23->f4);
    rdi24->f0 = rsi25->f0;
    rdi26 = reinterpret_cast<struct s24*>(&rdi24->f4);
    rsi27 = reinterpret_cast<struct s25*>(&rsi25->f4);
    rdi26->f0 = rsi27->f0;
    rdi28 = reinterpret_cast<struct s26*>(&rdi26->f4);
    rsi29 = reinterpret_cast<struct s27*>(&rsi27->f4);
    rdi28->f0 = rsi29->f0;
    rdi30 = reinterpret_cast<struct s28*>(&rdi28->f4);
    rsi31 = reinterpret_cast<struct s29*>(&rsi29->f4);
    rdi30->f0 = rsi31->f0;
    rdi32 = reinterpret_cast<struct s30*>(&rdi30->f4);
    rsi33 = reinterpret_cast<struct s31*>(&rsi31->f4);
    rdi32->f0 = rsi33->f0;
    rdi34 = reinterpret_cast<struct s32*>(&rdi32->f4);
    rsi35 = reinterpret_cast<struct s33*>(&rsi33->f4);
    rdi34->f0 = rsi35->f0;
    rdi36 = reinterpret_cast<struct s34*>(&rdi34->f4);
    rsi37 = reinterpret_cast<struct s35*>(&rsi35->f4);
    rdi36->f0 = rsi37->f0;
    rdi38 = reinterpret_cast<struct s36*>(&rdi36->f4);
    rsi39 = reinterpret_cast<struct s37*>(&rsi37->f4);
    rdi38->f0 = rsi39->f0;
    rdi40 = reinterpret_cast<struct s38*>(&rdi38->f4);
    rsi41 = reinterpret_cast<struct s39*>(&rsi39->f4);
    rdi40->f0 = rsi41->f0;
    rdi42 = reinterpret_cast<struct s40*>(&rdi40->f4);
    rsi43 = reinterpret_cast<struct s41*>(&rsi41->f4);
    rdi42->f0 = rsi43->f0;
    rdi44 = reinterpret_cast<struct s42*>(&rdi42->f4);
    rsi45 = reinterpret_cast<struct s43*>(&rsi43->f4);
    rdi44->f0 = rsi45->f0;
    rdi46 = reinterpret_cast<struct s44*>(&rdi44->f4);
    rsi47 = reinterpret_cast<struct s45*>(&rsi45->f4);
    rdi46->f0 = rsi47->f0;
    rdi48 = reinterpret_cast<struct s46*>(&rdi46->f4);
    rsi49 = reinterpret_cast<struct s47*>(&rsi47->f4);
    rdi48->f0 = rsi49->f0;
    rdi48->f4 = rsi49->f4;
    display(v3, 3, 4);
    rax50 = solve(v3, 3, 4);
    if (!rax50) {
        fun_1040("No or infinetly many solutions", 3, 4);
    }
    display(v3, 3, 4);
    v51 = 0;
    while (v51 <= 2) {
        __asm__("movd xmm0, rax");
        fun_1050("%lf,", 3);
        ++v51;
    }
    return 0;
}

int64_t g3ff8 = 0;

void fun_1046() {
    goto g3ff8;
}

void fun_1036() {
    goto 0x1020;
}

void fun_1066() {
    goto 0x1020;
}

void fun_1056() {
    goto 0x1020;
}
