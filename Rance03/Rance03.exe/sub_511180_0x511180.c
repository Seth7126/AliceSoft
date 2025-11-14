// 函数: sub_511180
// 地址: 0x511180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* result = arg2
void* const result_1

if (result == 0)
    result_1 = 0xffffffff
else
    result = (*(**(*(result + 0x28) + 4) + 0x40))()
    result_1 = result

for (int32_t* i = *(arg1 + 0x28) + 4; i != *(arg1 + 0x2c); i = &i[1])
    result = (*(**i + 0x2c))(result_1)

return result
