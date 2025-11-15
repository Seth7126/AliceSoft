// 函数: sub_4dee90
// 地址: 0x4dee90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734ac0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_24 = ebx
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x68) != 0)
    int32_t esi_1 = *(arg1 + 0x134)
    void* const var_20
    
    while (true)
        void* ecx = *(arg1 + 0x68)
        void* eax_3 = *(ecx + 0xc)
        int32_t eax_4
        
        if (eax_3 != 0)
            void* eax_5 = *(eax_3 + 0x38)
            
            if (eax_5 != 0)
                eax_4 = *(eax_5 + 0x14)
            else
                eax_4 = 0xffffffff
        else
            eax_4 = 0xffffffff
        
        if (esi_1 s>= eax_4 - 1)
            break
        
        int32_t eax_7 = *(ecx + 0x48)
        ebx.b = *(ecx + 0x44)
        var_20 = nullptr
        int32_t var_1c_1 = 0
        int32_t var_18_1 = 0
        int32_t var_8_1 = 0
        sub_4dac60(ecx, 0, &var_20, 0, arg1 + 0x70, 0)
        void* const ecx_1 = var_20
        
        if (ecx_1 != 0)
            sub_403160(ecx_1, (var_18_1 - ecx_1) s>> 2, 4)
            var_20 = nullptr
            int32_t var_1c_2 = 0
            int32_t var_18_2 = 0
        
        if (ebx.b == 0)
            void* eax_12 = *(arg1 + 0x68)
            int32_t ecx_2 = *(eax_12 + 0x48)
            eax_12.b = *(eax_12 + 0x4c)
            
            if (eax_12.b != 0)
                break
            
            if (eax_7 + 1 != ecx_2)
                break
        
        esi_1 += 1
    
    var_20 = nullptr
    int32_t var_1c_3 = 0
    int32_t var_18_3 = 0
    int32_t var_8_2 = 1
    result = sub_4dac60(*(arg1 + 0x68), 0, &var_20, 0, arg1 + 0x70, 1)
    void* const ecx_4 = var_20
    
    if (ecx_4 != 0)
        result = sub_403160(ecx_4, (var_18_3 - ecx_4) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
