// 函数: sub_4a44c0
// 地址: 0x4a44c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_20 = ebx
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4e7e80(*(arg1 + 0x4ac))
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
int32_t result = sub_4a6a50(arg1 + 0x4c, &var_18)
int32_t* edx = var_18
int32_t ebp = 0
int32_t* esi_1 = edx
uint32_t ecx_5 = (var_14 - edx + 3) u>> 2

if (edx u> var_14)
    ecx_5 = 0

uint32_t var_1c = ecx_5

if (ecx_5 != 0)
    do
        int32_t eax_3 = arg2[1]
        int32_t* ebx_3 = *esi_1 + 0x4ac
        
        if (ebx_3 u< eax_3)
            ecx_5 = *arg2
        
        int32_t* ecx_8
        
        if (ebx_3 u>= eax_3 || ecx_5 u> ebx_3)
            if (eax_3 == arg2[2])
                uint32_t var_34_2 = ecx_5
                sub_412f20(arg2)
            
            ecx_8 = arg2[1]
            
            if (ecx_8 != 0)
                *ecx_8 = *ebx_3
        else
            if (eax_3 == arg2[2])
                uint32_t var_34_1 = ecx_5
                sub_412f20(arg2)
            
            ecx_8 = arg2[1]
            
            if (ecx_8 != 0)
                *ecx_8 = *(*arg2 + ((ebx_3 - ecx_5) s>> 2 << 2))
        arg2[1] += 4
        *esi_1
        result, ecx_5 = sub_4a44c0(arg2)
        ebp += 1
        esi_1 = &esi_1[1]
    while (ebp != var_1c)
    
    edx = var_18

if (edx != 0)
    result = j__free(edx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
