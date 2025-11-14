// 函数: sub_10009343
// 地址: 0x10009343
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t esp_2 = arg1[-6]

if (arg1[-8] == 0xc0000017)
    *(esp_2 - 4) = 8
    SetLastError()

arg1[-7] = 0
arg1[-1] = 0xfffffffe
int32_t result = arg1[-7]
*(esp_2 - 4) = &data_1000936a
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*(esp_2 + 4)
*(esp_2 + 8)
*(esp_2 + 0xc)
*arg1
*arg1 = *(esp_2 - 4)
*arg1
return result
