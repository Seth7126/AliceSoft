// 函数: sub_62d3a0
// 地址: 0x62d3a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg2
arg2.b = arg1[2].b
int32_t i_4 = *arg1

if (arg2.b != 6)
    if (arg2.b == 4)
        if (*(arg1 + 9) != 8)
            void* edx_4 = arg1[1] + result
            
            if (i_4 != 0)
                int32_t i
                
                do
                    result.b = 0xff
                    edx_4 -= 4
                    result.b = 0xff - *(edx_4 + 3)
                    *(edx_4 + 3) = result.b
                    result.b = 0xff
                    result.b = 0xff - *(edx_4 + 2)
                    *(edx_4 + 2) = result.b
                    i = i_4
                    i_4 -= 1
                while (i != 1)
        else
            char* ecx_3 = arg1[1] + result
            char* edx_2 = ecx_3
            
            if (i_4 != 0)
                int32_t i_1
                
                do
                    result.b = 0xff
                    ecx_3 = &ecx_3[0xfffffffe]
                    result.b = 0xff - ecx_3[1]
                    edx_2 = &edx_2[0xfffffffe]
                    edx_2[1] = result.b
                    result.b = *ecx_3
                    *edx_2 = result.b
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
else if (*(arg1 + 9) != 8)
    void* edx_1 = arg1[1] + result
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            result.b = 0xff
            edx_1 -= 8
            result.b = 0xff - *(edx_1 + 7)
            *(edx_1 + 7) = result.b
            result.b = 0xff
            result.b = 0xff - *(edx_1 + 6)
            *(edx_1 + 6) = result.b
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
else
    void* ecx_1 = arg1[1] + result
    
    if (i_4 != 0)
        int32_t i_3
        
        do
            result.b = 0xff
            ecx_1 -= 4
            result.b = 0xff - *(ecx_1 + 3)
            *(ecx_1 + 3) = result.b
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)

return result
