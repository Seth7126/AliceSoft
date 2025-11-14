// 函数: sub_1000b68d
// 地址: 0x1000b68d
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_a = 0
uint8_t lCData
int32_t result

if (GetLocaleInfoA(arg1, 0x1004, &lCData, 6) != 0)
    result = sub_1000b054(&lCData)
else
    result = 0xffffffff

sub_10001d19(eax_1 ^ &__saved_ebp)
return result
