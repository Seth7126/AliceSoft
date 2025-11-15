// 函数: sub_57c730
// 地址: 0x57c730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73cdf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* var_1c = arg1
void* ebx = &edi[0xc]
void* var_24 = ebx

while (edi != ebx)
    int32_t* eax_3 = *edi
    int32_t* edx_1 = nullptr
    void* const var_30 = nullptr
    int32_t* var_2c_1 = nullptr
    int32_t var_28_1 = 0
    int32_t ecx = *eax_3 * 9
    int32_t eax_6 = *(arg3 + 0x6c)
    int32_t var_8_1 = 0
    int32_t* esi_1 = *(eax_6 + (ecx << 2) + 0xc)
    int32_t eax_7 = *(eax_6 + (ecx << 2) + 0x10)
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    uint32_t ecx_4 = (eax_7 - esi_1 + 3) u>> 2
    
    if (esi_1 u> eax_7)
        ecx_4 = 0
    
    if (ecx_4 != 0)
        void* const ebx_1 = var_30
        int32_t edi_1 = 0
        int32_t eax_15
        
        do
            int32_t* eax_10 = *arg2 + (*esi_1 << 2)
            
            if (eax_10 u>= edx_1 || ebx_1 u> eax_10)
                if (edx_1 == edi_1)
                    sub_404610(&var_30, 1)
                    edx_1 = var_2c_1
                    ebx_1 = var_30
                    edi_1 = var_28_1
                
                if (edx_1 != 0)
                    *edx_1 = *eax_10
            else
                int32_t eax_12 = (eax_10 - ebx_1) s>> 2
                
                if (edx_1 == edi_1)
                    sub_404610(&var_30, 1)
                    edx_1 = var_2c_1
                    ebx_1 = var_30
                    edi_1 = var_28_1
                
                if (edx_1 != 0)
                    *edx_1 = *(ebx_1 + (eax_12 << 2))
            
            edx_1 = &edx_1[1]
            eax_15 = var_18_1 + 1
            var_2c_1 = edx_1
            esi_1 = &esi_1[1]
            var_18_1 = eax_15
        while (eax_15 != ecx_4)
        edi = var_1c
        ebx = var_24
    
    result = sub_4274a0(&edi[1], &var_30)
    int32_t var_8_2 = 0xffffffff
    void* const ecx_9 = var_30
    
    if (ecx_9 != 0)
        result = sub_403160(ecx_9, (var_28_1 - ecx_9) s>> 2, 4)
        var_30 = nullptr
        int32_t var_2c_2 = 0
        int32_t var_28_2 = 0
    
    edi = &edi[4]
    var_1c = edi

fsbase->NtTib.ExceptionList = ExceptionList
return result
