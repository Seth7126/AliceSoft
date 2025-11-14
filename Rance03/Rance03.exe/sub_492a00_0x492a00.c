// 函数: sub_492a00
// 地址: 0x492a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bb4ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = __security_cookie ^ &var_ac
int32_t __saved_edi
int32_t var_bc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_64
sub_410930(&ExceptionList, arg3, &var_64, U".")
int32_t var_c_1 = 0
long double x87_r0
int32_t* result = sub_494e20(arg1 + 0x38, x87_r0, arg2, arg3)
void* ebx

if (result.b == 0)
    ebx.b = 0
else
    var_c_1.b = 1
    var_c_1.b = 2
    char var_94
    int32_t var_7c
    result =
        sub_492050(arg1, sub_401c90(arg2, &var_94, sub_410930(result, &var_64, &var_7c, 0x6dfb84)))
    bool var_a5_1 = result.b == 0
    int32_t var_80
    
    if (var_80 u>= 0x10)
        result = j__free(var_94.d)
    
    var_c_1.b = 0
    int32_t var_80_1 = 0xf
    int32_t var_84_1 = 0
    var_94 = 0
    int32_t var_68
    
    if (var_68 u>= 0x10)
        result = j__free(var_7c)
    
    if (var_a5_1 != 0)
        ebx.b = 0
    else
        int32_t var_34
        int32_t* eax_8 = sub_410930(result, &var_64, &var_34, 0x6dfba8)
        int32_t* esi_1 = eax_8
        var_c_1.b = 3
        int32_t* eax_9 = sub_410930(eax_8, &var_64, &var_7c, 0x6dfb94)
        var_c_1.b = 4
        char var_4c
        int32_t* eax_10 = sub_410930(eax_9, &var_64, &var_4c, 0x6dfbf0)
        var_c_1.b = 5
        int32_t* eax_11 = sub_410930(eax_10, &var_64, &var_94, 0x6dfbdc)
        var_c_1.b = 6
        int32_t* ecx_9 = *(arg2 + 4)
        int32_t* var_a0_1
        
        if (ecx_9 != 0)
            if (esi_1[5] u>= 0x10)
                esi_1 = *esi_1
            
            var_a0_1 = (*(*ecx_9 + 0x50))(esi_1, 3)
        else
            var_a0_1 = ecx_9
        
        int32_t* edx_6 = *(arg2 + 4)
        int32_t* var_a4_2
        
        if (edx_6 != 0)
            int32_t* ecx_10 = eax_9
            
            if (ecx_10[5] u>= 0x10)
                ecx_10 = *ecx_10
            
            var_a4_2 = (*(*edx_6 + 0x50))(ecx_10, 2)
        else
            var_a4_2 = edx_6
        
        int32_t* ecx_12 = *(arg2 + 4)
        int32_t esi_2
        
        if (ecx_12 != 0)
            int32_t* edx_7 = eax_10
            
            if (edx_7[5] u>= 0x10)
                edx_7 = *edx_7
            
            esi_2 = (*(*ecx_12 + 0x50))(edx_7, 1)
        else
            esi_2 = 0
        
        int32_t* ecx_13 = *(arg2 + 4)
        int32_t eax_18
        
        if (ecx_13 != 0)
            int32_t* edx_8 = eax_11
            
            if (edx_8[5] u>= 0x10)
                edx_8 = *edx_8
            
            eax_18 = (*(*ecx_13 + 0x50))(edx_8, 0)
        else
            eax_18 = 0
        
        sub_492130(arg1, eax_18, esi_2, var_a4_2, var_a0_1)
        
        if (var_80_1 u>= 0x10)
            j__free(var_94.d)
        
        int32_t var_80_2 = 0xf
        int32_t var_84_2 = 0
        var_94 = 0
        int32_t var_38
        
        if (var_38 u>= 0x10)
            j__free(var_4c.d)
        
        int32_t var_38_1 = 0xf
        int32_t var_3c_1 = 0
        var_4c = 0
        
        if (var_68 u>= 0x10)
            j__free(var_7c)
        
        var_c_1.b = 0
        int32_t var_68_1 = 0xf
        int32_t var_6c_1 = 0
        var_7c.b = 0
        int32_t var_20
        
        if (var_20 u>= 0x10)
            j__free(var_34)
        
        sub_4958e0(*(arg1 + 0x70))
        *(arg1 + 0x20) = 1
        ebx.b = 1

int32_t var_50

if (var_50 u>= 0x10)
    j__free(var_64)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ac)
return result
