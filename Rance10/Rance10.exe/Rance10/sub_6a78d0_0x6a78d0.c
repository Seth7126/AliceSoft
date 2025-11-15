// 函数: sub_6a78d0
// 地址: 0x6a78d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg1 != 0)
    result = *(arg1 + 0x44)
    
    if (result != 0 && *(arg1 + 0x48) u> 0 && result != arg1)
        void var_48
        int32_t edi
        __setjmp3(&__saved_ebp, arg1, edi, &var_48, 0, arg2, result)
        *(arg1 + 0x44) = &var_48
        *(arg1 + 0x48) = 0
        *(arg1 + 0x40) = _longjmp
        result = sub_6a7cf0(arg1, result)
    
    *(arg1 + 0x48) = 0
    *(arg1 + 0x44) = 0
    *(arg1 + 0x40) = 0

@__security_check_cookie@4(result_1 ^ &__saved_ebp)
return result
