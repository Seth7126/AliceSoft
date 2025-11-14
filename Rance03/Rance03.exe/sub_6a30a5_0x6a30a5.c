// 函数: sub_6a30a5
// 地址: 0x6a30a5
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t* result = sub_69fc72()

if (result == 0)
    return result

int32_t* edx_1 = result[0x17]
int32_t* ecx_1 = edx_1

while (*ecx_1 != arg1)
    ecx_1 = &ecx_1[3]
    
    if (ecx_1 u>= &edx_1[0x24])
        break

if (ecx_1 u>= &edx_1[0x24] || *ecx_1 != arg1)
    ecx_1 = nullptr

if (ecx_1 != 0)
    int32_t edx_2 = ecx_1[2]
    
    if (edx_2 != 0)
        if (edx_2 == 5)
            ecx_1[2] = 0
            return 1
        
        if (edx_2 == 1)
            return 0xffffffff
        
        int32_t ebx_1 = result[0x18]
        result[0x18] = arg2
        
        if (ecx_1[1] != 8)
            int32_t var_14_1 = ecx_1[1]
            ecx_1[2] = 0
            edx_2(var_14_1)
        else
            for (int32_t i = 0x24; i s< 0x90; i += 0xc)
                *(i + result[0x17] + 8) = 0
            
            int32_t edi_2 = result[0x19]
            
            if (*ecx_1 == 0xc000008e)
                result[0x19] = 0x83
            else if (*ecx_1 == 0xc0000090)
                result[0x19] = 0x81
            else if (*ecx_1 == 0xc0000091)
                result[0x19] = 0x84
            else if (*ecx_1 == 0xc0000093)
                result[0x19] = 0x85
            else if (*ecx_1 == 0xc000008d)
                result[0x19] = 0x82
            else if (*ecx_1 == 0xc000008f)
                result[0x19] = 0x86
            else if (*ecx_1 == 0xc0000092)
                result[0x19] = 0x8a
            else if (*ecx_1 == 0xc00002b5)
                result[0x19] = 0x8d
            else if (*ecx_1 == 0xc00002b4)
                result[0x19] = 0x8e
            
            edx_2(8, result[0x19])
            result[0x19] = edi_2
        
        result[0x18] = ebx_1
        return 0xffffffff

return nullptr
