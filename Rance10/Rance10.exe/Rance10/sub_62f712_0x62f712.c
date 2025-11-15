// 函数: sub_62f712
// 地址: 0x62f712
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x14)
TEB* fsbase
fsbase->NtTib.ExceptionList = *(arg1 - 0xc)
@__security_check_cookie@4(*(arg1 + 0xc0) ^ arg1)
*(arg1 + 0xc4)
return result
