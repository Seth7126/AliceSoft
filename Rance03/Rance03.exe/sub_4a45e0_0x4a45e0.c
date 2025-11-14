// 函数: sub_4a45e0
// 地址: 0x4a45e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t result = sub_4a6a50(arg1 + 0x4c, &var_18)
int32_t* edx = var_18
int32_t ebp = 0
int32_t* esi = edx
uint32_t ecx_4 = (var_14 - edx + 3) u>> 2

if (edx u> var_14)
    ecx_4 = 0

if (ecx_4 != 0)
    do
        int32_t ebx_1 = *(*esi + 0x74)
        int32_t eax_4 = arg2[1]
        int32_t var_20 = ebx_1
        int32_t ecx_6
        
        if (&var_20 u< eax_4)
            ecx_6 = *arg2
        
        if (&var_20 u>= eax_4 || ecx_6 u> &var_20)
            if (eax_4 == arg2[2])
                sub_415950(arg2, 1)
            
            int32_t* eax_7 = arg2[1]
            
            if (eax_7 != 0)
                *eax_7 = ebx_1
        else
            if (eax_4 == arg2[2])
                sub_415950(arg2, 1)
            
            int32_t* ecx_8 = arg2[1]
            
            if (ecx_8 != 0)
                *ecx_8 = *(*arg2 + ((&var_20 - ecx_6) s>> 2 << 2))
        
        arg2[1] += 4
        *esi
        result = sub_4a45e0(arg2)
        ebp += 1
        esi = &esi[1]
    while (ebp != ecx_4)
    
    edx = var_18

if (edx != 0)
    result = j__free(edx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
