// 函数: sub_5ca2b0
// 地址: 0x5ca2b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi

if (arg2[3] != 0)
    esi = arg2[2]
else
    esi = nullptr

int32_t edx = arg3
int32_t* ecx = arg2
uint32_t i

if (edx != 0)
    int32_t ebx_1 = 1
    
    if (sub_5d4330(ecx) s> 1)
        uint32_t eax_5
        
        do
            int32_t ebp_2 = *(esi + (ebx_1 << 2))
            int32_t edi_2 = ebx_1 - 1
            
            if (ebx_1 s>= 1)
                int32_t var_c = ebp_2
                int32_t temp1_1
                
                do
                    int32_t var_8_1 = *(esi + (edi_2 << 2))
                    int32_t var_10
                    int32_t* var_28_1 = &var_10
                    int32_t* var_2c_1 = ecx
                    ecx = arg1
                    int32_t eax_3
                    int32_t edx_2
                    eax_3, edx_2 = sub_5cac70(ecx, edx, &var_c, var_2c_1)
                    
                    if (eax_3.b == 0)
                        sub_5c24e0(eax_3, edx_2, ecx, arg1, 0x6e8ac4)
                        int32_t* eax_6
                        eax_6.b = 0
                        return eax_6
                    
                    edx = arg3
                    
                    if (var_10 s<= 0)
                        break
                    
                    *(esi + (edi_2 << 2) + 4) = *(esi + (edi_2 << 2))
                    temp1_1 = edi_2
                    edi_2 -= 1
                while (temp1_1 - 1 s>= 0)
            
            ecx = arg2
            ebx_1 += 1
            *(esi + (edi_2 << 2) + 4) = ebp_2
            eax_5 = sub_5d4330(ecx)
        while (ebx_1 s< eax_5)
        
        eax_5.b = 1
        return eax_5
else if (sub_5d4330(ecx) s> 1)
    int32_t edi_1 = 0
    int32_t* ebp_1 = esi + 4
    
    do
        int32_t edx_1 = *ebp_1
        int32_t eax_1 = edi_1
        
        if (edi_1 s>= 0)
            int32_t temp2_1
            
            do
                int32_t ecx_1 = *(esi + (eax_1 << 2))
                
                if (ecx_1 s<= edx_1)
                    break
                
                *(esi + (eax_1 << 2) + 4) = ecx_1
                temp2_1 = eax_1
                eax_1 -= 1
            while (temp2_1 - 1 s>= 0)
        
        ebp_1 = &ebp_1[1]
        *(esi + (eax_1 << 2) + 4) = edx_1
        edi_1 += 1
        i = sub_5d4330(arg2)
    while (edi_1 + 1 s< i)

i.b = 1
return i
