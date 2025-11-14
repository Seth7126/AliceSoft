// 函数: sub_64aad0
// 地址: 0x64aad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t __saved_edi
int32_t result

if ((*(*edi + 0x18))(__security_cookie ^ &__saved_edi) == 0x20)
    int32_t ebp_2 = (*(*edi + 0x1c))() * (*(*edi + 0x14))()
    int32_t* eax_7 = (*(*edi + 8))(0, 0)
    int32_t* var_30_1 = arg2
    int32_t var_18 = 0
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    sub_459eb0(&var_18, eax_7, eax_7 + ebp_2)
    int32_t var_4 = 0
    int32_t* esi_1 = arg1 + 4
    sub_48d5d0(esi_1, &var_18)
    int32_t var_4_1 = 0xffffffff
    int32_t eax_8 = var_18
    
    if (eax_8 != 0)
        j__free(eax_8)
    
    int32_t eax_9 = 0
    
    if (ebp_2 s> 0)
        do
            char* esi_3 = *(arg1 + 4) + eax_9
            eax_9 += 4
            char edx_3 = *esi_3
            *esi_3 = esi_3[2]
            esi_3[2] = edx_3
        while (eax_9 s< ebp_2)
        
        edi = arg2
        esi_1 = arg1 + 4
    
    *(arg1 + 0x18) = (*(*edi + 0x10))()
    *(arg1 + 0x1c) = (*(*edi + 0x14))()
    int32_t eax_15 = (*(*edi + 0x18))()
    *(arg1 + 0x20) = eax_15
    int32_t eax_16
    int32_t edx_4
    edx_4:eax_16 = sx.q(eax_15)
    *(arg1 + 0x30) = (eax_16 + (edx_4 & 7)) s>> 3
    *(arg1 + 0x24) = (*(*edi + 0x1c))()
    *(arg1 + 0x28) = (*(*edi + 0x20))()
    *(arg1 + 0x2c) = (*(*edi + 0x24))()
    result = (*(*edi + 0x28))()
    bool cond:0_1 = *(arg1 + 0x2c) == 0
    *(arg1 + 0x2d) = result.b
    
    if (cond:0_1)
        *(arg1 + 0x10) = 0
    else
        *(arg1 + 0x10) = *esi_1
    
    if (result.b == 0)
        *(arg1 + 0x14) = 0
    else
        *(arg1 + 0x14) = *esi_1 + 3
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
