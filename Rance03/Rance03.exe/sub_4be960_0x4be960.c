// 函数: sub_4be960
// 地址: 0x4be960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bdfc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t esi_1 = ebx - *arg1
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0xb21642c9, esi_1)
int32_t esi_4 = esi_1 s/ 0x5c

if (esi_4 u> arg2)
    void* edi_3 = (arg2 - esi_4) * 0x5c + ebx
    void* esi_5 = edi_3
    
    if (edi_3 != ebx)
        do
            eax_3 = sub_4b7cf0(esi_5 + 8)
            esi_5 += 0x5c
        while (esi_5 != ebx)
    
    arg1[1] = edi_3
else if (esi_4 u< arg2)
    sub_4bd2a0(arg1, arg2 - esi_4)
    int32_t var_8_1 = 0
    int32_t var_2c_1 = arg2
    sub_4bf820(arg1[1], arg2 - (arg1[1] - *arg1) s/ 0x5c)
    int32_t eax_14 = (arg2 - (arg1[1] - *arg1) s/ 0x5c) * 0x5c
    arg1[1] += eax_14
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
