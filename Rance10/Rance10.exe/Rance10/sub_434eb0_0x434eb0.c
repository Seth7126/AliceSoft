// 函数: sub_434eb0
// 地址: 0x434eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729640
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t edx_3 =
    zx.d(*arg2) + (zx.d(arg2[1]) << 8) + (zx.d(arg2[2]) << 0x10) + (zx.d(arg2[3]) << 0x18)
*arg1 = edx_3
int32_t** result

if (edx_3 == 3 || edx_3 == 5)
    arg1[1] = zx.d(arg2[4]) + (zx.d(arg2[5]) << 8)
    void* esi_1 = &arg2[8]
    arg1[2] = zx.d(arg2[6]) + (zx.d(arg2[7]) << 8)
    uint32_t eax_17
    
    for (int32_t i = 0; i s< 0x40; i += 1)
        eax_17.b = *esi_1
        esi_1 += 1
        *(arg1 + i + 0xc) = eax_17.b
    
    for (int32_t i_1 = 0; i_1 s< 0x40; i_1 += 1)
        eax_17.b = *esi_1
        esi_1 += 1
        *(arg1 + i_1 + 0x4c) = eax_17.b
    
    arg1[0x23] = zx.d(*esi_1) + (zx.d(*(esi_1 + 1)) << 8) + (zx.d(*(esi_1 + 2)) << 0x10)
        + (zx.d(*(esi_1 + 3)) << 0x18)
    void* ebx_3 = zx.d(*(esi_1 + 4)) + (zx.d(*(esi_1 + 5)) << 8) + (zx.d(*(esi_1 + 6)) << 0x10)
    result = zx.d(*(esi_1 + 7)) << 0x18
    void* esi_2 = esi_1 + 8
    void* i_3 = ebx_3 + result
    
    if (ebx_3 != neg.d(result))
        void* i_2
        
        do
            uint32_t eax_29 = zx.d(*(esi_2 + 1))
            esi_2 += 8
            uint32_t ecx_12 = zx.d(*(esi_2 - 4)) + (zx.d(*(esi_2 - 3)) << 8)
            uint32_t var_4c = zx.d(*(esi_2 - 8)) + (eax_29 << 8) + (zx.d(*(esi_2 - 6)) << 0x10)
                + (zx.d(*(esi_2 - 5)) << 0x18)
            uint32_t ecx_14 = ecx_12 + (zx.d(*(esi_2 - 2)) << 0x10) + (zx.d(*(esi_2 - 1)) << 0x18)
            uint32_t var_68_2 = ecx_14
            uint32_t* var_6c_3 = &var_4c
            int32_t* var_54
            sub_435350(&arg1[0x24], &var_54, ecx_14)
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    result.b = 1
else
    int32_t var_8_1 = 0
    var_8_1.b = 1
    void* var_44
    char var_2c
    sub_45aae0(sub_4351a0(sub_403360(&var_44, "APEG "), &var_44, &var_2c, arg1))
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t** var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
