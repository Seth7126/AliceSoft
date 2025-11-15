// 函数: sub_62f2ae
// 地址: 0x62f2ae
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
result.b = *(arg1 - 0x11)
TEB* fsbase
fsbase->NtTib.ExceptionList = *(arg1 - 0xc)
@__security_check_cookie@4(*(arg1 + 0x78) ^ arg1)
*(arg1 + 0x7c)
return result
