// 函数: ??$BuildCatchObjectHelperInternal@V__FrameHandler3@@@@YAHPAUEHExceptionRecord@@PAXPBU_s_HandlerType@@PBU_s_CatchableType@@@Z
// 地址: 0x6ffb75
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7de2b8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = __except_handler4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7de2b8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_6ffb81
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
void* ecx = arg3[1]
int32_t edx_1

if (ecx != 0 && *(ecx + 8) != 0)
    edx_1 = arg3[2]

int32_t result

if (ecx != 0 && *(ecx + 8) != 0 && (edx_1 != 0 || *arg3 s< 0))
    int32_t ecx_1 = *arg3
    void** esi_1 = arg2
    
    if (ecx_1 s>= 0)
        esi_1 = &esi_1[3] + edx_1
    
    int32_t var_8_1 = 0
    int32_t eax_1
    
    if (ecx_1.b s< 0 && (*arg4 & 0x10) != 0)
        eax_1 = data_7fc3a8
    
    void* ecx_3
    
    if (ecx_1.b s< 0 && (*arg4 & 0x10) != 0 && eax_1 != 0)
        j_sub_4033e0()
        ecx_3 = eax_1()
        goto label_6ffbf0
    
    if ((ecx_1.b & 8) != 0)
        ecx_3 = *(arg1 + 0x18)
    label_6ffbf0:
        
        if (ecx_3 == 0 || esi_1 == 0)
            _terminate()
            noreturn
        
        *esi_1 = ecx_3
        *esi_1 = ___AdjustPointer(ecx_3, &arg4[8])
    else if ((*arg4 & 1) != 0)
        if (*(arg1 + 0x18) == 0 || esi_1 == 0)
            _terminate()
            noreturn
        
        sub_6feca0(esi_1, *(arg1 + 0x18), *(arg4 + 0x14))
        
        if (*(arg4 + 0x14) == 4 && *esi_1 != 0)
            *esi_1 = ___AdjustPointer(*esi_1, &arg4[8])
    else if (*(arg4 + 0x18) != 0)
        if (*(arg1 + 0x18) == 0 || esi_1 == 0)
            _terminate()
            noreturn
        
        int32_t var_38_3 = 0
        int32_t ebx
        ebx.b = (*arg4 & 4) != 0
        result_1 = ebx + 1
        int32_t result_2 = result_1
    else
        int32_t ecx_5 = *(arg1 + 0x18)
        
        if (ecx_5 == 0 || esi_1 == 0)
            _terminate()
            noreturn
        
        sub_6feca0(esi_1, ___AdjustPointer(ecx_5, &arg4[8]), *(arg4 + 0x14))
    
    int32_t var_8_2 = 0xfffffffe
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ffca2
return result
