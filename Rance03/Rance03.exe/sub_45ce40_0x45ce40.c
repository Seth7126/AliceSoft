// 函数: sub_45ce40
// 地址: 0x45ce40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_6 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b84cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
void* var_48 = esi
int32_t edx = *(arg3 + 0x20)
void* eax_5

if (edx != 0)
    eax_5 = *(arg3 + 0x24)

if (edx == 0 || eax_5 == *(arg3 + 0x1c))
    var_50 = nullptr
else
    var_50 = eax_5 + 8

int32_t* result

while (true)
    void* eax_9
    
    if (edx == 0 || *(arg3 + 0x24) == *(arg3 + 0x1c))
        eax_9 = nullptr
    else
        void* eax_8 = **(arg3 + 0x24)
        *(arg3 + 0x24) = eax_8
        
        if (*(arg3 + 0x20) == 0 || eax_8 == *(arg3 + 0x1c))
            eax_9 = nullptr
        else
            eax_9 = eax_8 + 8
    
    int32_t var_40
    
    if (eax_9 == 0)
        sub_401f60(&var_40, 0x6dc394)
        int32_t var_4_5 = 0
    label_45d066:
        sub_456ab0(*(arg1 + 4), &var_40, var_50)
        int32_t var_2c
        
        if (var_2c u>= 0x10)
            j__free(var_40)
    else
        if (*(eax_9 + 0x1c) == 0xa)
            goto label_45d000
        
        struct exfile::CDefineData::VTable** eax_10 = sub_69adc6(0x60)
        struct exfile::CDefineData::VTable** var_44_1 = eax_10
        int32_t var_4 = 1
        struct exfile::CDefineData::VTable** ebx_2
        
        if (eax_10 == 0)
            ebx_2 = nullptr
        else
            ebx_2 = sub_460690(eax_10)
        
        int32_t var_4_1 = 0xffffffff
        struct exfile::CDefineData::VTable** var_4c
        int32_t* ecx_1 = &var_4c
        int32_t eax_12 = *(esi + 0x54)
        var_4c = ebx_2
        
        if (&var_4c u< eax_12)
            ecx_1 = *(esi + 0x50)
        
        if (&var_4c u>= eax_12 || ecx_1 u> &var_4c)
            if (eax_12 == *(esi + 0x58))
                int32_t* var_68_2 = ecx_1
                sub_412f20(esi + 0x50)
            
            struct exfile::CDefineData::VTable*** eax_15 = *(esi + 0x54)
            
            if (eax_15 != 0)
                *eax_15 = ebx_2
        else
            if (eax_12 == *(esi + 0x58))
                int32_t* var_68_1 = ecx_1
                sub_412f20(esi + 0x50)
            
            int32_t* ecx_3 = *(esi + 0x54)
            
            if (ecx_3 != 0)
                *ecx_3 = *(*(esi + 0x50) + ((&var_4c - ecx_1) s>> 2 << 2))
        
        *(esi + 0x54) += 4
        int32_t ecx_7 = (*(esi + 0x54) - *(esi + 0x50)) s>> 2
        int32_t var_68_3 = ecx_7
        
        if (sub_45e4e0(arg1, *(*(esi + 0x50) + (ecx_7 << 2) - 4), arg3).b != 0)
            edx = *(arg3 + 0x20)
            void* eax_20
            
            if (edx == 0 || *(arg3 + 0x24) == *(arg3 + 0x1c))
                eax_20 = nullptr
            else
                void* eax_19 = **(arg3 + 0x24)
                *(arg3 + 0x24) = eax_19
                
                if (edx == 0 || eax_19 == *(arg3 + 0x1c))
                    eax_20 = nullptr
                else
                    eax_20 = eax_19 + 8
            
            if (eax_20 == 0)
                sub_401f60(&var_40, 0x6dc478)
                int32_t var_4_3 = 2
                goto label_45d066
            
            if (*(eax_20 + 0x1c) != 0xa)
                esi = var_48
                
                if (*(sub_4665c0(arg3) + 0x1c) == 4)
                    continue
                else
                    sub_401f60(&var_40, 0x6dc450)
                    int32_t var_4_2 = 3
                
                goto label_45d066
            
            esi = var_48
        label_45d000:
            
            if (*(esi + 0x50) != *(esi + 0x54))
                *(esi + 4) = 5
                result.b = 1
                break
            
            int32_t var_28
            sub_401f60(&var_28, 0x6dc494)
            int32_t var_4_4 = 4
            sub_456ab0(*(arg1 + 4), &var_28, var_50)
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
    result.b = 0
    break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
