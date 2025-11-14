// 函数: sub_657bf0
// 地址: 0x657bf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result = arg2 & 0x7fffffff
int32_t** esi = arg1
void var_10

if (result s> 0x20)
    if (result s> 0x100)
        if (result == 0x200)
            int32_t* edx_11 = esi[1]
            int32_t* ecx_11 = *esi
            
            if (ecx_11 != edx_11)
                int32_t var_8_11 = 0
                result = sub_65acb0(result, edx_11, ecx_11, var_10)
        else if (result == 0x400)
            int32_t* edx_10 = esi[1]
            int32_t* ecx_10 = *esi
            
            if (ecx_10 != edx_10)
                int32_t var_8_10 = 0
                result = sub_65ad60(result, edx_10, ecx_10, var_10)
    else if (result == 0x100)
        int32_t* edx_9 = esi[1]
        int32_t* ecx_9 = *esi
        
        if (ecx_9 != edx_9)
            int32_t var_8_9 = 0
            result = sub_65ac00(result, edx_9, ecx_9, var_10)
    else
        uint32_t result_1 = result
        result -= 0x40
        
        if (result_1 == 0x40)
            int32_t* edx_8 = esi[1]
            int32_t* ecx_8 = *esi
            
            if (ecx_8 != edx_8)
                int32_t var_8_8 = 0
                result = sub_65aaa0(result, edx_8, ecx_8, var_10)
        else
            uint32_t result_2 = result
            result -= 0x40
            
            if (result_2 == 0x40)
                int32_t* edx_7 = esi[1]
                int32_t* ecx_7 = *esi
                arg1.b = result.b
                
                if (ecx_7 != edx_7)
                    int32_t** var_8_7 = arg1
                    result = sub_65ab50(result, edx_7, ecx_7, var_10)
else if (result == 0x20)
    int32_t* edx_6 = esi[1]
    int32_t* ecx_6 = *esi
    
    if (ecx_6 != edx_6)
        int32_t var_8_6 = 0
        result = sub_65a9f0(result, edx_6, ecx_6, var_10)
else
    result -= 1
    
    if (result u<= 0xf)
        result = zx.d(lookup_table_657de4[result])
        
        switch (result)
            case 0
                int32_t* edx_1 = esi[1]
                int32_t* ecx_1 = *esi
                
                if (ecx_1 != edx_1)
                    int32_t var_8_1 = 0
                    result = sub_65a680(result, edx_1, ecx_1, var_10)
            case 1
                int32_t* edx_2 = esi[1]
                int32_t* ecx_2 = *esi
                
                if (ecx_2 != edx_2)
                    int32_t var_8_2 = 0
                    result = sub_65a730(result, edx_2, ecx_2, var_10)
            case 2
                int32_t* edx_3 = esi[1]
                int32_t* ecx_3 = *esi
                
                if (ecx_3 != edx_3)
                    int32_t var_8_3 = 0
                    result = sub_65a7e0(result, edx_3, ecx_3, var_10)
            case 3
                int32_t* edx_4 = esi[1]
                int32_t* ecx_4 = *esi
                
                if (ecx_4 != edx_4)
                    int32_t var_8_4 = 0
                    result = sub_65a890(result, edx_4, ecx_4, var_10)
            case 4
                int32_t* edx_5 = esi[1]
                int32_t* ecx_5 = *esi
                
                if (ecx_5 != edx_5)
                    int32_t var_8_5 = 0
                    result = sub_65a940(result, edx_5, ecx_5, var_10)

if ((arg2 & 0x80000000) == 0)
    return result

int32_t var_8_12 = arg2
return sub_65ae10(*esi, esi[1])
