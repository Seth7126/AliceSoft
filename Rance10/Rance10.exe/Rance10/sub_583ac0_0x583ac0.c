// 函数: sub_583ac0
// 地址: 0x583ac0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_48
int32_t** eax_3 = sub_586b60(&var_48, arg1 + 0x24c)

if (arg1 + 0x1a4 != eax_3)
    int32_t* ecx_1 = *eax_3
    *eax_3 = nullptr
    int32_t* esi_1 = *(arg1 + 0x1a4)
    *(arg1 + 0x1a4) = ecx_1
    
    if (esi_1 != 0)
        sub_586a00(esi_1)
        int32_t var_60_1 = 0x24
        operator new(esi_1)

int32_t* esi_2 = var_48

if (esi_2 != 0)
    sub_586a00(esi_2)
    int32_t var_60_2 = 0x24
    operator new(esi_2)

void* esi_3 = arg1 + 0x1b4
void* edi = arg1 + 4
void* result

if (sub_58fde0(*(arg1 + 0x1a4), edi, esi_3) != 0)
    sub_583840(arg1, arg1 + 0x174, esi_3)
    int32_t ecx_11
    ecx_11.b = 0
    char temp0_1 = *(arg1 + 0x1a8)
    *(arg1 + 0x1a8) = 0
    ecx_11.b = temp0_1
    result.b = 1
else
    if (*(edi + 0x14) u>= 0x10)
        edi = *edi
    
    void* var_4c = edi
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x7680dc, 0x30)
    int32_t var_8_1 = 0
    
    if (*(esi_3 + 0x14) u>= 0x10)
        esi_3 = *esi_3
    
    var_8_1.b = 1
    char var_44
    sub_5e01e0(sub_461a30(&var_4c, &var_2c, &var_44, &var_4c, esi_3))
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    int32_t* esi_4 = *(arg1 + 0x1a4)
    *(arg1 + 0x1a4) = 0
    
    if (esi_4 != 0)
        sub_586a00(esi_4)
        int32_t var_60_5 = 0x24
        operator new(esi_4)
    
    int32_t ecx_8
    ecx_8.b = 0
    char temp0 = *(arg1 + 0x1a8)
    *(arg1 + 0x1a8) = 0
    ecx_8.b = temp0
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
