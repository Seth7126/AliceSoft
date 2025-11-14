// 函数: sub_1000fd90
// 地址: 0x1000fd90
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* eax = *(arg1 + 0x9c)

if (eax != 0)
    int32_t result = (*(*eax + 0x18))(eax)
    
    if (result s< 0)
        return result
    
    int32_t* eax_1 = *(arg1 + 0x9c)
    (*(*eax_1 + 8))(eax_1)
    *(arg1 + 0x9c) = 0

return 0
