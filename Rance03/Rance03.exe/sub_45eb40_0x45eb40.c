// 函数: sub_45eb40
// 地址: 0x45eb40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b87eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct exfile::CFormatData::VTable** result_2
int32_t eax_2 = __security_cookie ^ &result_2
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 4)
int32_t* ebx = arg2
int32_t* var_38 = ebx
struct exfile::CFormatData::VTable** result

if (esi == *(arg1 + 8))
label_45ec70:
    struct exfile::CFormatData::VTable** result_1 = sub_69adc6(0x44)
    struct exfile::CFormatData::VTable** result_3 = result_1
    int32_t var_4 = 0
    
    if (result_1 == 0)
        result_1 = nullptr
    else
        *result_1 = &exfile::CFormatData::`vftable'
        result_1[1].w = 0
        result_1[2] = 0
        sub_459160(&result_1[3], ebx)
        result_1[9] = 0
        result_1[0xa] = 0
        result_1[0x10] = 0xf
        result_1[0xf] = 0
        result_1[0xb].b = 0
    
    int32_t var_4_1 = 0xffffffff
    void** ecx_4 = &result_2
    int32_t eax_13 = *(arg1 + 8)
    result_2 = result_1
    
    if (&result_2 u< eax_13)
        ecx_4 = *(arg1 + 4)
    
    if (&result_2 u>= eax_13 || ecx_4 u> &result_2)
        if (eax_13 == *(arg1 + 0xc))
            void** var_54_4 = ecx_4
            sub_412f20(arg1 + 4)
        
        void** eax_16 = *(arg1 + 8)
        
        if (eax_16 != 0)
            *eax_16 = result_1
    else
        if (eax_13 == *(arg1 + 0xc))
            void** var_54_3 = ecx_4
            sub_412f20(arg1 + 4)
        
        int32_t* ecx_6 = *(arg1 + 8)
        
        if (ecx_6 != 0)
            *ecx_6 = *(*(arg1 + 4) + ((&result_2 - ecx_4) s>> 2 << 2))
    
    *(arg1 + 8) += 4
    result = result_1
else
    while (true)
        int32_t var_2c
        char* ecx_1 = sub_464920(*esi, &var_2c)
        int32_t eax_7 = ebx[4]
        int32_t var_30_1 = eax_7
        int32_t* edi_1
        
        if (ebx[5] u< 0x10)
            edi_1 = ebx
        else
            edi_1 = *ebx
        
        int32_t ebx_1 = *(ecx_1 + 0x10)
        
        if (*(ecx_1 + 0x14) u>= 0x10)
            ecx_1 = *ecx_1
        
        int32_t edx_1 = eax_7
        
        if (ebx_1 u< eax_7)
            edx_1 = ebx_1
        
        if (edx_1 == 0)
            goto label_45ec26
        
        int32_t i_1 = edx_1 - 4
        
        if (edx_1 u>= 4)
            int32_t i
            
            do
                if (*ecx_1 != *edi_1)
                    goto label_45ebe6
                
                ecx_1 = &ecx_1[4]
                edi_1 = &edi_1[1]
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        int32_t eax_9
        
        if (i_1 == 0xfffffffc)
            eax_9 = 0
        else
        label_45ebe6:
            eax_7.b = *ecx_1
            char temp2_1 = *edi_1
            
            if (eax_7.b != temp2_1)
                eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp2_1) | 1
            else if (i_1 == 0xfffffffd)
                eax_9 = 0
            else
                eax_7.b = ecx_1[1]
                char temp5_1 = *(edi_1 + 1)
                
                if (eax_7.b != temp5_1)
                    eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp5_1) | 1
                else if (i_1 == 0xfffffffe)
                    eax_9 = 0
                else
                    eax_7.b = ecx_1[2]
                    char temp6_1 = *(edi_1 + 2)
                    
                    if (eax_7.b != temp6_1)
                        eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp6_1) | 1
                    else if (i_1 == 0xffffffff)
                        eax_9 = 0
                    else
                        eax_7.b = ecx_1[3]
                        char temp7_1 = *(edi_1 + 3)
                        
                        if (eax_7.b == temp7_1)
                            eax_9 = 0
                        else
                            eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp7_1) | 1
        
        bool cond:2_1 = eax_9 == 0
        
        if (eax_9 == 0)
            eax_7 = var_30_1
        label_45ec26:
            int32_t eax_10
            
            if (ebx_1 u>= eax_7)
                eax_10.b = ebx_1 != var_38[4]
            else
                eax_10 = 0xffffffff
            
            cond:2_1 = eax_10 == 0
        
        ebx_1.b = cond:2_1
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        if (ebx_1.b != 0)
            result = *esi
            break
        
        esi = &esi[1]
        ebx = var_38
        
        if (esi == *(arg1 + 8))
            goto label_45ec70

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_2)
return result
