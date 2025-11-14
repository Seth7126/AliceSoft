// 函数: sub_61c5a0
// 地址: 0x61c5a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce028
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebp = arg1
int32_t __saved_edi
char* result = (**ebp)(__security_cookie ^ &__saved_edi)
char* result_1 = result
char i

do
    i = *result_1
    result_1 = &result_1[1]
while (i != 0)
void* ebx = result_1 - &result_1[1]

if (ebx s> 0)
    char* esi_1 = nullptr
    char* ecx_1 = nullptr
    int32_t edi_1 = 0
    char* var_18 = nullptr
    char* var_14_1 = nullptr
    int32_t var_10_1 = 0
    char* eax_4 = nullptr
    int32_t var_4 = 0
    char* var_24_1 = nullptr
    
    if (ebx s> 0)
        do
            eax_4.b = *(eax_4 + result)
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(zx.d(eax_4.b))
            int32_t eax_7
            eax_7.b = divs.dp.d(edx_2:eax_6, 0x1a).b + 0x41
            char var_2b = eax_7.b
            
            if (&var_2b u>= ecx_1 || esi_1 u> &var_2b)
                if (ecx_1 == edi_1)
                    sub_403590(&var_18, 1)
                    edi_1 = var_10_1
                    ecx_1 = var_14_1
                    esi_1 = var_18
                
                if (ecx_1 != 0)
                    *ecx_1 = eax_7.b
            else
                void* ebp_1 = &var_2b - esi_1
                
                if (ecx_1 == edi_1)
                    sub_403590(&var_18, 1)
                    edi_1 = var_10_1
                    ecx_1 = var_14_1
                    esi_1 = var_18
                
                if (ecx_1 != 0)
                    eax_7.b = *(esi_1 + ebp_1)
                    *ecx_1 = eax_7.b
            
            char* ecx_5 = &ecx_1[1]
            int32_t edx_3
            edx_3.b = mods.dp.d(edx_2:eax_6, 0x1a).b + 0x41
            char var_2a = edx_3.b
            
            if (&var_2a u>= ecx_5 || esi_1 u> &var_2a)
                if (ecx_5 == edi_1)
                    sub_403590(&var_18, 1)
                    edi_1 = var_10_1
                    esi_1 = var_18
                
                if (ecx_5 != 0)
                    *ecx_5 = edx_3.b
            else
                int32_t ebp_2 = &var_2a - esi_1
                
                if (ecx_5 == edi_1)
                    sub_403590(&var_18, 1)
                    edi_1 = var_10_1
                    esi_1 = var_18
                
                if (ecx_5 != 0)
                    *ecx_5 = esi_1[ebp_2]
            
            ecx_1 = &ecx_5[1]
            eax_4 = &var_24_1[1]
            var_14_1 = ecx_1
            var_24_1 = eax_4
        while (eax_4 s< ebx)
        
        ebp = arg1
    
    char var_29 = 0
    
    if (&var_29 u>= ecx_1 || esi_1 u> &var_29)
        if (ecx_1 == edi_1)
            sub_403590(&var_18, 1)
            ecx_1 = var_14_1
            esi_1 = var_18
        
        if (ecx_1 != 0)
            *ecx_1 = 0
    else
        char* ebx_1 = &var_29 - esi_1
        
        if (ecx_1 == edi_1)
            sub_403590(&var_18, 1)
            ecx_1 = var_14_1
            esi_1 = var_18
        
        if (ecx_1 != 0)
            *ecx_1 = *(ebx_1 + esi_1)
    
    void* var_14_3 = &ecx_1[1]
    (*(*ebp + 4))(esi_1)
    
    if (esi_1 != 0)
        j__free(esi_1)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
