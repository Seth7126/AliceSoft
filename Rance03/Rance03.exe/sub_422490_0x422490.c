// 函数: sub_422490
// 地址: 0x422490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b44b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_3c
int32_t var_1c = __security_cookie ^ &var_3c
int32_t ebx
int32_t var_40 = ebx
int32_t esi
int32_t var_44 = esi
int32_t edi
int32_t var_48 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_1 = *(arg1 + 0xe0)
uint32_t result

if (arg2 s< 0 || arg2 s>= (*(**(esi_1 + 0xc) + 8))((*(**(esi_1 + 8) + 0x18))((*(**(esi_1 + 8) + 8))(
        __security_cookie ^ &var_48))))
    result.b = 0
else
    void* esi_2 = *(arg1 + 0xe0)
    int32_t eax_11 =
        (*(**(esi_2 + 0xc) + 0xc))((*(**(esi_2 + 8) + 0x18))((*(**(esi_2 + 8) + 8))()), arg2)
    *(arg1 + 0xec) = arg2
    
    if (sub_4315a0(eax_11).b == 0)
        result.b = 1
    else if (sub_42cdb0(*(arg1 + 0xe0), arg2, &var_3c).b == 0)
        result.b = 0
    else
        int32_t var_24_1 = 0xf
        int32_t var_28_1 = 0
        char var_38 = 0
        int32_t var_10_1 = 0
        sub_42cd30(*(arg1 + 0xe0), arg2, &var_38)
        sub_423ef0(*(arg1 + 0xe4), var_3c, &var_38, 1)
        sub_401fb0(&var_38)
        result.b = 1

int32_t var_18
fsbase->NtTib.ExceptionList = var_18
int32_t var_20
sub_69a5bc(var_20 ^ &var_40)
return result
