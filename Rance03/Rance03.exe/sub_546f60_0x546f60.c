// 函数: sub_546f60
// 地址: 0x546f60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result

if (*(arg1 + 8) != 0)
    switch (*(arg1 + 4) - 1)
        case 0, 9
            if (*(arg1 + 0xc) != 0 && *(arg1 + 0x10) == 0)
                result = sub_584c00(*(arg1 + 0xc), arg2, arg3)
                
                if (result.b == 0)
                    return result
        case 1, 0xa
            if (*(arg1 + 0x18) != 0 && *(arg1 + 0x1c) == 0)
                result = sub_555150(*(arg1 + 0x18), arg2, arg3, arg4)
                
                if (result.b == 0)
                    return result

result.b = 1
return result
