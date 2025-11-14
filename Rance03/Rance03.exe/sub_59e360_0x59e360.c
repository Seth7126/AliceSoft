// 函数: sub_59e360
// 地址: 0x59e360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_4 = *(arg1 + 4)

if (eax_4 != 0)
    return eax_4 + 0x30

int32_t eax = data_75dd6c

if ((eax.b & 1) == 0)
    data_75dd64 = 0
    data_75dd6c = eax | 1
    data_75dd68 = 0

return &data_75dd64
