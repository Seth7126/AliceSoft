// 函数: sub_4a1e10
// 地址: 0x4a1e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
void* eax_6

if (eax_5 s> 0)
    int32_t var_38_1 = eax_5
    eax_6 = sub_4a56f0(*(arg1 + 0x54))

int32_t ecx_2

if (eax_5 s<= 0 || eax_6 == 0)
    ecx_2 = 0
else
    ecx_2 = sub_4a1dd0(eax_6)

int32_t result = *(arg1 + 0x84) + ecx_2
int32_t* var_18 = nullptr
int32_t result_1 = result
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_4a6a50(arg1 + 0x4c, &var_18)
int32_t* ecx_4 = var_18
int32_t ebx = 0
int32_t* esi_1 = ecx_4
uint32_t ebp_3 = (var_14 - ecx_4 + 3) u>> 2

if (ecx_4 u> var_14)
    ebp_3 = 0

if (ebp_3 != 0)
    do
        *esi_1
        int32_t eax_8 = sub_4a1e10(eax_2)
        int32_t var_1c = eax_8
        int32_t* ecx_6 = &var_1c
        
        if (result s>= eax_8)
            ecx_6 = &result_1
        
        esi_1 = &esi_1[1]
        ebx += 1
        result = *ecx_6
        result_1 = result
    while (ebx != ebp_3)
    
    ecx_4 = var_18

if (ecx_4 != 0)
    j__free(ecx_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
