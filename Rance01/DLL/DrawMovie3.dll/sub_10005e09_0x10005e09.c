// 函数: sub_10005e09
// 地址: 0x10005e09
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t esi
int32_t var_10 = esi
int32_t* esp = &var_10
void* result = sub_10003236()

if (result != 0)
    int32_t* edx_1 = *(result + 0x5c)
    int32_t eax = data_10020300
    int32_t edi
    int32_t var_14 = edi
    int32_t* ecx_1 = edx_1
    int32_t ebx
    int32_t var_18 = ebx
    int32_t* esp_1 = &var_18
    
    while (*ecx_1 != arg1)
        ecx_1 = &ecx_1[3]
        
        if (ecx_1 u>= eax * 0xc + edx_1)
            break
    
    int32_t* eax_3
    
    if (ecx_1 u>= eax * 0xc + edx_1 || *ecx_1 != arg1)
        eax_3 = nullptr
    else
        eax_3 = ecx_1
    
    int32_t ebx_4
    
    if (eax_3 != 0)
        ebx_4 = eax_3[2]
    
    if (eax_3 == 0 || ebx_4 == 0)
        result = nullptr
    else if (ebx_4 != 5)
        if (ebx_4 != 1)
            int32_t ecx_2 = *(result + 0x60)
            *(result + 0x60) = arg2
            int32_t ecx_4 = eax_3[1]
            
            if (ecx_4 != 8)
                eax_3[2] = 0
                ebx_4(ecx_4)
            else
                int32_t i_1 = data_100202f4
                int32_t i = i_1
                
                if (i s< data_100202f8 + i_1)
                    int32_t ecx_5 = i_1 * 0xc
                    
                    do
                        *(ecx_5 + *(result + 0x5c) + 8) = 0
                        i += 1
                        ecx_5 += 0xc
                    while (i s< data_100202f8 + data_100202f4)
                
                int32_t edi_6 = *(result + 0x64)
                
                switch (*eax_3)
                    case 0xc000008d
                        *(result + 0x64) = 0x82
                    case 0xc000008e
                        *(result + 0x64) = 0x83
                    case 0xc000008f
                        *(result + 0x64) = 0x86
                    case 0xc0000090
                        *(result + 0x64) = 0x81
                    case 0xc0000091
                        *(result + 0x64) = 0x84
                    case 0xc0000092
                        *(result + 0x64) = 0x8a
                    case 0xc0000093
                        *(result + 0x64) = 0x85
                
                int32_t var_1c_1 = *(result + 0x64)
                ebx_4(8)
                *(result + 0x64) = edi_6
            
            esp_1 = &var_14
            *(result + 0x60) = ecx_2
        
        result = 0xffffffff
    else
        eax_3[2] = 0
        result = 1
    
    *esp_1
    esp_1[1]
    esp = &esp_1[2]

*esp
return result
