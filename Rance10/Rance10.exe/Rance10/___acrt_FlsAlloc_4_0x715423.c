// 函数: ___acrt_FlsAlloc@4
// 地址: 0x715423
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = try_get_function(3, "FlsAlloc", 0x755f1c, 0x755f24)
uint32_t result

if (eax_2 == 0)
    result = TlsAlloc()
else
    result = eax_2(arg1)

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
