// 函数: sub_667ad0
// 地址: 0x667ad0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result = arg2 & 0x7fffffff
int32_t** esi = arg1
void var_10

if (result s> 0x20)
    if (result s> 0x100)
        if (result == 0x200)
            int128_t* edx_10 = esi[1]
            int32_t* ecx_10 = *esi
            
            if (ecx_10 != edx_10)
                int32_t var_8_10 = 0
                result = sub_669030(result, edx_10, ecx_10, var_10)
    else if (result == 0x100)
        int128_t* edx_9 = esi[1]
        int32_t* ecx_9 = *esi
        
        if (ecx_9 != edx_9)
            int32_t var_8_9 = 0
            result = sub_668f80(result, edx_9, ecx_9, var_10)
    else
        uint32_t result_1 = result
        result -= 0x40
        
        if (result_1 == 0x40)
            int128_t* edx_8 = esi[1]
            int32_t* ecx_8 = *esi
            
            if (ecx_8 != edx_8)
                int32_t var_8_8 = 0
                result = sub_668e20(result, edx_8, ecx_8, var_10)
        else
            uint32_t result_2 = result
            result -= 0x40
            
            if (result_2 == 0x40)
                int128_t* edx_7 = esi[1]
                int32_t* ecx_7 = *esi
                arg1.b = result.b
                
                if (ecx_7 != edx_7)
                    int32_t** var_8_7 = arg1
                    result = sub_668ed0(result, edx_7, ecx_7, var_10)
else if (result == 0x20)
    int128_t* edx_6 = esi[1]
    int32_t* ecx_6 = *esi
    
    if (ecx_6 != edx_6)
        int32_t var_8_6 = 0
        result = sub_668d70(result, edx_6, ecx_6, var_10)
else
    result -= 1
    
    if (result u<= 0xf)
        result = zx.d(lookup_table_667c98[result])
        
        switch (result)
            case 0
                int128_t* edx_1 = esi[1]
                int32_t* ecx_1 = *esi
                
                if (ecx_1 != edx_1)
                    int32_t var_8_1 = 0
                    result = sub_668a00(result, edx_1, ecx_1, var_10)
            case 1
                int128_t* edx_2 = esi[1]
                int32_t* ecx_2 = *esi
                
                if (ecx_2 != edx_2)
                    int32_t var_8_2 = 0
                    result = sub_668ab0(result, edx_2, ecx_2, var_10)
            case 2
                int128_t* edx_3 = esi[1]
                int32_t* ecx_3 = *esi
                
                if (ecx_3 != edx_3)
                    int32_t var_8_3 = 0
                    result = sub_668b60(result, edx_3, ecx_3, var_10)
            case 3
                int128_t* edx_4 = esi[1]
                int32_t* ecx_4 = *esi
                
                if (ecx_4 != edx_4)
                    int32_t var_8_4 = 0
                    result = sub_668c10(result, edx_4, ecx_4, var_10)
            case 4
                int128_t* edx_5 = esi[1]
                int32_t* ecx_5 = *esi
                
                if (ecx_5 != edx_5)
                    int32_t var_8_5 = 0
                    result = sub_668cc0(result, edx_5, ecx_5, var_10)

if ((arg2 & 0x80000000) != 0)
    int32_t var_8_11 = arg2
    sub_6690e0(*esi, esi[1])

return result
