// 函数: sub_65d0b0
// 地址: 0x65d0b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[0x65]
*(*arg1 + 0x14) = 0x7c
*(*arg1 + 0x18) = edi
*(*arg1 + 0x1c) = arg2
(*(*arg1 + 4))(arg1, 0xffffffff)
int32_t result

while (true)
    int32_t esi_1
    
    if (edi s< 0xc0)
        esi_1 = 2
    else if (edi - 0xd0 u> 7 || edi == ((arg2 + 1) & 7) + 0xd0 || edi == ((arg2 + 2) & 7) + 0xd0)
        esi_1 = 3
    else if (edi == ((arg2 - 1) & 7) + 0xd0 || edi == ((arg2 - 2) & 7) + 0xd0)
        esi_1 = 2
    else
        esi_1 = 1
    
    *(*arg1 + 0x14) = 0x63
    *(*arg1 + 0x18) = edi
    *(*arg1 + 0x1c) = esi_1
    (*(*arg1 + 4))(arg1, 4)
    
    if (esi_1 == 1)
        arg1[0x65] = 0
        result.b = 1
        return result
    
    if (esi_1 == 2)
        if (sub_65cb50(arg1) == 0)
            return 0
        
        edi = arg1[0x65]
    else
        if (esi_1 == 3)
            break

result.b = 1
return result
