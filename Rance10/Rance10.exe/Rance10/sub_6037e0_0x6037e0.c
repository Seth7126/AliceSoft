// 函数: sub_6037e0
// 地址: 0x6037e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = *arg1 - 0xa
int32_t var_34
bool var_30

if (result u> 0x53)
    result.b = 0
else
    switch (result)
        case 0, 8, 0x52, 0x53
            if (sub_6035f0(arg1, &var_34).b == 0)
                result.b = 0
            else
                int32_t* ecx_1 = *(arg3 + 0x24)
                var_34 = var_34
                
                if (ecx_1 == 0)
                    sub_6d090a()
                    noreturn
                
                result = (*(*ecx_1 + 8))(&var_34)
        case 1, 9
            if (sub_6036b0(arg1, &var_34).b == 0)
                result.b = 0
            else
                var_34 = var_34
                int32_t* ecx_3 = *(arg4 + 0x24)
                
                if (ecx_3 == 0)
                    sub_6d090a()
                    noreturn
                
                result = (*(*ecx_3 + 8))(&var_34)
        case 2, 0xa
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_8_1 = 0
            
            if (sub_603710(arg1, &var_2c) == 0)
                sub_403320(&var_2c)
                result.b = 0
            else
                int32_t* ecx_4 = *(arg5 + 0x24)
                
                if (ecx_4 == 0)
                    sub_6d090a()
                    noreturn
                
                void* ebx
                ebx.b = (*(*ecx_4 + 8))(&var_2c)
                sub_403320(&var_2c)
                result.b = ebx.b
        case 3, 4, 5, 6, 7, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                0x26, 0x27, 0x28, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 
                0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 
                0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 
                0x51
            result.b = 0
        case 0x25, 0x29
            if (sub_603590(arg1, &var_30).b == 0)
                result.b = 0
            else
                result.b = var_30
                int32_t* ecx = *(arg2 + 0x24)
                var_30 = result.b
                
                if (ecx == 0)
                    sub_6d090a()
                    noreturn
                
                result = (*(*ecx + 8))(&var_30)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
