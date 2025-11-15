// 函数: sub_5f8af0
// 地址: 0x5f8af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0

if (arg4 s< 0)
label_5f8c65:
    int32_t eax_36 = (**arg2)(eax_2) - 0xa
    
    if (eax_36 u> 0x53)
    label_5f8cca:
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_403490(&var_30, 0x76a8dc, 0x1c)
        int32_t var_8_1 = 0
        sub_6c52e0(&var_30)
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        sub_602420(arg3)
    else
        switch (eax_36)
            case 0, 8, 0x52, 0x53
                *arg3 = 0x12
            label_5f8c81:
                arg3[2] = 0xffffffff
                arg3[3] = 0
                arg3[4] = 0
            case 1, 9
                *arg3 = 0x13
                goto label_5f8c81
            case 2, 0xa
                *arg3 = 0x14
                goto label_5f8c81
            case 3, 0xb
                *arg3 = 0x15
                goto label_5f8c81
            case 4, 5, 6, 7, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
                    0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                    0x26, 0x27, 0x28, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 
                    0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 
                    0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 
                    0x4e, 0x50, 0x51
                goto label_5f8cca
            case 0x25, 0x29
                *arg3 = 0x33
                goto label_5f8c81
            case 0x4f
                *arg3 = 0x59
                goto label_5f8c81
else
    if (arg4 s>= (*(*arg2 + 8))(eax_2))
        goto label_5f8c65
    
    int32_t eax_7 = (**arg2)() - 0xa
    
    if (eax_7 u> 0x53)
        goto label_5f8cca
    
    switch (eax_7)
        case 0, 0x52
            sub_601960(arg3, (*(*arg2 + 0x28))(arg4, arg3))
        case 1
            sub_6019b0(arg3, (*(*arg2 + 0x28))(arg4, arg3))
        case 2, 0xa
            int32_t* var_4c_10 = arg3
            sub_601a50(arg3, (*(*arg2 + 0x20))(arg4))
        case 3, 0xb
            int32_t* var_4c_11 = arg3
            sub_601a90(arg3, (*(*arg2 + 0x20))(arg4))
        case 4, 5, 6, 7, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x26, 0x27, 
                0x28, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
                0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 
                0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x50, 0x51
            goto label_5f8cca
        case 8, 0x53
            sub_601960(arg3, (*(*arg2 + 0x20))(arg4, (*(*arg2 + 0x24))(arg4, arg3)))
        case 9
            sub_6019b0(arg3, (*(*arg2 + 0x20))(arg4, (*(*arg2 + 0x24))(arg4, arg3)))
        case 0x25
            sub_601a00(arg3, (*(*arg2 + 0x28))(arg4, arg3))
        case 0x29
            sub_601a00(arg3, (*(*arg2 + 0x20))(arg4, (*(*arg2 + 0x24))(arg4, arg3)))
        case 0x4f
            sub_601ad0(arg3, (*(*arg2 + 0x20))(arg4, (*(*arg2 + 0x24))(arg4, arg3)))

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg3
