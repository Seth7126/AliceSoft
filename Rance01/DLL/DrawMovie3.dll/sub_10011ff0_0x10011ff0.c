// 函数: sub_10011ff0
// 地址: 0x10011ff0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg1[0x12] == 1)
    return 0x80004005

int32_t var_8
int32_t result = (*(*arg1 + 0x2c))(arg1, &var_8)

if (result s< 0)
    return result

EnterCriticalSection(&arg1[7])
int32_t eax_2 = var_8
arg1[0x10] = eax_2
int32_t var_4
arg1[0x11] = var_4
arg1[0xe] = eax_2
arg1[0xf] = var_4
LeaveCriticalSection(&arg1[7])
return result
