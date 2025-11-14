// 函数: sub_4d2240
// 地址: 0x4d2240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* eax = sub_510540(*(arg1 + 0x34), arg2)
int32_t ebx = *(eax + 0x30)

for (int32_t* i = *(eax + 0x2c); i != ebx; i = &i[0x30])
    (**i)(0)

*(eax + 0x30) = *(eax + 0x2c)
int32_t result
result.b = 1
return result
