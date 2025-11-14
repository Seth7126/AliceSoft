// 函数: sub_5d98c0
// 地址: 0x5d98c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b52c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = *(arg2 + 0x14)

if (*(arg2 + 0xc) s< result + 4)
    result.b = 0
else
    int32_t ebx_1
    
    if (*(arg2 + 0xc) != 0)
        ebx_1 = *(arg2 + 8)
    else
        ebx_1 = 0
    
    int32_t ebx_2 = *(result + ebx_1)
    *(arg2 + 0x14) = result + 4
    int32_t esi_1
    
    if (ebx_2 s> 0)
        sub_410480(arg1 + 4, ebx_2)
        esi_1 = 0
    
    if (ebx_2 s<= 0 || ebx_2 s<= 0)
        result.b = 1
    else
        int32_t edi_1 = 0
        
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_4 = 0
            
            if (sub_5d7a10(arg2, &var_2c).b == 0)
                if (var_18_1 u>= 0x10)
                    j__free(var_2c.d)
                
                break
            
            char* ecx_3 = *(arg1 + 4) + edi_1
            
            if (ecx_3 != &var_2c)
                sub_401ff0(ecx_3, &var_2c, 0, 0xffffffff)
            
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
            
            esi_1 += 1
            edi_1 += 0x18
            
            if (esi_1 s>= ebx_2)
                result.b = 1
                goto label_5d99c8
        
        result.b = 0

label_5d99c8:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
