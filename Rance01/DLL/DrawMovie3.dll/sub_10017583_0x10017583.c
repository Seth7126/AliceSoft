// 函数: sub_10017583
// 地址: 0x10017583
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_38 = edi
char var_c = 0
char var_b = 0
char var_a = 0
char var_9 = 0
char var_8 = 0
char var_7 = 0
char var_6 = 0
char var_5 = 0
void* result

if (data_100224d8 == 0)
    result = sub_100188aa
else
    result = sub_10003063(data_100224dc)

int32_t var_2c
double var_14_1

if (arg4 s> 0xa6)
    if (arg4 - 0x3e8 u<= 0xc)
        long double x87_r7_9
        
        switch (arg4)
            case 0x3e8
                void* const var_28_14 = &data_1001d1a4
                *arg3 = fconvert.d(fconvert.t(*arg1))
                goto label_100176a4
            case 0x3e9
                char const* const var_28_15 = "log10"
                *arg3 = fconvert.d(fconvert.t(*arg1))
                goto label_100176a4
            case 0x3ea
                void* const var_28_16 = &data_1001d1b0
                *arg3 = fconvert.d(fconvert.t(*arg1))
                goto label_100176a4
            case 0x3eb
                char const* const var_28_17 = "atan"
                *arg3 = fconvert.d(fconvert.t(*arg1))
                goto label_100176a4
            case 0x3ec
                char const* const var_28_18 = "ceil"
                *arg3 = fconvert.d(fconvert.t(*arg1))
                goto label_100176a4
            case 0x3ed
                char const* const var_28_19 = "floor"
                *arg3 = fconvert.d(fconvert.t(*arg1))
                goto label_100176a4
            case 0x3ee
            label_1001771e:
                void* const var_28_12 = &data_1001d1b4
                goto label_100176a4
            case 0x3ef
                char const* const var_28_20 = "modf"
                *arg3 = fconvert.d(fconvert.t(*arg1))
                goto label_100176a4
            case 0x3f0
            label_10017708:
                char const* const var_28_10 = "acos"
                goto label_100176a4
            case 0x3f1
            label_100176ff:
                char const* const var_28_9 = "asin"
            label_100176a4:
                double var_24_3 = fconvert.d(fconvert.t(*arg1))
                double var_1c_3 = fconvert.d(fconvert.t(*arg2))
                x87_r7_9 = fconvert.t(*arg3)
            case 0x3f2
                void* const var_28_21 = &data_1001d168
            label_100177c6:
                x87_r7_9 = fconvert.t(*arg1) * fconvert.t(var_c.q)
                *arg3 = fconvert.d(x87_r7_9)
                double var_24_4 = fconvert.d(fconvert.t(*arg1))
                double var_1c_4 = fconvert.d(fconvert.t(*arg2))
            case 0x3f3
                void* const var_28_22 = &data_1001d164
                goto label_100177c6
            case 0x3f4
                void* const var_28_23 = &data_1001d160
                goto label_100177c6
        
        var_14_1 = fconvert.d(x87_r7_9)
        var_2c = 1
        result = result(&var_2c)
        
        if (result == 0)
            result = __errno()
            *result = 0x21
        
        *arg3 = fconvert.d(fconvert.t(var_14_1))
else if (arg4 == 0xa6)
    var_2c = 3
    char const* const var_28_13 = "exp10"
label_10017639:
    double var_24_1 = fconvert.d(fconvert.t(*arg1))
    double var_1c_1 = fconvert.d(fconvert.t(*arg2))
    var_14_1 = fconvert.d(fconvert.t(*arg3))
    result = result(&var_2c)
    
    if (result == 0)
        result = __errno()
        *result = 0x22
    
    *arg3 = fconvert.d(fconvert.t(var_14_1))
else if (arg4 s> 0x19)
    if (arg4 == 0x1a)
        *arg3 = fconvert.d(float.t(1))
    else
        if (arg4 == 0x1b)
            var_2c = 2
        label_1001762d:
            void* const var_28_1 = &data_1001d1b4
            goto label_10017639
        
        if (arg4 == 0x1c)
            goto label_1001771e
        
        if (arg4 == 0x1d)
            void* const var_28_11 = &data_1001d1b4
            *arg3 = fconvert.d(fconvert.t(*arg1))
            goto label_100176a4
        
        if (arg4 == 0x3a)
            goto label_10017708
        
        if (arg4 == 0x3d)
            goto label_100176ff
else if (arg4 == 0x19)
    void* const var_28_8 = &data_1001d1b4
label_1001766e:
    double var_24_2 = fconvert.d(fconvert.t(*arg1))
    long double x87_r7_5 = fconvert.t(*arg2)
    var_2c = 4
    double var_1c_2 = fconvert.d(x87_r7_5)
    var_14_1 = fconvert.d(fconvert.t(*arg3))
    result = result(&var_2c)
    *arg3 = fconvert.d(fconvert.t(var_14_1))
else
    switch (arg4)
        case 2
            var_2c = 2
            void* const var_28_7 = &data_1001d1a4
            goto label_10017639
        case 3
            void* const var_28_6 = &data_1001d1a4
            goto label_100176a4
        case 8
            var_2c = 2
            char const* const var_28_5 = "log10"
            goto label_10017639
        case 9
            char const* const var_28_4 = "log10"
            goto label_100176a4
        case 0xe
            var_2c = 3
            void* const var_28_3 = &data_1001d1b0
            goto label_10017639
        case 0xf
            void* const var_28_2 = &data_1001d1b0
            goto label_1001766e
        case 0x18
            var_2c = 3
            goto label_1001762d
return result
