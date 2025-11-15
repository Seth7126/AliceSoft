// 函数: sub_4cdc70
// 地址: 0x4cdc70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 0x38)

if (edi == 0)
    return 0xffffffff

int32_t* i = *(edi + 8)

for (int32_t edi_1 = *(edi + 0xc); i != edi_1; i = &i[1])
    int32_t result = sub_4d7b40(*i, arg2)
    
    if (result != 0xffffffff)
        return result

return 0xffffffff
