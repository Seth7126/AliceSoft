// 函数: sub_100030de
// 地址: 0x100030de
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t lpTlsValue = TlsGetValue(data_1002011c)

if (lpTlsValue == 0)
    lpTlsValue = sub_10003063(data_10022068)
    TlsSetValue(data_1002011c, lpTlsValue)

return lpTlsValue
