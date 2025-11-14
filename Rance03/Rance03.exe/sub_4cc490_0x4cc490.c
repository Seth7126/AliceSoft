// 函数: sub_4cc490
// 地址: 0x4cc490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bed40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_68 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_4c = arg2
void** var_50 = arg6
int32_t* result

if (arg3 == 0)
    result.b = 0
else if (sub_4c9870(arg1, arg4).b != 0)
    result.b = 0
else if (sub_4c9810(arg1, arg5).b != 0)
    result.b = 0
else
    *sub_427f90(arg1 + 8, arg5) = arg4
    result = sub_4d6d10(arg3, arg4)
    
    if (result.b == 0)
        result.b = 0
    else
        int32_t var_2c
        int32_t* eax_7 = sub_410930(result, var_50, &var_2c, 0x6e1704)
        int32_t var_4 = 0
        
        if (eax_7[5] u>= 0x10)
            eax_7 = *eax_7
        
        int32_t* var_44
        int32_t ecx_5 = sub_401f60(&var_44, eax_7)
        var_4.b = 1
        void* ebp_1 = var_4c
        int32_t* edx_2 = *(ebp_1 + 4)
        int32_t var_30
        int32_t ebx_2
        
        if (edx_2 != 0)
            int32_t* ecx_6 = &var_44
            
            if (var_30 u>= 0x10)
                ecx_6 = var_44
            
            int32_t eax_9
            eax_9, ecx_5 = (*(*edx_2 + 0x44))(ecx_6)
            ebx_2 = eax_9
        else
            ebx_2 = 0
        
        if (var_30 u>= 0x10)
            ecx_5 = j__free(var_44)
        
        int32_t var_4_1 = 0xffffffff
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            ecx_5 = j__free(var_2c)
        
        if (ebx_2 != 0)
            uint32_t var_6c_9 = zx.d(data_75dd2a)
            void** var_70_1 = arg5
            sub_4ce1a0(arg1 + 0x10, &var_4c, ecx_5)
        
        result.b = sub_4caa50(arg1, var_50, arg5, ebp_1).b != 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
