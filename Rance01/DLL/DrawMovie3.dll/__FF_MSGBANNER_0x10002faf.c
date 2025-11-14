// 函数: __FF_MSGBANNER
// 地址: 0x10002faf
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

HANDLE result
int32_t edx
result, edx = sub_10007270(3)
HANDLE eax
uint32_t ecx_1
int32_t edx_1

if (result == 1)
    eax, ecx_1, edx_1 = sub_10002e04(result, edx, 3, 0xfc)
    result = sub_10002e04(eax, edx_1, ecx_1, 0xff)
else
    result, edx = sub_10007270(3)
    
    if (result == 0 && data_10021a24 == 1)
        eax, ecx_1, edx_1 = sub_10002e04(result, edx, 3, 0xfc)
        result = sub_10002e04(eax, edx_1, ecx_1, 0xff)
return result
