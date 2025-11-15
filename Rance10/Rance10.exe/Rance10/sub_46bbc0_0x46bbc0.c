// 函数: sub_46bbc0
// 地址: 0x46bbc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d1f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg1 + 4)
int32_t var_48 = 0

if (*(arg1 + 0xc) u> edx)
    int32_t ebx
    ebx.b = *edx
    
    if (ebx.b u< 0x81)
        if (ebx.b + 0x20 u> 0xf)
            goto label_46bc23
        
        sub_46c070(arg1, arg2)
    else if (ebx.b u<= 0x9f || ebx.b + 0x20 u<= 0xf)
        sub_46c070(arg1, arg2)
    else
    label_46bc23:
        void var_2c
        
        if (ebx.b == 0xa && arg3 s> 0)
            *(arg1 + 4) = &edx[1]
            int32_t var_58_1 = sub_403360(&var_2c, U";<}+>[;{]~|^@/-&%")
            int32_t var_8_1 = 0
            sub_471d90(arg2, &var_2c, 0x20)
            sub_403320(&var_2c)
        else if (sx.d(ebx.b) - 0x22 u> 0x5c)
        label_46bf6d:
            ebx.b -= 0x30
            
            if (ebx.b u> 9)
                sub_46c070(arg1, arg2)
            else
                sub_46c8b0(arg1, arg2)
        else
            switch (sx.d(ebx.b) + &jump_table_46bfa4[0xf]:2)
                case &lookup_table_46c004
                    sub_46c3c0(arg1, arg2)
                case &lookup_table_46c004[1], &lookup_table_46c004[2], &lookup_table_46c004[5], 
                        &lookup_table_46c004[0xc], &lookup_table_46c004[0xe], 
                        &lookup_table_46c004[0xf], &lookup_table_46c004[0x10], 
                        &lookup_table_46c004[0x11], &lookup_table_46c004[0x12], 
                        &lookup_table_46c004[0x13], &lookup_table_46c004[0x14], 
                        &lookup_table_46c004[0x15], &lookup_table_46c004[0x16], 
                        &lookup_table_46c004[0x17], &lookup_table_46c004[0x1d], 
                        &lookup_table_46c004[0x1f], &lookup_table_46c004[0x20], 
                        &lookup_table_46c004[0x21], &lookup_table_46c004[0x22], 
                        &lookup_table_46c004[0x23], &lookup_table_46c004[0x24], 
                        &lookup_table_46c004[0x25], &lookup_table_46c004[0x26], 
                        &lookup_table_46c004[0x27], &lookup_table_46c004[0x28], 
                        &lookup_table_46c004[0x29], &lookup_table_46c004[0x2a], 
                        &lookup_table_46c004[0x2b], &lookup_table_46c004[0x2c], 
                        &lookup_table_46c004[0x2d], &lookup_table_46c004[0x2e], 
                        &lookup_table_46c004[0x2f], &lookup_table_46c004[0x30], 
                        &lookup_table_46c004[0x31], &lookup_table_46c004[0x32], 
                        &lookup_table_46c004[0x33], &lookup_table_46c004[0x34], 
                        &lookup_table_46c004[0x35], &lookup_table_46c004[0x36], 
                        &lookup_table_46c004[0x37], &lookup_table_46c004[0x38], 
                        &lookup_table_46c004[0x3a], &lookup_table_46c004[0x3d], 
                        &lookup_table_46c004[0x3e], &lookup_table_46c004[0x3f], 
                        &lookup_table_46c004[0x40], &lookup_table_46c004[0x41], 
                        &lookup_table_46c004[0x42], &lookup_table_46c004[0x43], 
                        &lookup_table_46c004[0x44], &lookup_table_46c004[0x45], 
                        &lookup_table_46c004[0x46], &lookup_table_46c004[0x47], 
                        &lookup_table_46c004[0x48], &lookup_table_46c004[0x49], 
                        &lookup_table_46c004[0x4a], &lookup_table_46c004[0x4b], 
                        &lookup_table_46c004[0x4c], &lookup_table_46c004[0x4d], 
                        &lookup_table_46c004[0x4e], &lookup_table_46c004[0x4f], 
                        &lookup_table_46c004[0x50], &lookup_table_46c004[0x51], 
                        &lookup_table_46c004[0x52], &lookup_table_46c004[0x53], 
                        &lookup_table_46c004[0x54], &lookup_table_46c004[0x55], 
                        &lookup_table_46c004[0x56], &lookup_table_46c004[0x57], 
                        &lookup_table_46c004[0x58]
                    goto label_46bf6d
                case &lookup_table_46c004[3]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_18 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[0x10])
                    int32_t var_8_16 = 0xf
                    sub_471d90(arg2, &var_2c, 0x19)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[4]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_19 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[0xf])
                    int32_t var_8_17 = 0x10
                    sub_471d90(arg2, &var_2c, 0x1a)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[6]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_5 = sub_403360(&var_2c, &(*U""%(*,)%")[2])
                    int32_t var_8_3 = 2
                    sub_471d90(arg2, &var_2c, 6)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[7]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_6 = sub_403360(&var_2c, &(*U""%(*,)%")[5])
                    int32_t var_8_4 = 3
                    sub_471d90(arg2, &var_2c, 7)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[8]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_4 = sub_403360(&var_2c, &(*U""%(*,)%")[3])
                    int32_t var_8_2 = 1
                    sub_471d90(arg2, &var_2c, 0xd)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[9]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_15 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[3])
                    int32_t var_8_13 = 0xc
                    sub_471d90(arg2, &var_2c, 0xf)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0xa]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_7 = sub_403360(&var_2c, &(*U""%(*,)%")[4])
                    int32_t var_8_5 = 4
                    sub_471d90(arg2, &var_2c, 5)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0xb]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_16 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[0xe])
                    int32_t var_8_14 = 0xd
                    sub_471d90(arg2, &var_2c, 0x10)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0xd]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_17 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[0xd])
                    int32_t var_8_15 = 0xe
                    sub_471d90(arg2, &var_2c, 0xe)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x18]
                    sub_46c6c0(arg1, arg2)
                case &lookup_table_46c004[0x19]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_8 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[6])
                    int32_t var_8_6 = 5
                    sub_471d90(arg2, &var_2c, 4)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x1a]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_13 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[1])
                    int32_t var_8_11 = 0xa
                    sub_471d90(arg2, &var_2c, 0x14)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x1b]
                    *(arg1 + 4) = &edx[1]
                    void var_44
                    int32_t var_58_24 = sub_403360(&var_44, U"=")
                    int32_t var_8_22 = 0x15
                    sub_471d90(arg2, &var_44, 0xc)
                    sub_403320(&var_44)
                case &lookup_table_46c004[0x1c]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_14 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[4])
                    int32_t var_8_12 = 0xb
                    sub_471d90(arg2, &var_2c, 0x15)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x1e]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_22 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[0xc])
                    int32_t var_8_20 = 0x13
                    sub_471d90(arg2, &var_2c, 0x1e)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x39]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_9 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[5])
                    int32_t var_8_7 = 6
                    sub_471d90(arg2, &var_2c, 0xa)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x3b]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_10 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[8])
                    int32_t var_8_8 = 7
                    sub_471d90(arg2, &var_2c, 0xb)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x3c]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_23 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[0xb])
                    int32_t var_8_21 = 0x14
                    sub_471d90(arg2, &var_2c, 0x1c)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x59]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_11 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[7])
                    int32_t var_8_9 = 8
                    sub_471d90(arg2, &var_2c, 8)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x5a]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_20 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[0xa])
                    int32_t var_8_18 = 0x11
                    sub_471d90(arg2, &var_2c, 0x1b)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x5b]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_12 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[2])
                    int32_t var_8_10 = 9
                    sub_471d90(arg2, &var_2c, 9)
                    sub_403320(&var_2c)
                case &lookup_table_46c004[0x5c]
                    *(arg1 + 4) = &edx[1]
                    int32_t var_58_21 = sub_403360(&var_2c, &(*U";<}+>[;{]~|^@/-&%")[9])
                    int32_t var_8_19 = 0x12
                    sub_471d90(arg2, &var_2c, 0x1d)
                    sub_403320(&var_2c)
else
    sub_46cd80(arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
