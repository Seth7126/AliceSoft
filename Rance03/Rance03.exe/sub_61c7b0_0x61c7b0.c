// 函数: sub_61c7b0
// 地址: 0x61c7b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_24 = ebx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* eax_4 = (**arg1)(__security_cookie ^ &__saved_edi)
char* edx = eax_4
char i

do
    i = *edx
    edx = &edx[1]
while (i != 0)
void* edx_1 = edx - &edx[1]
void* result

if (edx_1 s<= 0)
    result.b = 1
else
    result = edx_1 & 0x80000001
    bool cond:0_1 = result == 0
    
    if (result s< 0)
        cond:0_1 = ((result - 1) | 0xfffffffe) == 0xffffffff
    
    if (cond:0_1)
        char* esi_1 = nullptr
        char* ecx_1 = nullptr
        int32_t edi_1 = 0
        char* var_18 = nullptr
        char* var_14_1 = nullptr
        int32_t var_10_1 = 0
        int32_t var_4 = 0
        
        if (edx_1 s> 0)
            void* ebp_1 = &eax_4[1]
            int32_t i_2 = ((edx_1 - 1) u>> 1) + 1
            int32_t i_3 = i_2
            int32_t i_1
            
            do
                result.b = *(ebp_1 - 1)
                result.b -= 0x41
                result.w = muls.dp.b(result.b, 0x1a)
                ebx.b = (result - 0x41).b + *ebp_1
                char var_1e = ebx.b
                
                if (&var_1e u>= ecx_1 || esi_1 u> &var_1e)
                    if (ecx_1 == edi_1)
                        sub_403590(&var_18, 1)
                        edi_1 = var_10_1
                        ecx_1 = var_14_1
                        esi_1 = var_18
                        i_2 = i_3
                    
                    if (ecx_1 != 0)
                        *ecx_1 = ebx.b
                else
                    ebx = &var_1e - esi_1
                    
                    if (ecx_1 == edi_1)
                        sub_403590(&var_18, 1)
                        edi_1 = var_10_1
                        ecx_1 = var_14_1
                        esi_1 = var_18
                        i_2 = i_3
                    
                    if (ecx_1 != 0)
                        result.b = *(esi_1 + ebx)
                        *ecx_1 = result.b
                
                ecx_1 = &ecx_1[1]
                ebp_1 += 2
                i_1 = i_2
                i_2 -= 1
                var_14_1 = ecx_1
                i_3 = i_2
            while (i_1 != 1)
        
        char var_1d = 0
        
        if (&var_1d u>= ecx_1 || esi_1 u> &var_1d)
            if (ecx_1 == edi_1)
                sub_403590(&var_18, 1)
                ecx_1 = var_14_1
                esi_1 = var_18
            
            if (ecx_1 != 0)
                *ecx_1 = 0
        else
            char* ebx_1 = &var_1d - esi_1
            
            if (ecx_1 == edi_1)
                sub_403590(&var_18, 1)
                ecx_1 = var_14_1
                esi_1 = var_18
            
            if (ecx_1 != 0)
                *ecx_1 = *(ebx_1 + esi_1)
        
        void* var_14_2 = &ecx_1[1]
        (*(*arg1 + 4))(esi_1)
        
        if (esi_1 != 0)
            j__free(esi_1)
        
        result.b = 1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
