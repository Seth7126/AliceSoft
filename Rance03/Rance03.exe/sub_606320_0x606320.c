// 函数: sub_606320
// 地址: 0x606320
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6cccd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, arg4 - arg3)
int32_t edx_3 = edx_2 s>> 2
int32_t ebx_2 = (arg4 - arg3) s/ 0x18

if (edx_3 u>> 0x1f != neg.d(edx_3))
    int32_t eax_4
    int32_t edx_6
    edx_6:eax_4 = muls.dp.d(0x2aaaaaab, arg1[2] - arg1[1])
    int32_t edx_7 = edx_6 s>> 2
    int32_t eax_7 = (edx_7 u>> 0x1f) + edx_7
    char* edx_8 = arg1[1]
    
    if (eax_7 u< ebx_2)
        int32_t eax_8
        int32_t edx_10
        edx_10:eax_8 = muls.dp.d(0x2aaaaaab, edx_8 - *arg1)
        int32_t edx_11 = edx_10 s>> 2
        int32_t ecx_3 = (edx_11 u>> 0x1f) + edx_11
        
        if (0xaaaaaaa - ecx_3 u< ebx_2)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t eax_11 = sub_410800(arg1, ecx_3 + ebx_2)
        char* eax_12 = sub_4108f0(eax_11)
        int32_t var_8_1 = 0
        int32_t* var_38_3 = arg2
        char* var_20 = eax_12
        char* var_18 = eax_12
        char* eax_13
        int32_t ecx_6
        eax_13, ecx_6 = sub_410d50(eax_12, arg2, *arg1, eax_12)
        char* var_18_1 = eax_13
        int32_t* var_38_4 = arg2
        int32_t var_3c_1 = ecx_6
        char* eax_14 = sub_43f600(eax_13, arg4, arg3, eax_13)
        char* var_18_2 = eax_14
        int32_t* var_38_5 = arg2
        sub_410d50(eax_14, arg1[1], arg2, eax_14)
        int32_t eax_15
        int32_t edx_15
        edx_15:eax_15 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
        int32_t edx_16 = edx_15 s>> 2
        int32_t* eax_19 = *arg1
        
        if (eax_19 != 0)
            sub_4107c0(eax_19, arg1[1])
            j__free(*arg1)
        
        *arg1 = eax_12
        arg1[2] = &eax_12[eax_11 * 0x18]
        void* eax_24 = &eax_12[(ebx_2 + (edx_16 u>> 0x1f) + edx_16) * 0x18]
        arg1[1] = eax_24
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_24
    
    int32_t* var_38_8 = arg2
    void** var_3c_3 = arg3
    sub_43f600(eax_7, arg4, arg3, edx_8)
    int32_t edx_18 = arg1[1]
    int32_t esi_3 = ebx_2 * 0x18
    eax_3 = esi_3 + edx_18
    
    if (arg2 != edx_18 && edx_18 != eax_3)
        eax_3 = sub_607420(eax_3, edx_18, arg2, eax_3)
    
    arg1[1] += esi_3

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
