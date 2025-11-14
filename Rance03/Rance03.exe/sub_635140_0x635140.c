// 函数: sub_635140
// 地址: 0x635140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char eax = arg1[2].b

if ((eax & 2) != 0)
    int32_t i_4 = *arg1
    arg1.b = *(arg1 + 9)
    
    if (arg1.b != 8)
        if (arg1.b == 0x10)
            if (eax != 2)
                if (eax == 6 && i_4 != 0)
                    void* edx_1 = &arg2[1]
                    int32_t i
                    
                    do
                        arg1.b = *(edx_1 - 1)
                        edx_1 += 8
                        *(edx_1 - 9) = *(edx_1 - 5)
                        eax = *(edx_1 - 4)
                        *(edx_1 - 5) = arg1.b
                        arg1.b = *(edx_1 - 8)
                        *(edx_1 - 8) = eax
                        *(edx_1 - 4) = arg1.b
                        i = i_4
                        i_4 -= 1
                    while (i != 1)
            else if (i_4 != 0)
                void* edx = &arg2[1]
                char eax_2
                int32_t i_1
                
                do
                    arg1.b = *(edx - 1)
                    edx += 6
                    *(edx - 7) = *(edx - 3)
                    eax_2 = *(edx - 2)
                    *(edx - 3) = arg1.b
                    arg1.b = *(edx - 6)
                    *(edx - 6) = eax_2
                    *(edx - 2) = arg1.b
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
                return eax_2
    else if (eax != 2)
        if (eax == 6 && i_4 != 0)
            int32_t i_2
            
            do
                char ecx = *arg2
                arg2 = &arg2[4]
                eax = arg2[0xfffffffe]
                arg2[0xfffffffc] = eax
                arg2[0xfffffffe] = ecx
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
    else if (i_4 != 0)
        int32_t i_3
        
        do
            arg1.b = *arg2
            arg2 = &arg2[3]
            eax = arg2[0xffffffff]
            arg2[0xfffffffd] = eax
            arg2[0xffffffff] = arg1.b
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)

return eax
