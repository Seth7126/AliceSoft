// 函数: sub_49cc70
// 地址: 0x49cc70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bbfc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2

if (result != 0)
    int32_t ebp_1 = *(arg1 + 0x9c)
    int32_t ebx_1 = *(arg1 + 0xa0)
    
    if (ebp_1 s> 0 && ebx_1 s> 0)
        void* var_44
        sub_49d8d0(arg1, &var_44)
        int32_t var_4 = 0
        int32_t var_58 = 0
        int32_t var_54 = 0
        var_4.b = 1
        int32_t var_2c
        sub_49dc90(arg1, ebp_1, ebx_1, sub_49d8d0(arg1, &var_2c), arg1 + 0xb4, &var_58, &var_54)
        var_4.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        int32_t ebx_2 = var_58
        int32_t ebp_2 = var_54
        
        if (arg3 == 3)
            ebx_2 += 1
            ebp_2 += 1
        
        void* eax_6 = sub_4a4020(*(arg1 + 0x8c))
        sub_4d2240(eax_6, arg3)
        sub_502e30(sub_510540(*(eax_6 + 0x34), arg3), ebp_1, ebx_1)
        (**result)(*(eax_6 + 0x34), ebp_1, ebx_1, arg3)
        sub_4d2310(eax_6, ebx_2, ebp_2, &var_44, arg1 + 0xb4, *(arg1 + 0x258), *(arg1 + 0x25c), 
            arg3)
        result = sub_503c60(sub_510540(*(eax_6 + 0x34), arg3))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            result = j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
