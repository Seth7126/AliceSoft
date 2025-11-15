// 函数: sub_62ef33
// 地址: 0x62ef33
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result
result.b = *(arg1 - 0x11)
TEB* fsbase
fsbase->NtTib.ExceptionList = *(arg1 - 0xc)
@__security_check_cookie@4(*(arg1 + 0x90) ^ arg1)
*(arg1 + 0x94)
return result
