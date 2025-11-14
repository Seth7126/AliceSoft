// 函数: sub_515930
// 地址: 0x515930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c24c9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = nullptr
int32_t result_1 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t arg_4
int32_t result = sub_515f90(&var_18, arg_4)
int32_t* ebp = var_18
int32_t edi = ebp
int32_t result_2 = result_1
arg_4 = edi

if (ebp != result_2)
    int32_t arg_8
    int32_t ebx = arg_8
    
    do
        int32_t eax_3 = sub_69adc6(0x1c)
        arg_8 = eax_3
        var_4.b = 1
        struct partsengine::CLLSprite::VTable** ebp_1
        
        if (eax_3 == 0)
            ebp_1 = nullptr
        else
            ebp_1 = sub_505680(eax_3)
        
        var_4.b = 0
        struct partsengine::CLLSprite::VTable** var_30
        int32_t* ecx_1 = &var_30
        int32_t eax_5 = *(ebx + 4)
        var_30 = ebp_1
        
        if (&var_30 u< eax_5)
            ecx_1 = *ebx
        
        if (&var_30 u>= eax_5 || ecx_1 u> &var_30)
            if (eax_5 == *(ebx + 8))
                int32_t* var_48_2 = ecx_1
                sub_412f20(ebx)
            
            struct partsengine::CLLSprite::VTable*** eax_8 = *(ebx + 4)
            
            if (eax_8 != 0)
                *eax_8 = ebp_1
        else
            if (eax_5 == *(ebx + 8))
                int32_t* var_48_1 = ecx_1
                sub_412f20(ebx)
            
            int32_t* ecx_3 = *(ebx + 4)
            
            if (ecx_3 != 0)
                *ecx_3 = *(*ebx + ((&var_30 - ecx_1) s>> 2 << 2))
        
        *(ebx + 4) += 4
        
        if (ebp_1 != 0)
            sub_4c8ce0(arg3)
        
        if (*(edi + 0x10) != 2)
            sub_506a20(ebp_1, edi)
            result = result_1
        else
            int32_t ecx_6 = *(edi + 0x14)
            char* eax_9
            
            if (ecx_6 u< 0x10)
                eax_9 = edi
            else
                eax_9 = *edi
            
            if (*eax_9 != 0x81)
                sub_506a20(ebp_1, edi)
                result = result_1
            else
                int32_t eax_10
                
                if (ecx_6 u< 0x10)
                    eax_10 = edi
                else
                    eax_10 = *edi
                
                if (*(eax_10 + 1) != 0x5c || arg2 == 0)
                    sub_506a20(ebp_1, edi)
                    result = result_1
                else
                    int32_t esi_3 = edi
                    sub_5157f0(&var_18, &arg_4)
                    edi = arg_4
                    int32_t ecx_8 = edi - esi_3
                    int32_t eax_11
                    int32_t edx_1
                    edx_1:eax_11 = muls.dp.d(0x2aaaaaab, ecx_8)
                    int32_t edx_2 = edx_1 s>> 2
                    int32_t esi_7 = (edx_2 u>> 0x1f) + 1 + edx_2
                    
                    if (esi_7 == 1)
                        sub_506a20(ebp_1, edi)
                        result = result_1
                    else
                        int32_t var_48_5 = ecx_8
                        arg_8 = 0
                        arg_4 = 0
                        sub_515850(arg1, &arg_8, &arg_4)
                        sub_507810(ebp_1, arg_8, arg_4)
                        int32_t i_1 = esi_7 - 2
                        int32_t i_2 = i_1
                        
                        if (i_1 s> 0)
                            int32_t i
                            
                            do
                                struct partsengine::CLLSprite::VTable** eax_12 = sub_69adc6(0x1c)
                                struct partsengine::CLLSprite::VTable** var_1c_1 = eax_12
                                var_4.b = 2
                                struct partsengine::CLLSprite::VTable** esi_8
                                
                                if (eax_12 == 0)
                                    esi_8 = nullptr
                                else
                                    esi_8 = sub_505680(eax_12)
                                
                                var_4.b = 0
                                struct partsengine::CLLSprite::VTable** var_2c
                                int32_t* ecx_12 = &var_2c
                                int32_t eax_14 = *(ebx + 4)
                                var_2c = esi_8
                                
                                if (&var_2c u< eax_14)
                                    ecx_12 = *ebx
                                
                                if (&var_2c u>= eax_14 || ecx_12 u> &var_2c)
                                    if (eax_14 == *(ebx + 8))
                                        int32_t* var_48_8 = ecx_12
                                        sub_412f20(ebx)
                                    
                                    struct partsengine::CLLSprite::VTable*** eax_17 = *(ebx + 4)
                                    
                                    if (eax_17 != 0)
                                        *eax_17 = esi_8
                                else
                                    if (eax_14 == *(ebx + 8))
                                        int32_t* var_48_7 = ecx_12
                                        sub_412f20(ebx)
                                    
                                    int32_t* ecx_14 = *(ebx + 4)
                                    
                                    if (ecx_14 != 0)
                                        *ecx_14 = *(*ebx + ((&var_2c - ecx_12) s>> 2 << 2))
                                    
                                    i_1 = i_2
                                
                                *(ebx + 4) += 4
                                
                                if (esi_8 != 0)
                                    sub_4c8ce0(arg3)
                                
                                sub_507980(esi_8, arg_8, arg_4)
                                i = i_1
                                i_1 -= 1
                                i_2 = i_1
                            while (i != 1)
                        
                        struct partsengine::CLLSprite::VTable** eax_18 = sub_69adc6(0x1c)
                        struct partsengine::CLLSprite::VTable** var_1c_2 = eax_18
                        var_4.b = 3
                        struct partsengine::CLLSprite::VTable** esi_9
                        
                        if (eax_18 == 0)
                            esi_9 = nullptr
                        else
                            esi_9 = sub_505680(eax_18)
                        
                        var_4.b = 0
                        struct partsengine::CLLSprite::VTable** var_28
                        int32_t* ecx_19 = &var_28
                        int32_t eax_20 = *(ebx + 4)
                        var_28 = esi_9
                        
                        if (&var_28 u< eax_20)
                            ecx_19 = *ebx
                        
                        if (&var_28 u>= eax_20 || ecx_19 u> &var_28)
                            if (eax_20 == *(ebx + 8))
                                int32_t* var_48_12 = ecx_19
                                sub_412f20(ebx)
                            
                            struct partsengine::CLLSprite::VTable*** eax_23 = *(ebx + 4)
                            
                            if (eax_23 != 0)
                                *eax_23 = esi_9
                        else
                            if (eax_20 == *(ebx + 8))
                                int32_t* var_48_11 = ecx_19
                                sub_412f20(ebx)
                            
                            int32_t* ecx_21 = *(ebx + 4)
                            
                            if (ecx_21 != 0)
                                *ecx_21 = *(*ebx + ((&var_28 - ecx_19) s>> 2 << 2))
                        
                        *(ebx + 4) += 4
                        
                        if (esi_9 != 0)
                            sub_4c8ce0(arg3)
                        
                        sub_507af0(esi_9, arg_8, arg_4)
                        result = result_1
                        
                        if (edi == result)
                            break
        
        edi += 0x18
        arg_4 = edi
    while (edi != result)
    
    result_2 = result_1
    ebp = var_18

if (ebp != 0)
    int32_t* esi_10 = ebp
    
    if (ebp != result_2)
        do
            if (esi_10[5] u>= 0x10)
                j__free(*esi_10)
            
            esi_10[5] = 0xf
            esi_10[4] = 0
            *esi_10 = 0
            esi_10 = &esi_10[6]
        while (esi_10 != result_2)
    
    result = j__free(ebp)

fsbase->NtTib.ExceptionList = ExceptionList
return result
