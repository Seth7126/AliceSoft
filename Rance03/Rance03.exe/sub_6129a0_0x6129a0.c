// 函数: sub_6129a0
// 地址: 0x6129a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd6b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg2 != 0)
    void* var_7c = nullptr
    void* var_74 = nullptr
    int32_t var_70_1 = 0
    int32_t var_6c_1 = 0
    sub_42f4d0(&var_74, 0x410, &var_7c)
    int32_t var_4 = 0
    void* esi_1 = arg2 + 8
    void* ebp_1 = var_74
    int32_t i_1 = 4
    void* edx_1 = ebp_1 + 0x20
    int32_t i
    
    do
        int32_t eax_5 = *(esi_1 - 8)
        esi_1 += 0x10
        *(edx_1 - 0x20) = eax_5
        edx_1 += 4
        *(edx_1 - 0x14) = *(esi_1 - 0x14)
        *(edx_1 - 4) = *(esi_1 - 0x10)
        *(edx_1 + 0xc) = *(esi_1 - 0xc)
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t* ebx
    
    if ((*(*arg5 + 0x44))(eax_4).b == 0)
    label_612c13:
        int32_t edx_4 = *(arg1 + 0xac)
        int32_t* ecx_9 = (*(arg1 + 4))[0xe]
        
        if (edx_4 == 0)
            goto label_612c37
        
        (*(*ecx_9 + 0xc0))(ecx_9, edx_4, 0, 0, ebp_1, 0, 0)
        ebx.b = 1
    else
        if (arg3 != 0 && arg4 != 0)
            int32_t ebp_2 = 0
            
            if ((**arg4)() s> 0)
                var_7c = var_74 + 0x44
                int32_t eax_21
                
                do
                    int32_t* esi_2 = (*(*arg4 + 4))(ebp_2)
                    
                    if (esi_2 s< 0)
                        goto label_612c37
                    
                    if (esi_2 s>= (**arg3)())
                        goto label_612c37
                    
                    void var_50
                    sub_47b390(&var_50, (*(*arg3 + 4))(esi_2))
                    float var_60
                    sub_47c1a0(&var_50, &var_60)
                    ebp_2 += 1
                    void* eax_18 = var_7c
                    float xmm1_1 = var_60
                    *(eax_18 - 4) = xmm1_1
                    float var_5c
                    *eax_18 = var_5c
                    float var_58
                    *(eax_18 + 4) = var_58
                    float var_54
                    *(eax_18 + 8) = var_54
                    float var_20
                    float var_1c
                    float var_18
                    *(eax_18 + 0xc) = (var_1c * var_58 + var_20 * var_54 - var_18 * var_5c) * 0.5f
                    *(eax_18 + 0x10) = (var_1c * var_54 - var_20 * var_58 + var_18 * xmm1_1) * 0.5f
                    *(eax_18 + 0x14) = (var_20 * var_5c - var_1c * xmm1_1 + var_18 * var_54) * 0.5f
                    *(eax_18 + 0x18) = (var_20 * xmm1_1 + var_1c * var_5c + var_18 * var_58) * -0.5f
                    var_7c = eax_18 + 0x20
                    eax_21 = (**arg4)()
                while (ebp_2 s< eax_21)
            
            ebp_1 = var_74
            goto label_612c13
        
    label_612c37:
        ebp_1 = var_74
        ebx.b = 0
    
    if (ebp_1 != 0)
        j__free(ebp_1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return result
