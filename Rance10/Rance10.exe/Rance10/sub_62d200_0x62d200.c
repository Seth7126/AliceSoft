// 函数: sub_62d200
// 地址: 0x62d200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = arg3

if (i == arg2)
    return 

void* const i_1 = arg4

while (i != 0)
    switch (*(i + 4) - 0xa)
        case 0, 1
            *(i + 0x14)
            sub_62d200(0)
        case 6
            if (i_1 != 0)
                *(i_1 + 0x24) = 0
            
            for (void* j = *(i + 0x18); j != 0; j = *(j + 0x18))
                *(j + 0x14)
                *(j + 0xc)
                sub_62d200(i_1)
        case 8
            if (i_1 != 0)
                *(i_1 + 0x24) = 0
                *(i + 0x24) = 0
            else
                i_1 = i
        case 9
            if (i_1 == *(i + 0x14))
                if (*(i_1 + 0x24) == 0xffffffff)
                    *(i_1 + 0x24) = 1
                
                i_1 = nullptr
    
    i = *(i + 0xc)
    
    if (i == arg2)
        break
