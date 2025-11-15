// 函数: sub_694930
// 地址: 0x694930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0
int32_t esi = 0

if (arg2 s> 0)
    do
        int32_t eax_1 = *(arg1 + (esi << 2))
        
        if (eax_1 u> 0xb)
            return 0
        
        int32_t eax_2
        
        switch (eax_1)
            case 0, 0xa, 0xb
                eax_2 = 0x10
            case 1, 2, 3
                eax_2 = 0xc
            case 4, 5, 9
                eax_2 = 4
            case 6, 7, 8
                eax_2 = 8
        
        esi += 1
        result += eax_2
    while (esi s< arg2)

return result
