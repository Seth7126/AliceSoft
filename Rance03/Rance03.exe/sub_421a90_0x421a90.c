// 函数: sub_421a90
// 地址: 0x421a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_24 = arg4
int32_t var_20 = arg4
bool cond:0 = arg2[5] u< 0x10
int32_t var_40 = 0xffff0002
int32_t var_3c = 0x27
int32_t lParam = arg5
int32_t* eax_2

if (cond:0)
    eax_2 = arg2
else
    eax_2 = *arg2

int32_t* var_2c = eax_2
int32_t var_28 = arg2[4] + 1
int32_t var_18 = arg3
int32_t* result = SendMessageA(*arg1, 0x1100, 0, &lParam)
arg1[1] = result

if (&arg1[3] == arg2)
    return result

return sub_401ff0(&arg1[3], arg2, 0, 0xffffffff)
