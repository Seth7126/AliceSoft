// 函数: sub_5726b0
// 地址: 0x5726b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c828
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_40 = arg1
int32_t* var_44 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
int32_t edi = arg2[1]

for (int128_t* i = *arg2; i != edi; i += 0x24)
    int32_t j_1 = 3
    int32_t var_1c_1 = i[2].d
    int128_t var_3c = *i
    float xmm1_1 = *arg3
    float xmm2_1 = arg3[1]
    float xmm3_1 = arg3[2]
    void* eax_5 = &var_3c:8
    int128_t var_2c = i[1]
    int32_t j
    
    do
        *(eax_5 - 8) = xmm1_1 f+ *(eax_5 - 8)
        *(eax_5 - 4) = *(eax_5 - 4) + xmm2_1
        *eax_5 = *eax_5 + xmm3_1
        eax_5 += 0xc
        j = j_1
        j_1 -= 1
    while (j != 1)
    float var_50
    sub_5f1f30(&var_3c:0xc, &var_3c, &var_50, &var_3c:0xc, &var_2c:8)
    int32_t var_4c
    
    if (not(0 f>= var_4c))
        if (arg1[1] == arg1[2])
            float* var_64_2 = &var_50
            sub_572890(arg1)
        
        int128_t* ecx_2 = arg1[1]
        
        if (ecx_2 != 0)
            sub_571e60(ecx_2, &var_3c)
        
        arg1[1] += 0x5c

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
