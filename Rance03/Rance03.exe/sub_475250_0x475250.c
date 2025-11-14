// 函数: sub_475250
// 地址: 0x475250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b9d28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
int32_t var_c_1 = 0
float var_38 = 1f
int32_t* result = arg2

if (arg2 == 0)
    float var_38_1 = 1f
else
    char* ecx = &var_34
    
    if (result == 1)
        int32_t var_48_2 = 0x24
        result = sub_402110(ecx, &data_6dd6d4, 0x24)
        var_38 = 0.5f
    else if (result == 2)
        int32_t var_48_1 = 0x24
        result = sub_402110(ecx, &data_6dd6ac, 0x24)
        var_38 = 0.5f
    else
        result = sub_402110(ecx, 0x6dd688, 0x22)
    
    int32_t* ecx_1 = *(arg1 + 4)
    
    if (ecx_1 != 0)
        char* edx_1 = &var_34
        
        if (var_20 u>= 0x10)
            edx_1 = var_34.d
        
        result = (*(*ecx_1 + 0x2c))(edx_1)
    
    if (ecx_1 == 0 || result.b == 0)
        var_38_1 = var_38
    else
        char* edx_2 = &var_34
        
        if (var_20 u>= 0x10)
            edx_2 = var_34.d
        
        result = (*(**(arg1 + 4) + 0x48))(edx_2)

float var_38_2 = fconvert.s(unimplemented  {fst dword [esp+0xc], st0})

if (var_20 u>= 0x10)
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}
    result = j__free(var_34.d)
    unimplemented  {fld st0, dword [esp+0x10]}

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
