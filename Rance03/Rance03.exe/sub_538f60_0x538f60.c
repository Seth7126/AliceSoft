// 函数: sub_538f60
// 地址: 0x538f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1a78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = 0
int32_t* esi = arg1 + 8
int32_t i_1 = 0
int32_t* var_20 = esi

do
    void* eax_3 = *esi
    int32_t eax_4
    
    if (eax_3 != 0)
        eax_4 = *(eax_3 + 4)
    else
        eax_4 = 0xffffffff
    
    int32_t ebx_1 = 0
    int32_t* edi_1 = nullptr
    int32_t var_18 = 0
    int32_t* var_14_1 = nullptr
    int32_t* ecx_2 = *(arg3 + 0x58) + ((eax_4 * 9 + 3) << 2)
    int32_t eax_7 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    int32_t* j = *ecx_2
    
    if (j != ecx_2[1])
        do
            int32_t* ebp = *arg2 + (*j << 2)
            
            if (ebp u>= edi_1 || ebx_1 u> ebp)
                if (edi_1 == eax_7 && (eax_7 - edi_1) s>> 2 u< 1)
                    int32_t edi_6 = (edi_1 - ebx_1) s>> 2
                    
                    if (0x3fffffff - edi_6 u< 1)
                        sub_69a551("vector<T> too long")
                        noreturn
                    
                    int32_t eax_12 = (eax_7 - ebx_1) s>> 2
                    uint32_t edx_5 = eax_12 u>> 1
                    int32_t eax_13
                    
                    if (0x3fffffff - edx_5 u>= eax_12)
                        eax_13 = eax_12 + edx_5
                    else
                        eax_13 = 0
                    
                    if (eax_13 u< edi_6 + 1)
                        eax_13 = edi_6 + 1
                    
                    sub_412f90(&var_18, eax_13)
                    eax_7 = var_10_1
                    edi_1 = var_14_1
                    ebx_1 = var_18
                
                if (edi_1 != 0)
                    *edi_1 = *ebp
            else
                int32_t ebp_2 = (ebp - ebx_1) s>> 2
                
                if (edi_1 == eax_7 && (eax_7 - edi_1) s>> 2 u< 1)
                    int32_t edi_3 = (edi_1 - ebx_1) s>> 2
                    
                    if (0x3fffffff - edi_3 u< 1)
                        sub_69a551("vector<T> too long")
                        noreturn
                    
                    int32_t eax_9 = (eax_7 - ebx_1) s>> 2
                    uint32_t edx_3 = eax_9 u>> 1
                    int32_t eax_10
                    
                    if (0x3fffffff - edx_3 u>= eax_9)
                        eax_10 = eax_9 + edx_3
                    else
                        eax_10 = 0
                    
                    if (eax_10 u< edi_3 + 1)
                        eax_10 = edi_3 + 1
                    
                    sub_412f90(&var_18, eax_10)
                    eax_7 = var_10_1
                    edi_1 = var_14_1
                    ebx_1 = var_18
                
                if (edi_1 != 0)
                    *edi_1 = *(ebx_1 + (ebp_2 << 2))
            
            edi_1 = &edi_1[1]
            j = &j[1]
            var_14_1 = edi_1
        while (j != ecx_2[1])
        
        i = i_1
    
    sub_4a6db0(&var_20[1], &var_18)
    int32_t var_4_1 = 0xffffffff
    
    if (ebx_1 != 0)
        j__free(ebx_1)
        var_18 = 0
        int32_t var_14_2 = 0
        int32_t var_10_2 = 0
    
    i += 1
    esi = &var_20[5]
    i_1 = i
    var_20 = esi
while (i s< 3)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
