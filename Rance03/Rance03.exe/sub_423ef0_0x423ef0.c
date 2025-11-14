// 函数: sub_423ef0
// 地址: 0x423ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4bd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result

if (arg1[0x45] != arg1[0x46])
    result = arg1[0x46]

if (arg1[0x45] == arg1[0x46] || *(result - 0x24) != arg2)
    void* eax_6 = arg1[0x38]
    arg1[0x3b] = 0xffffffff
    int32_t ecx_1
    result, ecx_1 = (*(**(eax_6 + 8) + 0x14))(arg2)
    
    if (result == 1)
    label_423f81:
        
        if (arg4 != 0)
            int32_t var_6c_2 = var_54
            int32_t var_70_1 = ecx_1
            sub_424560(arg1[0x45], arg1[0x46])
            arg1[0x46] = arg1[0x45]
        
        int32_t var_50 = arg2
        int32_t var_4c_1 = 0xffffffff
        int32_t var_48_1 = 0
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        char var_44 = 0
        sub_401ff0(&var_44, arg3, 0, 0xffffffff)
        int32_t var_4 = 0
        sub_424310(&arg1[0x45], &var_50)
        int32_t var_4_1 = 0xffffffff
        
        if (var_30_1 u>= 0x10)
            j__free(var_44.d)
        
        (*(*arg1 + 0xa8))(eax_4)
        sub_4315f0(arg1)
        char var_2c
        char* eax_10 = sub_424270(arg1, &var_2c)
        int32_t var_4_2 = 1
        char* ecx_9 = arg1[0x48] + 0x44
        
        if (ecx_9 != eax_10)
            sub_401ff0(ecx_9, eax_10, 0, 0xffffffff)
        
        int32_t var_4_3 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c.d)
        
        void* ecx_10 = arg1[0x48]
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c = 0
        result = sub_429a20(ecx_10)
    else if (result s> 2 && result s<= 5)
        goto label_423f81

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
