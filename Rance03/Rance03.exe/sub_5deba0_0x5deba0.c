// 函数: sub_5deba0
// 地址: 0x5deba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2738
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = data_75d50c
struct _EXCEPTION_REGISTRATION_RECORD** ebx = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** var_18 = nullptr
int32_t var_14 = 0
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x38e38e39, *(ebp + 0xa0) - *(ebp + 0x9c))
int32_t var_10 = 0
int32_t edx_3 = edx_2 s>> 4
int32_t eax_6 = (edx_3 u>> 0x1f) + edx_3
int32_t esi = 0
int32_t var_4 = 0
int32_t* result
int32_t ebp_1

if (eax_6 s<= 0)
    ebp_1 = 0
    result.b = (*(*arg1 + 0x38))(eax_2).b != 0
else
    int32_t edi_1 = 0
    
    do
        int32_t eax_7
        int32_t edx_4
        edx_4:eax_7 = muls.dp.d(0x38e38e39, *(ebp + 0xa0) - *(ebp + 0x9c))
        int32_t edx_5 = edx_4 s>> 4
        
        if (esi u< (edx_5 u>> 0x1f) + edx_5)
            void* ecx_2 = *(ebp + 0x9c)
            void* ecx_3 = ecx_2 + edi_1
            
            if (ecx_2 != neg.d(edi_1) && *(ecx_3 + 0x18) != 0 && sub_5b6660(ecx_3) == 0)
                sub_421cd0(&var_18, ecx_3 + 8)
        
        esi += 1
        edi_1 += 0x48
    while (esi s< eax_6)
    
    ebx = var_18
    ebp_1 = var_14
    
    if (ebx == ebp_1)
        result.b = (*(*arg1 + 0x38))(eax_2).b != 0
    else
        int32_t var_24 = (ebp_1 - ebx) s/ 0x18
        
        if ((*(*arg1 + 0x30))(&var_24, 1).b != 0)
            int32_t edi_2 = 0
            
            if (var_24 s> 0)
                struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = ebx
                
                do
                    result = (*(*arg1 + 0x18))(edi_2)
                    
                    if (result == 0)
                        goto label_5dec9c
                    
                    struct _EXCEPTION_REGISTRATION_RECORD* edx_8
                    
                    if (esi_1[5] u< 0x10)
                        edx_8 = esi_1
                    else
                        edx_8 = *esi_1
                    
                    (*(*result + 4))(edx_8)
                    edi_2 += 1
                    esi_1 = &esi_1[6]
                while (edi_2 s< var_24)
            
            result.b = 1
        else
        label_5dec9c:
            result.b = 0

if (ebx != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_2 = ebx
    
    if (ebx != ebp_1)
        do
            if (esi_2[5] u>= 0x10)
                j__free(*esi_2)
            
            esi_2[5] = 0xf
            esi_2[4] = 0
            *esi_2 = nullptr
            esi_2 = &esi_2[6]
        while (esi_2 != ebp_1)
    
    j__free(ebx)
    result.b = result.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
