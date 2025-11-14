// 函数: sub_10007f41
// 地址: 0x10007f41
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* result = *(arg1 + 0x10)
int32_t edi
int32_t var_1c = edi
int32_t* esi_1 = arg2 - 4
uint32_t edi_3 = (arg2 - *(arg1 + 0xc)) u>> 0xf
void* ecx_5 = *esi_1 - 1
void* var_8 = ecx_5

if ((ecx_5.b & 1) == 0)
    void* ebx_1 = ecx_5 + esi_1
    int32_t edx_1 = *ebx_1
    int32_t edx_2 = esi_1[-1]
    arg2 = ebx_1
    
    if ((edx_1.b & 1) == 0)
        int32_t edx_5 = (edx_1 s>> 4) - 1
        
        if (edx_5 u> 0x3f)
            edx_5 = 0x3f
        
        if (*(ebx_1 + 4) == *(ebx_1 + 8))
            if (edx_5 u>= 0x20)
                uint32_t ebx_5 = not.d(0x80000000 u>> (edx_5.b - 0x20))
                result[edi_3 + 0x31] &= ebx_5
                char temp0_1 = *(edx_5 + result + 4)
                *(edx_5 + result + 4) -= 1
                
                if (temp0_1 == 1)
                    *(arg1 + 4) &= ebx_5
            else
                uint32_t ebx_3 = not.d(0x80000000 u>> edx_5.b)
                result[edi_3 + 0x11] &= ebx_3
                char temp1_1 = *(edx_5 + result + 4)
                *(edx_5 + result + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t* ecx_9 = arg1
                    *ecx_9 &= ebx_3
            
            ebx_1 = arg2
        
        ecx_5 = var_8 + edx_1
        *(*(ebx_1 + 8) + 4) = *(ebx_1 + 4)
        *(*(arg2 + 4) + 8) = *(arg2 + 8)
        var_8 = ecx_5
    
    int32_t edx_11 = (ecx_5 s>> 4) - 1
    
    if (edx_11 u> 0x3f)
        edx_11 = 0x3f
    
    int32_t ebx_9 = edx_2 & 1
    void* ebx_12
    
    if (ebx_9 != 0)
        ebx_12 = arg1
    else
        void* esi_2 = esi_1 - edx_2
        ebx_12 = (edx_2 s>> 4) - 1
        
        if (ebx_12 u> 0x3f)
            ebx_12 = 0x3f
        
        void* ecx_14 = ecx_5 + edx_2
        edx_11 = (ecx_14 s>> 4) - 1
        var_8 = ecx_14
        
        if (edx_11 u> 0x3f)
            edx_11 = 0x3f
        
        if (ebx_12 != edx_11)
            if (*(esi_2 + 4) == *(esi_2 + 8))
                if (ebx_12 u>= 0x20)
                    uint32_t esi_7 = not.d(0x80000000 u>> (ebx_12.b - 0x20))
                    result[edi_3 + 0x31] &= esi_7
                    char temp3_1 = *(ebx_12 + result + 4)
                    *(ebx_12 + result + 4) -= 1
                    
                    if (temp3_1 == 1)
                        *(arg1 + 4) &= esi_7
                else
                    uint32_t esi_5 = not.d(0x80000000 u>> ebx_12.b)
                    result[edi_3 + 0x11] &= esi_5
                    char temp4_1 = *(ebx_12 + result + 4)
                    *(ebx_12 + result + 4) -= 1
                    
                    if (temp4_1 == 1)
                        int32_t* ecx_17 = arg1
                        *ecx_17 &= esi_5
            
            *(*(esi_2 + 8) + 4) = *(esi_2 + 4)
            *(*(esi_2 + 4) + 8) = *(esi_2 + 8)
        
        esi_1 = esi_2
    
    if (ebx_9 != 0 || ebx_12 != edx_11)
        void* ecx_25 = &result[edi_3 * 0x81 + 0x51 + edx_11 * 2]
        int32_t ebx_13 = *(ecx_25 + 4)
        esi_1[2] = ecx_25
        esi_1[1] = ebx_13
        *(ecx_25 + 4) = esi_1
        *(esi_1[1] + 8) = esi_1
        
        if (esi_1[1] == esi_1[2])
            int32_t ecx_27
            ecx_27.b = *(edx_11 + result + 4)
            arg2:3.b = ecx_27.b
            ecx_27.b += 1
            *(edx_11 + result + 4) = ecx_27.b
            
            if (edx_11 u>= 0x20)
                if (arg2:3.b == 0)
                    *(arg1 + 4) |= 0x80000000 u>> (edx_11.b - 0x20)
                
                result[edi_3 + 0x31] |= 0x80000000 u>> (edx_11.b - 0x20)
            else
                if (arg2:3.b == 0)
                    int32_t* ecx_29 = arg1
                    *ecx_29 |= 0x80000000 u>> edx_11.b
                
                result[edi_3 + 0x11] |= 0x80000000 u>> edx_11.b
    
    *esi_1 = var_8
    *(var_8 + esi_1 - 4) = var_8
    result = &result[edi_3 * 0x81 + 0x51]
    int32_t temp2_1 = *result
    *result -= 1
    
    if (temp2_1 == 1)
        int32_t eax_3 = data_10022398
        
        if (eax_3 != 0)
            VirtualFree((data_1002351c << 0xf) + *(eax_3 + 0xc), 0x8000, MEM_DECOMMIT)
            void* eax_4 = data_10022398
            *(eax_4 + 8) |= 0x80000000 u>> (data_1002351c).b
            *(*(data_10022398 + 0x10) + (data_1002351c << 2) + 0xc4) = 0
            void* eax_8 = *(data_10022398 + 0x10)
            *(eax_8 + 0x43) -= 1
            void* eax_9 = data_10022398
            
            if (*(*(eax_9 + 0x10) + 0x43) == 0)
                *(eax_9 + 4) &= 0xfffffffe
                eax_9 = data_10022398
            
            if (*(eax_9 + 8) == 0xffffffff)
                VirtualFree(*(eax_9 + 0xc), 0, MEM_RELEASE)
                HeapFree(data_100221d4, HEAP_NONE, *(data_10022398 + 0x10))
                int128_t* eax_11 = data_10022398
                sub_100038e0(eax_11, eax_11 + 0x14, 
                    data_10023508 * 0x14 - eax_11 + data_1002350c - 0x14)
                data_10023508 -= 1
                
                if (arg1 u> data_10022398)
                    arg1 -= 0x14
                
                data_10023514 = data_1002350c
        
        result = arg1
        data_10022398 = result
        data_1002351c = edi_3

return result
