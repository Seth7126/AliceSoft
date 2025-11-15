// 函数: sub_65e9a0
// 地址: 0x65e9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg1
void* esi = *result

if (arg2 s>= 0)
    if (*(esi + 0x68) s< arg2)
        return result
    
    return (*(esi + 8))(result)

if (*(esi + 0x6c) == 0 || *(esi + 0x68) s>= 3)
    result = (*(esi + 8))(result)

*(esi + 0x6c) += 1
return result
