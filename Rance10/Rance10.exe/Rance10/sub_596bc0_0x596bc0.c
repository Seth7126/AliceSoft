// 函数: sub_596bc0
// 地址: 0x596bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x74)

for (int32_t edi = *(arg1 + 0x78); i != edi; i = &i[1])
    int32_t result = (*(**i + 0x10))(arg2)
    
    if (result != 0)
        return result

return 0
