// 函数: sub_6a8994
// 地址: 0x6a8994
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x748228
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x748228 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_5 = &data_6a89a0
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t* eax = arg3
void* ecx = eax[1]
int32_t edx_1

if (ecx != 0 && *(ecx + 8) != 0)
    edx_1 = eax[2]

int32_t result

if (ecx != 0 && *(ecx + 8) != 0 && (edx_1 != 0 || (*eax & 0x80000000) != 0))
    int32_t ecx_1 = *eax
    void** edi_1 = arg2
    
    if (ecx_1 s>= 0)
        edi_1 = &edi_1[3] + edx_1
    
    int32_t var_8_1 = 0
    int32_t eax_1
    
    if (ecx_1.b s< 0 && (*arg4 & 0x10) != 0)
        eax_1 = data_75d41c
    
    void* ecx_4
    
    if (ecx_1.b s< 0 && (*arg4 & 0x10) != 0 && eax_1 != 0)
        void* eax_2 = eax_1()
        
        if (_ValidateRead(eax_2) == 0)
            _inconsistency()
            noreturn
        
        if (_ValidateRead(edi_1) == 0)
            _inconsistency()
            noreturn
        
        ecx_4 = eax_2
        goto label_6a8a1e
    
    int32_t var_38_4 = *(arg1 + 0x18)
    
    if ((ecx_1.b & 8) != 0)
        if (_ValidateRead(var_38_4) == 0)
            _inconsistency()
            noreturn
        
        if (_ValidateRead(edi_1) == 0)
            _inconsistency()
            noreturn
        
        ecx_4 = *(arg1 + 0x18)
    label_6a8a1e:
        *edi_1 = ecx_4
        *edi_1 = ___AdjustPointer(ecx_4, &arg4[8])
    else if ((*arg4 & 1) != 0)
        if (_ValidateRead(var_38_4) == 0)
            _inconsistency()
            noreturn
        
        if (_ValidateRead(edi_1) == 0)
            _inconsistency()
            noreturn
        
        _memcpy(edi_1, *(arg1 + 0x18), *(arg4 + 0x14))
        
        if (*(arg4 + 0x14) == 4 && *edi_1 != 0)
            *edi_1 = ___AdjustPointer(*edi_1, &arg4[8])
    else if (*(arg4 + 0x18) != 0)
        if (_ValidateRead(var_38_4) == 0)
            _inconsistency()
            noreturn
        
        if (_ValidateRead(edi_1) == 0)
            _inconsistency()
            noreturn
        
        if (_ValidateRead(*(arg4 + 0x18)) == 0)
            _inconsistency()
            noreturn
        
        int32_t var_34_4 = 0
        int32_t ebx
        ebx.b = (*arg4 & 4) != 0
        result_1 = ebx + 1
        int32_t result_2 = result_1
    else
        if (_ValidateRead(var_38_4) == 0)
            _inconsistency()
            noreturn
        
        if (_ValidateRead(edi_1) == 0)
            _inconsistency()
            noreturn
        
        _memcpy(edi_1, ___AdjustPointer(*(arg1 + 0x18), &arg4[8]), *(arg4 + 0x14))
    
    int32_t var_8_2 = 0xfffffffe
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a8b55
return result
