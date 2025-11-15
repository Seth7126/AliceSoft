// 函数: sub_5fd730
// 地址: 0x5fd730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx_2 = (arg4 - arg2) s/ 0x70
int32_t var_30 = ecx_2
void* edi_1 = ecx_2 * 0x38 + arg2
void* var_10 = edi_1
sub_5fe400(arg4 - 0x38, edi_1, arg2, arg4 - 0x38)
uint32_t ebx_1 = data_7fcbec
void* ebp_1 = edi_1 + 0x38
int32_t esi_2 = data_7fcbe8
void* var_18 = ebp_1

if (arg2 u< edi_1)
    do
        int32_t eax_4
        uint32_t edx_4
        eax_4, edx_4 = __allmul(*(edi_1 + 0x30), *(edi_1 + 0x34), 0x3e8, 0)
        uint32_t eax_5
        int32_t edx_5
        eax_5, edx_5 = __alldiv(eax_4, edx_4, esi_2, ebx_1)
        int32_t eax_6
        uint32_t edx_6
        eax_6, edx_6 = __allmul(*(edi_1 - 8), *(edi_1 - 4), 0x3e8, 0)
        uint32_t eax_7
        int32_t edx_7
        eax_7, edx_7 = __alldiv(eax_6, edx_6, esi_2, ebx_1)
        
        if (edx_7 s> edx_5)
            break
        
        if (edx_7 s>= edx_5 && eax_7 u> eax_5)
            break
        
        if (edx_5 s> edx_7)
            break
        
        if (edx_5 s>= edx_7 && eax_5 u> eax_7)
            break
        
        edi_1 -= 0x38
    while (arg2 u< edi_1)
    
    ebp_1 = var_18
    var_10 = edi_1

int32_t eax_12 = arg4

if (ebp_1 u< eax_12)
    int32_t eax_8
    uint32_t edx_8
    eax_8, edx_8 = __allmul(*(edi_1 + 0x30), *(edi_1 + 0x34), 0x3e8, 0)
    uint32_t eax_9
    int32_t edx_9
    eax_9, edx_9 = __alldiv(eax_8, edx_8, esi_2, ebx_1)
    
    while (true)
        int32_t eax_10
        uint32_t edx_10
        eax_10, edx_10 = __allmul(*(ebp_1 + 0x30), *(ebp_1 + 0x34), 0x3e8, 0)
        uint32_t eax_11
        int32_t edx_11
        eax_11, edx_11 = __alldiv(eax_10, edx_10, esi_2, ebx_1)
        
        if (edx_11 s> edx_9 || (edx_11 s>= edx_9 && eax_11 u> eax_9) || edx_9 s> edx_11
                || (edx_9 s>= edx_11 && eax_9 u> eax_11))
            eax_12 = arg4
            break
        
        eax_12 = arg4
        ebp_1 += 0x38
        
        if (ebp_1 u>= eax_12)
            break
        
        continue
    
    edi_1 = var_10
    var_18 = ebp_1

void* ebx_2 = edi_1
void* esi_3 = ebp_1
void* var_14_3 = ebx_2

while (true)
    void* var_10_2 = esi_3
    
    while (true)
        if (esi_3 u< eax_12)
            uint32_t ebx_3 = data_7fcbec
            
            do
                int32_t eax_13
                uint32_t edx_12
                eax_13, edx_12 = __allmul(*(esi_3 + 0x30), *(esi_3 + 0x34), 0x3e8, 0)
                uint32_t eax_14
                int32_t edx_13
                eax_14, edx_13 = __alldiv(eax_13, edx_12, data_7fcbe8, ebx_3)
                int32_t eax_15
                uint32_t edx_14
                eax_15, edx_14 = __allmul(*(edi_1 + 0x30), *(edi_1 + 0x34), 0x3e8, 0)
                uint32_t eax_16
                int32_t edx_15
                eax_16, edx_15 = __alldiv(eax_15, edx_14, data_7fcbe8, ebx_3)
                
                if (edx_15 s<= edx_13 && (edx_15 s< edx_13 || eax_16 u<= eax_14))
                    if (edx_13 s> edx_15)
                        break
                    
                    if (edx_13 s>= edx_15 && eax_14 u> eax_16)
                        break
                    
                    void* eax_17 = ebp_1
                    ebp_1 += 0x38
                    
                    if (eax_17 != esi_3)
                        sub_5fe900(ebp_1 - 0x38, esi_3)
                        ebx_3 = data_7fcbec
                
                esi_3 += 0x38
            while (esi_3 u< arg4)
            
            ebx_2 = var_14_3
            var_18 = ebp_1
            var_10_2 = esi_3
        
        bool cond:2_1 = ebx_2 != arg2
        
        if (ebx_2 u> arg2)
            uint32_t esi_4 = data_7fcbec
            int32_t ebp_3 = data_7fcbe8
            void* eax_25
            
            do
                int32_t eax_19
                uint32_t edx_17
                eax_19, edx_17 = __allmul(*(ebx_2 - 8), *(ebx_2 - 4), 0x3e8, 0)
                uint32_t eax_20
                int32_t edx_18
                eax_20, edx_18 = __alldiv(eax_19, edx_17, ebp_3, esi_4)
                int32_t eax_21
                uint32_t edx_19
                eax_21, edx_19 = __allmul(*(edi_1 + 0x30), *(edi_1 + 0x34), 0x3e8, 0)
                uint32_t eax_22
                int32_t edx_20
                eax_22, edx_20 = __alldiv(eax_21, edx_19, ebp_3, esi_4)
                
                if (edx_18 s<= edx_20 && (edx_18 s< edx_20 || eax_20 u<= eax_22))
                    if (edx_20 s> edx_18 || (edx_20 s>= edx_18 && eax_22 u> eax_20))
                        eax_25 = arg2
                        break
                    
                    edi_1 -= 0x38
                    
                    if (edi_1 != ebx_2 - 0x38)
                        sub_5fe900(edi_1, ebx_2 - 0x38)
                        esi_4 = data_7fcbec
                        ebp_3 = data_7fcbe8
                
                eax_25 = arg2
                ebx_2 -= 0x38
            while (eax_25 u< ebx_2)
            
            esi_3 = var_10_2
            cond:2_1 = ebx_2 != eax_25
            ebp_1 = var_18
            var_14_3 = ebx_2
        
        if (cond:2_1)
            ebx_2 -= 0x38
            var_14_3 = ebx_2
            
            if (esi_3 != arg4)
                sub_5fe900(esi_3, ebx_2)
                eax_12 = arg4
                esi_3 += 0x38
                break
            
            edi_1 -= 0x38
            
            if (ebx_2 != edi_1)
                sub_5fe900(ebx_2, edi_1)
            
            ebp_1 -= 0x38
            var_18 = ebp_1
            sub_5fe900(edi_1, ebp_1)
            eax_12 = arg4
        else
            if (esi_3 == arg4)
                *arg3 = edi_1
                arg3[1] = ebp_1
                return arg3
            
            if (ebp_1 != esi_3)
                sub_5fe900(edi_1, ebp_1)
            
            void* edx_24 = esi_3
            ebp_1 += 0x38
            esi_3 += 0x38
            var_18 = ebp_1
            void* ecx_11 = edi_1
            var_10_2 = esi_3
            edi_1 += 0x38
            sub_5fe900(ecx_11, edx_24)
            eax_12 = arg4
