// 函数: sub_4144b0
// 地址: 0x4144b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3de8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_68
int32_t eax_2 = __security_cookie ^ &var_68
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_64 = ebx
int32_t __saved_edi
int32_t i_1 = (*(**(ebx + 8) + 0x2c))(__security_cookie ^ &__saved_edi) - 1
void* result

if (i_1 s> 0)
    void* eax_8 = ebx + 0x10
    sub_410480(eax_8, i_1)
    void* result_1 = ebx + 0x1c
    int32_t ecx_3
    result, ecx_3 = sub_410480(result_1, i_1)
    
    if (i_1 s> 0)
        int32_t edx_1 = i_1 - 1
        int32_t edi_1 = 0
        var_68 = edx_1
        int32_t i
        
        do
            int32_t* eax_12 =
                (***(ebx + 0xc))((*(**(ebx + 8) + 0x18))((*(**(ebx + 8) + 0x30))(edx_1)))
            
            if (eax_12 != 0)
                void* ecx_10
                
                if (*eax_12 != 0)
                    char* ecx_11 = eax_12
                    void* eax_13
                    
                    do
                        eax_13.b = *ecx_11
                        ecx_11 = &ecx_11[1]
                    while (eax_13.b != 0)
                    ecx_10 = ecx_11 - &ecx_11[1]
                else
                    ecx_10 = nullptr
                
                sub_402110(*eax_8 + edi_1, eax_12, ecx_10)
                bool cond:0_1 = *eax_12 != 0
                int32_t var_2c_1 = 0xf
                int32_t var_30_1 = 0
                char var_40 = 0
                void* eax_14
                
                if (cond:0_1)
                    int32_t* eax_15 = eax_12
                    void* edx_6 = eax_15 + 1
                    char j
                    
                    do
                        j = *eax_15
                        eax_15 += 1
                    while (j != 0)
                    eax_14 = eax_15 - edx_6
                else
                    eax_14 = nullptr
                
                sub_402110(&var_40, eax_12, eax_14)
                int32_t var_4 = 0
                char* var_80_15 = &var_40
                char var_28
                int32_t* eax_16 = sub_414780(&var_28)
                result = result_1
                int32_t* esi_7 = *result + edi_1
                
                if (esi_7 != eax_16)
                    if (esi_7[5] u>= 0x10)
                        j__free(*esi_7)
                    
                    esi_7[5] = 0xf
                    esi_7[4] = 0
                    *esi_7 = 0
                    result = sub_4030b0(esi_7, eax_16)
                
                int32_t var_14
                
                if (var_14 u>= 0x10)
                    result = j__free(var_28.d)
                
                int32_t var_4_1 = 0xffffffff
                var_14 = 0xf
                int32_t var_18_1 = 0
                var_28 = 0
                
                if (var_2c_1 u>= 0x10)
                    result = j__free(var_40.d)
                
                ebx = var_64
                int32_t var_2c_2 = 0xf
                int32_t var_30_2 = 0
                var_40 = 0
            else
                int32_t* var_48_1 = eax_12
                int32_t* esi_3 = *(ebx + 0x10) + edi_1
                char var_58 = eax_12.b
                int32_t var_44_1 = 0xf
                
                if (esi_3 != &var_58)
                    if (esi_3[5] u>= 0x10)
                        j__free(*esi_3)
                    
                    esi_3[5] = 0xf
                    esi_3[4] = 0
                    *esi_3 = 0
                    sub_4030b0(esi_3, &var_58)
                    
                    if (var_44_1 u>= 0x10)
                        j__free(var_58.d)
                
                result = &var_58
                int32_t* esi_5 = *(ebx + 0x1c) + edi_1
                int32_t var_44_2 = 0xf
                int32_t var_48_2 = 0
                var_58 = 0
                
                if (esi_5 != &var_58)
                    if (esi_5[5] u>= 0x10)
                        j__free(*esi_5)
                    
                    esi_5[5] = 0xf
                    esi_5[4] = 0
                    *esi_5 = 0
                    result = sub_4030b0(esi_5, &var_58)
                    
                    if (var_44_2 u>= 0x10)
                        result = j__free(var_58.d)
            
            edi_1 += 0x18
            edx_1 = var_68 - 1
            var_68 = edx_1
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    sub_4107c0(*(ebx + 0x10), *(ebx + 0x14))
    *(ebx + 0x14) = *(ebx + 0x10)
    sub_4107c0(*(ebx + 0x1c), *(ebx + 0x20))
    result = *(ebx + 0x1c)
    *(ebx + 0x20) = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
