// 函数: sub_5f66e0
// 地址: 0x5f66e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72cfa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

switch ((**arg3)(eax_2) - 0xa)
    case 0, 0x25, 0x52
        result = (*(*arg3 + 0x2c))(arg2, *(*(*arg4 + 0xc))(arg5))
    case 1
        int32_t esi_2 = *arg3
        int32_t* eax_10
        int32_t ecx_3
        eax_10, ecx_3 = (*(*arg4 + 0x10))(arg5)
        int32_t var_68_3 = ecx_3
        result = (*(esi_2 + 0x30))(arg2, *eax_10)
    case 2
        result = (*(*arg3 + 0x34))(arg2, (**(*(*arg4 + 0x14))(arg5))())
    case 3
        int32_t edi_1 = *(*(*arg3 + 0x18))(arg2)
        result = (*(edi_1 + 4))((*(*arg4 + 0x18))(arg5))
    case 8, 9, 0x29, 0x4f, 0x53
        result = (*(*arg3 + 0x3c))(arg2, (*(*arg4 + 0x20))(arg5, (*(*arg4 + 0x24))(arg5)))
    case 0xa, 0xb
        result = (*(*arg3 + 0x38))(arg2, (*(*arg4 + 0x20))(arg5))
    default
        int32_t var_50 = (**arg3)()
        int32_t result_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403490(&var_2c, 0x76a91c, 0x1c)
        int32_t var_8_1 = 0
        var_8_1.b = 1
        char var_44
        sub_6c52e0(sub_409350(&var_50, &var_2c, &var_44, &var_50))
        int32_t var_30
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        result = result_1
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (result u>= 0x10)
            result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
