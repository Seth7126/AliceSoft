// 函数: __callnewh
// 地址: 0x71063f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = __query_new_handler()
int32_t eax_3

if (eax_2 != 0)
    eax_3 = eax_2(arg1)

int32_t result

if (eax_2 == 0 || eax_3 == 0)
    result = 0
else
    result = 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
