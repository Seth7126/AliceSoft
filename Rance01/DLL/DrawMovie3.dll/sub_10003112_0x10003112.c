// 函数: sub_10003112
// 地址: 0x10003112
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_2 = data_10020118

if (eax_2 != 0xffffffff)
    sub_10003063(data_10022070)(eax_2)
    data_10020118 = 0xffffffff

uint32_t dwTlsIndex = data_1002011c

if (dwTlsIndex != 0xffffffff)
    TlsFree(dwTlsIndex)
    data_1002011c = 0xffffffff

return sub_10007306() __tailcall
