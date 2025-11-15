// 函数: sub_5fd000
// 地址: 0x5fd000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7422e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_38
void* edi_1 = arg4 - arg3
int32_t eax_3
void* edx
edx:eax_3 = muls.dp.d(0x92492493, edi_1)
int32_t edx_2 = (edx + edi_1) s>> 5
int32_t eax_6 = edi_1 s/ 0x38

if (edx_2 u>> 0x1f != neg.d(edx_2))
    int32_t eax_10 = (arg1[2] - arg1[1]) s/ 0x38
    
    if (eax_10 u< eax_6)
        int32_t ecx_5 = (arg1[1] - *arg1) s/ 0x38
        
        if (0x4924924 - ecx_5 u< eax_6)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t eax_14 = sub_467900(arg1, ecx_5 + eax_6)
        struct sys43vm::CCallFuncCount::VTable** eax_15
        int32_t ecx_7
        eax_15, ecx_7 = sub_467970(eax_14)
        int32_t var_8_1 = 0
        int32_t var_3c_3 = ecx_7
        int32_t var_40_1 = 0.d
        int32_t var_44_1 = ecx_7
        struct sys43vm::CCallFuncCount::VTable** var_18 = eax_15
        struct sys43vm::CCallFuncCount::VTable** eax_16
        int32_t ecx_9
        eax_16, ecx_9 = sub_5fdf90(eax_15, arg2, *arg1, eax_15)
        struct sys43vm::CCallFuncCount::VTable** var_18_1 = eax_16
        int32_t var_3c_4 = ecx_9
        int32_t var_40_2 = 0.d
        int32_t var_44_2 = ecx_9
        struct sys43vm::CCallFuncCount::VTable** eax_17
        int32_t ecx_11
        eax_17, ecx_11 = sub_5fdf90(eax_16, arg4, arg3, eax_16)
        struct sys43vm::CCallFuncCount::VTable** var_18_2 = eax_17
        int32_t var_3c_5 = ecx_11
        int32_t var_40_3 = 0.d
        int32_t var_44_3 = ecx_11
        sub_5fdf90(eax_17, arg1[1], arg2, eax_17)
        int32_t ecx_14 = arg1[1] - *arg1
        int32_t* ecx_15 = *arg1
        
        if (ecx_15 != 0)
            sub_5fca40(ecx_15, arg1[1])
            void* esi_2 = *arg1
            sub_403160(esi_2, (arg1[2] - esi_2) s/ 0x38, 0x38)
        
        arg1[2] = &eax_15[eax_14 * 0xe]
        void* eax_31 = &eax_15[(eax_6 + ecx_14 s/ 0x38) * 0xe]
        arg1[1] = eax_31
        *arg1 = eax_15
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_31
    
    void* var_3c_7 = arg3
    int32_t var_40_6 = 0.d
    void* var_44_5 = arg3
    sub_5fdf90(eax_10, arg4, arg3, arg1[1])
    void* edx_19 = arg1[1]
    int32_t esi_5 = eax_6 * 0x38
    eax_6 = esi_5 + edx_19
    
    if (arg2 != edx_19 && edx_19 != eax_6)
        int32_t var_3c_8 = 0.d
        eax_6 = sub_5fe350(eax_6, edx_19, arg2, eax_6)
    
    arg1[1] += esi_5

fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
