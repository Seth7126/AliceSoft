// 函数: sub_52c5f0
// 地址: 0x52c5f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c385b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_ec = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_d8 = ebx
void* ebp = ebx + 0x10
void* ecx = ebx + 4
*(ebp + 4) = *(ebx + 0x10)
int32_t edi = *(ecx + 4)
int32_t* esi = *ecx
void* var_d4 = ecx

if (esi != edi)
    do
        (**esi)(0)
        esi = &esi[0x2b]
    while (esi != edi)
    
    ecx = ebx + 4

*(ecx + 4) = *ecx
int32_t* i = *arg2

if (i != arg2[1])
    do
        struct sealengine::CBone::VTable* var_b8
        sub_52b380(&var_b8, (i - *arg2) s>> 2, *i)
        int32_t var_4 = 0
        sub_52cc50(var_d4, &var_b8)
        i = &i[1]
        int32_t var_4_1 = 0xffffffff
    while (i != arg2[1])
    
    ebx = var_d8
    ecx = var_d4

int32_t i_1 = *ecx

if (i_1 != *(ebx + 8))
    do
        int32_t ecx_4 = *(ebp + 4)
        int32_t i_3 = i_1
        int32_t ebx_2
        
        if (&i_3 u< ecx_4)
            ebx_2 = *ebp
        
        if (&i_3 u>= ecx_4 || ebx_2 u> &i_3)
            int32_t edx_5 = *(ebp + 8)
            
            if (ecx_4 == edx_5 && (edx_5 - ecx_4) s>> 2 u< 1)
                int32_t edi_5 = *ebp
                int32_t ecx_12 = (ecx_4 - edi_5) s>> 2
                
                if (0x3fffffff - ecx_12 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_7 = (edx_5 - edi_5) s>> 2
                uint32_t ecx_14 = edx_7 u>> 1
                int32_t edx_8
                
                if (0x3fffffff - ecx_14 u>= edx_7)
                    edx_8 = edx_7 + ecx_14
                else
                    edx_8 = 0
                
                if (edx_8 u< ecx_12 + 1)
                    edx_8 = ecx_12 + 1
                
                sub_412f90(ebp, edx_8)
            
            int32_t* eax_21 = *(ebp + 4)
            
            if (eax_21 != 0)
                *eax_21 = i_1
        else
            int32_t edx_1 = *(ebp + 8)
            
            if (ecx_4 == edx_1 && (edx_1 - ecx_4) s>> 2 u< 1)
                int32_t ecx_6 = (ecx_4 - ebx_2) s>> 2
                
                if (0x3fffffff - ecx_6 u< 1)
                    sub_69a551("vector<T> too long")
                    noreturn
                
                int32_t edx_3 = (edx_1 - ebx_2) s>> 2
                uint32_t ecx_8 = edx_3 u>> 1
                int32_t edx_4
                
                if (0x3fffffff - ecx_8 u>= edx_3)
                    edx_4 = edx_3 + ecx_8
                else
                    edx_4 = 0
                
                if (edx_4 u< ecx_6 + 1)
                    edx_4 = ecx_6 + 1
                
                ebp = var_d8 + 0x10
                sub_412f90(ebp, edx_4)
            
            int32_t* ecx_10 = *(ebp + 4)
            
            if (ecx_10 != 0)
                *ecx_10 = *(*ebp + ((&i_3 - ebx_2) s>> 2 << 2))
        
        i_1 += 0xac
        *(ebp + 4) += 4
    while (i_1 != *(var_d8 + 8))

int32_t result = (*(ebp + 4) - *ebp) s>> 2
int32_t result_1 = result
int32_t i_4 = result - 1
int32_t i_5 = i_4

if (i_4 s> 0)
    int32_t ecx_16 = 0
    int32_t edx_9 = 1
    int32_t var_d8_1 = 0
    int32_t var_c8_1 = 1
    int32_t i_2
    
    do
        if (edx_9 s< result)
            int32_t ebx_5 = edx_9
            
            do
                void* eax_25 = *ebp
                void* edi_6 = *(eax_25 + (ebx_5 << 2))
                void* esi_1 = eax_25 + (ebx_5 << 2)
                int32_t* eax_26 = eax_25 + ecx_16
                void* ecx_17 = *eax_26
                
                if (edi_6 != ecx_17)
                    int32_t j = *(edi_6 + 8)
                    
                    if (j != 0xffffffff)
                        int32_t edx_11 = *var_d4
                        
                        do
                            int32_t eax_27 = j * 0xac
                            
                            if (*(ecx_17 + 4) == *(eax_27 + edx_11 + 4))
                                goto label_52c88d
                            
                            j = *(eax_27 + edx_11 + 8)
                        while (j != 0xffffffff)
                    
                    if (edi_6 != ecx_17)
                        int32_t j_1 = *(ecx_17 + 8)
                        
                        if (j_1 != 0xffffffff)
                            int32_t ecx_19 = *var_d4
                            
                            do
                                int32_t eax_28 = j_1 * 0xac
                                
                                if (*(edi_6 + 4) == *(eax_28 + ecx_19 + 4))
                                    int32_t ecx_20 = *eax_26
                                    *eax_26 = *esi_1
                                    *esi_1 = ecx_20
                                    break
                                
                                j_1 = *(eax_28 + ecx_19 + 8)
                            while (j_1 != 0xffffffff)
                
            label_52c88d:
                result = result_1
                ebx_5 += 1
                ecx_16 = var_d8_1
            while (ebx_5 s< result)
            
            edx_9 = var_c8_1
            i_4 = i_5
        
        edx_9 += 1
        ecx_16 += 4
        i_2 = i_4
        i_4 -= 1
        var_c8_1 = edx_9
        var_d8_1 = ecx_16
        i_5 = i_4
    while (i_2 != 1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
