// 函数: sub_5e3fa0
// 地址: 0x5e3fa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
sub_5e9a10(arg1 + 0x1e8)
int32_t* ecx_1 = *(arg1 + 0x22c)

if (ecx_1 != 0)
    (*(*ecx_1 + 0x40))()
    (*(**(arg1 + 0x22c) + 4))()
    *(arg1 + 0x22c) = 0

if (*(arg1 + 0x3b8) == 0)
    char i
    
    do
        i = sub_5e7f20(arg1 + 0x148)
    while (i != 0)

uint32_t result = sub_5e3f40(arg1)

if (*(arg1 + 0x22c) != 0)
    result = (*(**(arg1 + 0x22c) + 8))()

if (data_75d4b5 != 0)
    result = timeEndPeriod(data_75d51c)
    data_75d4b5 = 0

return result
