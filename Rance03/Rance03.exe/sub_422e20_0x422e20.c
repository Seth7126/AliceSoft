// 函数: sub_422e20
// 地址: 0x422e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4ad8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
HDC var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(*(arg1 + 0xe0) + 8)
var_64 = arg2
int32_t ebp_1 = arg3 - 2

if ((*(*ecx + 0x14))(arg5) == 4)
    ebp_1 += sub_423e80(arg1, arg5, ebp_1)

int32_t arg_c
int32_t eax_9 = arg_c
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
int32_t result

if (sub_42dbf0(*(arg1 + 0xe0), arg5, ebp_1, &var_2c) != 0)
    int32_t eax_11 = sub_430d80(arg1, arg2, &arg_c, arg4, &var_2c, 0xc00000, *(arg1 + 0x104))
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    var_4.b = 1
    
    if (sub_42dc70(*(arg1 + 0xe0), arg5, ebp_1, &var_44) != 0)
        int32_t edi_3 = eax_11 + sub_430e80(arg1, var_64, &arg_c, arg4, &var_44, *(arg1 + 0x108))
            + sub_4310e0(arg1, var_64, &arg_c, arg4)
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        char var_5c = 0
        var_4.b = 2
        
        if (sub_4302d0(*(arg1 + 0xe0), arg5, ebp_1, &var_5c) == 0)
            result = 0
        else
            void* esi_1 = *(arg1 + 0xe0)
            int32_t eax_18 = (*(**(esi_1 + 0xc) + 0x24))((*(**(esi_1 + 8) + 0x1c))(arg5), ebp_1)
            COLORREF eax_19 = sub_430c60(eax_18)
            result = edi_3 + sub_430d20(arg1, var_64, &arg_c, arg4, &var_5c, eax_19)
            sub_431190(arg1, var_64, eax_9, arg4, result, arg3, eax_18)
        
        if (var_48_1 u>= 0x10)
            j__free(var_5c.d)
        
        int32_t var_48_2 = 0xf
        int32_t var_4c_2 = 0
        var_5c = 0
    else
        result = 0
    
    if (var_30_1 u>= 0x10)
        j__free(var_44.d)
    
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
else
    result = 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
