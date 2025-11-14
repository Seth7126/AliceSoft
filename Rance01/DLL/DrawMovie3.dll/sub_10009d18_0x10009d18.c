// 函数: sub_10009d18
// 地址: 0x10009d18
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

data_100223e4 += 1
void* eax = sub_10004125(0x1000)
arg1[2] = eax

if (eax == 0)
    arg1[3] |= 4
    arg1[2] = &arg1[5]
    arg1[6] = 2
else
    arg1[3] |= 8
    arg1[6] = 0x1000

int32_t result = arg1[2]
arg1[1] = 0
*arg1 = result
return result
