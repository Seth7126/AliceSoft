// 函数: sub_603d70
// 地址: 0x603d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728be8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_34 = arg6
int32_t eax_6 = *arg1 - 0xa
int32_t var_3c = 0

if (eax_6 u> 0x53)
    goto label_603e70

switch (eax_6)
    case 0, 8, 0x52, 0x53
        if (sub_6035f0(arg1, &var_34) == 0)
            goto label_603e70
        
        void* var_54_4 = var_34
        sub_4faf00(arg4, arg2)
    case 1, 9
        if (sub_6036b0(arg1, &var_34) == 0)
            goto label_603e70
        
        sub_603f10(arg5, arg2)
    case 2, 0xa
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        int32_t var_8_1 = 0
        
        if (sub_603710(arg1, &var_30) == 0)
            sub_403320(&var_30)
        label_603e70:
            *(arg2 + 0x14) = 0xf
            *(arg2 + 0x10) = 0
            *arg2 = 0
        else
            sub_4073c0(var_34, arg2, &var_30)
            sub_403320(&var_30)
    case 3, 4, 5, 6, 7, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
            0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x26, 
            0x27, 0x28, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 
            0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 
            0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51
        goto label_603e70
    case 0x25, 0x29
        if (sub_603590(arg1, &var_34) == 0)
            goto label_603e70
        
        void* var_54_2 = var_34
        sub_4faf00(arg3, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
