// 函数: sub_652050
// 地址: 0x652050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6cedb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t eax_3 = arg1[1]
int32_t ecx_2 = (eax_3 - *arg1) s>> 5

if (ecx_2 u> arg2)
    int32_t* esi_3 = ((arg2 - ecx_2) << 5) + eax_3
    int32_t* edi_1 = esi_3
    
    if (esi_3 != eax_3)
        int32_t ebx_1 = eax_3
        
        do
            eax_3 = (**edi_1)(0)
            edi_1 = &edi_1[8]
        while (edi_1 != ebx_1)
    
    arg1[1] = esi_3
else if (ecx_2 u< arg2)
    sub_652130(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    void* ecx_7 = arg1[1]
    int32_t var_30_1 = arg2
    sub_6522b0(ecx_7, arg2 - ((ecx_7 - *arg1) s>> 5))
    int32_t eax_12 = (arg1[1] - *arg1) s>> 5
    arg1[1] += (arg2 - eax_12) << 5
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_12

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
