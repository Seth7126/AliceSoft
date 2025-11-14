// 函数: sub_61ad40
// 地址: 0x61ad40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = 0
int32_t esi = 0

if (arg2 s> 0)
    while (true)
        int32_t edx = *(arg1 + (esi << 2))
        
        if (edx u> 0xb)
            break
        
        switch (edx)
            case 0, 0xa, 0xb
                result += 0x10
            case 1, 2, 3
                result += 0xc
            case 4, 5, 9
                result += 4
            case 6, 7, 8
                result += 8
        
        esi += 1
        
        if (esi s>= arg2)
            return result

return 0
