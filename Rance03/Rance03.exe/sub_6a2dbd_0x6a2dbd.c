// 函数: sub_6a2dbd
// 地址: 0x6a2dbd
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0
int32_t var_8 = 0
int32_t (* ecx)()

if (data_75c978 == 0)
    ecx = sub_405db0
else
    ecx = DecodePointer(data_75dea0)

void* result
int32_t var_2c
double var_14_1
double* esi_1

if (arg4 s> 0xa6)
    result = arg4 - 0x3e8
    
    if (result u<= 0xd)
        double* eax_21
        long double x87_r7_10
        
        switch (result)
            case nullptr
                void* const var_28_14 = &data_6d5538
            label_6a2f4f:
                eax_21 = arg1
                esi_1 = arg3
                *esi_1 = fconvert.d(fconvert.t(*eax_21))
                goto label_6a3039
            case 1
                char const* const var_28_15 = "log10"
                goto label_6a2f4f
            case 2
                void* const var_28_16 = &data_6d5530
                goto label_6a2f4f
            case 3
                char const* const var_28_17 = "atan"
                goto label_6a2f4f
            case 4
                char const* const var_28_18 = "ceil"
                goto label_6a2f4f
            case 5
                char const* const var_28_19 = "floor"
                goto label_6a2f4f
            case 6
            label_6a2f5e:
                void* const var_28_12 = &data_6d5534
                goto label_6a302e
            case 7
                char const* const var_28_20 = "modf"
                goto label_6a2f4f
            case 8
            label_6a2f3c:
                char const* const var_28_10 = "acos"
                goto label_6a302e
            case 9
            label_6a2f30:
                char const* const var_28_9 = "asin"
            label_6a302e:
                eax_21 = arg1
                esi_1 = arg3
            label_6a3039:
                double var_24_4 = fconvert.d(fconvert.t(*eax_21))
                double var_1c_4 = fconvert.d(fconvert.t(*arg2))
                x87_r7_10 = fconvert.t(*esi_1)
            case 0xa
                char const (** const var_28_21)[0x7] = &data_6d5584
            label_6a2ffc:
                esi_1 = arg3
                x87_r7_10 = fconvert.t(*arg1) * fconvert.t(var_c.q)
                *esi_1 = fconvert.d(x87_r7_10)
                double var_24_3 = fconvert.d(fconvert.t(*arg1))
                double var_1c_3 = fconvert.d(fconvert.t(*arg2))
            case 0xb
                void* const var_28_22 = &data_6d5588
                goto label_6a2ffc
            case 0xc
                char const (** const var_28_23)[0x21] = &data_6d558c
                goto label_6a2ffc
            case 0xd
            label_6a3027:
                char const* const var_28_24 = "sqrt"
                goto label_6a302e
        
        var_2c = 1
        var_14_1 = fconvert.d(x87_r7_10)
        result = ecx(&var_2c)
        
        if (result == 0)
            result = __errno()
            *result = 0x21
        
        *esi_1 = fconvert.d(fconvert.t(var_14_1))
else if (arg4 == 0xa6)
    var_2c = 3
    char const* const var_28_13 = "exp10"
label_6a2e56:
    esi_1 = arg3
    double var_24_1 = fconvert.d(fconvert.t(*arg1))
    double var_1c_1 = fconvert.d(fconvert.t(*arg2))
    var_14_1 = fconvert.d(fconvert.t(*esi_1))
    result = ecx(&var_2c)
    
    if (result == 0)
        result = __errno()
        *result = 0x22
    
    *esi_1 = fconvert.d(fconvert.t(var_14_1))
else if (arg4 s> 0x19)
    if (arg4 == 0x1a)
        result = arg3
        *result = fconvert.d(float.t(1))
    else
        if (arg4 == 0x1b)
            var_2c = 2
        label_6a2e4c:
            void* const var_28_1 = &data_6d5534
            goto label_6a2e56
        
        if (arg4 == 0x1c)
            goto label_6a2f5e
        
        if (arg4 == 0x1d)
            void* const var_28_11 = &data_6d5534
            goto label_6a2f4f
        
        if (arg4 == 0x31)
            goto label_6a3027
        
        if (arg4 == 0x3a)
            goto label_6a2f3c
        
        result = arg4 - 0x3d
        
        if (arg4 == 0x3d)
            goto label_6a2f30
else if (arg4 == 0x19)
    void* const var_28_8 = &data_6d5534
label_6a2e94:
    esi_1 = arg3
    var_2c = 4
    double var_24_2 = fconvert.d(fconvert.t(*arg1))
    double var_1c_2 = fconvert.d(fconvert.t(*arg2))
    var_14_1 = fconvert.d(fconvert.t(*esi_1))
    result = ecx(&var_2c)
    *esi_1 = fconvert.d(fconvert.t(var_14_1))
else
    switch (arg4)
        case 2
            var_2c = 2
            void* const var_28_7 = &data_6d5538
            goto label_6a2e56
        case 3
            void* const var_28_6 = &data_6d5538
            goto label_6a302e
        case 8
            var_2c = 2
            char const* const var_28_5 = "log10"
            goto label_6a2e56
        case 9
            char const* const var_28_4 = "log10"
            goto label_6a302e
        case 0xe
            var_2c = 3
            void* const var_28_3 = &data_6d5530
            goto label_6a2e56
        case 0xf
            void* const var_28_2 = &data_6d5530
            goto label_6a2e94
    
    result = arg4 - 0x18
    
    if (arg4 == 0x18)
        var_2c = 3
        goto label_6a2e4c
return result
