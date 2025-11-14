// 函数: sub_10008cd5
// 地址: 0x10008cd5
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

arg1[-1] = 0xfffffffe
int32_t result = arg1[-7]
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = &data_10008ce4
*arg1
return result
