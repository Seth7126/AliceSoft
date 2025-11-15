// 函数: sub_47d5a0
// 地址: 0x47d5a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (*(arg1 + 4) != 0)
    result.b = 1
    return result

int32_t* edi = data_7fcb88

if (edi != 0)
    result = (**edi)(0x75fe6c)
    *(arg1 + 0xc) = result
    
    if (result != 0)
        *(arg1 + 8) = (**edi)(0x75fe9c)
        *(arg1 + 0x10) = (**edi)(0x75fe8c)
        *(arg1 + 0x14) = (**edi)(0x75fe5c)
        *(arg1 + 0x18) = (**edi)(0x75fe4c)
        result = (**edi)(0x75fe7c)
        *(arg1 + 0x1c) = result
        
        if (result != 0)
            *(arg1 + 0x24) = 0
            result.b = 1
            *(arg1 + 4) = 1
            return result

result.b = 0
return result
