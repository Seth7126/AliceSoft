// 函数: sub_67fe50
// 地址: 0x67fe50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746bd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_3c
void* eax_3
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
    int32_t* edx_8 = arg1[1]
    
    if (eax_7 u< ebx_2)
        int32_t esi_1 = *arg1
        int32_t ecx_3 = (edx_8 - esi_1) s/ 0x18
        
        if (0xaaaaaaa - ecx_3 u< ebx_2)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t eax_11
        int32_t edx_12
        edx_12:eax_11 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_1)
        int32_t ecx_6 = 0
        int32_t edx_13 = edx_12 s>> 2
        int32_t esi_4 = (edx_13 u>> 0x1f) + edx_13
        uint32_t eax_13 = esi_4 u>> 1
        
        if (0xaaaaaaa - eax_13 u>= esi_4)
            ecx_6 = eax_13 + esi_4
        
        int32_t eax_15 = ecx_3 + ebx_2
        
        if (ecx_6 u>= eax_15)
            eax_15 = ecx_6
        
        char var_28
        var_28.d = eax_15
        char* eax_16
        int32_t ecx_7
        eax_16, ecx_7 = sub_417580(eax_15)
        int32_t var_8_1 = 0
        int32_t var_40_2 = ecx_7
        int32_t var_44_1 = 0.d
        int32_t var_48_1 = ecx_7
        char* var_1c = eax_16
        char* eax_17
        int32_t ecx_9
        eax_17, ecx_9 = sub_417fb0(eax_16, arg2, *arg1, eax_16)
        char* var_1c_1 = eax_17
        int32_t var_40_3 = ecx_9
        int32_t var_44_2 = 0.d
        int32_t var_48_2 = ecx_9
        int32_t* eax_18
        int32_t ecx_11
        eax_18, ecx_11 = sub_433e80(eax_17, arg4, arg3, eax_17)
        int32_t* var_1c_2 = eax_18
        int32_t var_40_4 = ecx_11
        int32_t var_44_3 = 0.d
        int32_t var_48_3 = ecx_11
        sub_417fb0(eax_18, arg1[1], arg2, eax_18)
        int32_t eax_19
        int32_t edx_18
        edx_18:eax_19 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
        void* ecx_15 = *arg1
        int32_t edx_19 = edx_18 s>> 2
        
        if (ecx_15 != 0)
            int32_t* var_40_5 = arg2
            void* var_44_4 = ecx_15
            sub_417d50(ecx_15, arg1[1])
            void* esi_6 = *arg1
            int32_t eax_23
            int32_t edx_21
            edx_21:eax_23 = muls.dp.d(0x2aaaaaab, arg1[2] - esi_6)
            int32_t edx_22 = edx_21 s>> 2
            sub_403160(esi_6, (edx_22 u>> 0x1f) + edx_22, 0x18)
        
        arg1[2] = &eax_16[eax_15 * 0x18]
        void* eax_31 = &eax_16[(ebx_2 + (edx_19 u>> 0x1f) + edx_19) * 0x18]
        arg1[1] = eax_31
        *arg1 = eax_16
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_31
    
    void** var_40_6 = arg3
    int32_t var_44_5 = 0.d
    void** var_48_4 = arg3
    sub_433e80(eax_7, arg4, arg3, edx_8)
    void* esi_7 = arg1[1]
    int32_t ebx_5 = ebx_2 * 0x18
    char var_28_1
    var_28_1.d = arg2
    eax_3 = ebx_5 + esi_7
    
    if (arg2 != esi_7 && esi_7 != eax_3)
        sub_680d30(arg2, esi_7)
        sub_680d30(esi_7, ebx_5 + esi_7)
        eax_3 = sub_680d30(var_28_1.d, ebx_5 + esi_7)
    
    arg1[1] += ebx_5

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
