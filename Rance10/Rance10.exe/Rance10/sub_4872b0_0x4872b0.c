// 函数: sub_4872b0
// 地址: 0x4872b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = 0xf
int32_t var_1c = 0
int32_t var_18 = 0xf
char var_2c = 0
int32_t var_8_1 = 0
float var_30 = 1f
int32_t* result = arg2

if (arg2 == 0)
    float var_30_1 = 1f
else
    char* ecx = &var_2c
    
    if (result == 1)
        int32_t var_3c_2 = 0x24
        result = sub_403490(ecx, &data_760250, 0x24)
        var_30 = 0.5f
    else if (result == 2)
        int32_t var_3c_1 = 0x24
        result = sub_403490(ecx, &data_760228, 0x24)
        var_30 = 0.5f
    else
        result = sub_403490(ecx, 0x760204, 0x22)
    
    void* ecx_1 = *(arg1 + 4)
    
    if (ecx_1 != 0)
        char* edx_1 = &var_2c
        
        if (var_18 u>= 0x10)
            edx_1 = var_2c.d
        
        result = (*(*(ecx_1 + 4) + 4))(edx_1)
    
    if (ecx_1 == 0 || result.b == 0)
        edx = var_18
        var_30_1 = var_30
    else
        char* edx_2 = &var_2c
        
        if (var_18 u>= 0x10)
            edx_2 = var_2c.d
        
        int32_t* ecx_4 = *(arg1 + 4) + 4
        int32_t* var_3c_4 = ecx_4
        result = (*(*ecx_4 + 0xc))(edx_2, var_30)
        edx = var_18

float var_30_2 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})

if (edx u>= 0x10)
    unimplemented  {fstp st0, st0}
    unimplemented  {fstp st0, st0}
    result = sub_403160(var_2c.d, edx + 1, 1)
    unimplemented  {fld st0, dword [ebp-0x2c]}

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
