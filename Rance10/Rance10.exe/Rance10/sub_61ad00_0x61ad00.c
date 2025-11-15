// 函数: sub_61ad00
// 地址: 0x61ad00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = *(arg2 + 4)

if (result u> 0x5d)
    result.b = 0
else
    switch (result)
        case 0
            result.b = 1
        case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xe, 0xf, 0x10, 0x11, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 
                0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 
                0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x30, 0x31, 0x32, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 
                0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x40, 0x41, 0x42, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 
                0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x5a, 
                0x5b
            result.b = 0
        case 0xa, 0xb, 0x2f, 0x5c
            sub_405d30(arg1 + 0x1f4, 0)
            result.b = 1
        case 0xc
            void var_2c
            sub_403360(&var_2c, 0x75d617)
            int32_t var_8_1 = 0
            void* var_40_1 = &var_2c
            sub_405d30(arg1 + 0x1f4, sub_621930(arg1 + 0x148))
            sub_403320(&var_2c)
        label_61ad9a:
            
            if (*(*(arg1 + 0x1f8) + (*(arg1 + 0x1fc) << 2) - 4) s>= 0)
                result.b = 1
            else
                result.b = 0
        case 0xd
            int32_t var_40_3 = 1
            sub_405d30(arg1 + 0x1f4, sub_6219f0(arg1 + 0x148, arg3))
            goto label_61ad9a
        case 0x12, 0x13, 0x33, 0x59, 0x5d
            sub_405d30(arg1 + 0x1f4, 0xffffffff)
            sub_405d30(arg1 + 0x1f4, 0)
            result.b = 1
        case 0x14, 0x15, 0x43, 0x50
            sub_405d30(arg1 + 0x1f4, 0xffffffff)
            result.b = 1
        case 0x3f
            sub_405d30(arg1 + 0x1f4, sub_621320(arg1 + 0x148))
            goto label_61ad9a
        case 0x4f
            int32_t esi_1 = *(arg2 + 8)
            int32_t eax_5 = sub_5ffb90(arg2)
            sub_405d30(arg1 + 0x1f4, sub_6211e0(arg1 + 0x148, sub_5ffb50(arg2), esi_1, eax_5))
            goto label_61ad9a

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
