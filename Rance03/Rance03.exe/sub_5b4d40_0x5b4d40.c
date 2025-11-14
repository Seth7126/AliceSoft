// 函数: sub_5b4d40
// 地址: 0x5b4d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_30 = arg5
int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q((arg4 - arg2) s/ 0x38)
void* esi_2 = arg2 + ((eax_4 - edx_3) s>> 1) * 0x38
void* var_10 = esi_2
sub_5b50a0(arg4 - 0x38, esi_2, arg2, arg4 - 0x38)
uint32_t ebx_1 = data_75d564
void* ebp = esi_2 + 0x38
void* var_1c = ebp
int32_t edi_1 = data_75d560

if (arg2 u< esi_2)
    do
        int32_t eax_8
        uint32_t edx_5
        eax_8, edx_5 = __allmul(*(esi_2 + 0x30), *(esi_2 + 0x34), 0x3e8, 0)
        uint32_t eax_9
        int32_t edx_6
        eax_9, edx_6 = __alldiv(eax_8, edx_5, edi_1, ebx_1)
        int32_t eax_10
        uint32_t edx_7
        eax_10, edx_7 = __allmul(*(esi_2 - 8), *(esi_2 - 4), 0x3e8, 0)
        uint32_t eax_11
        int32_t edx_8
        eax_11, edx_8 = __alldiv(eax_10, edx_7, edi_1, ebx_1)
        
        if (edx_8 s> edx_6)
            break
        
        if (edx_8 s>= edx_6 && eax_11 u> eax_9)
            break
        
        if (edx_6 s> edx_8)
            break
        
        if (edx_6 s>= edx_8 && eax_9 u> eax_11)
            break
        
        esi_2 -= 0x38
    while (arg2 u< esi_2)
    
    ebp = var_1c
    var_10 = esi_2

void* eax_16 = arg4

if (ebp u< eax_16)
    int32_t eax_12
    uint32_t edx_9
    eax_12, edx_9 = __allmul(*(esi_2 + 0x30), *(esi_2 + 0x34), 0x3e8, 0)
    uint32_t eax_13
    int32_t edx_10
    eax_13, edx_10 = __alldiv(eax_12, edx_9, edi_1, ebx_1)
    
    while (true)
        int32_t eax_14
        uint32_t edx_11
        eax_14, edx_11 = __allmul(*(ebp + 0x30), *(ebp + 0x34), 0x3e8, 0)
        uint32_t eax_15
        int32_t edx_12
        eax_15, edx_12 = __alldiv(eax_14, edx_11, edi_1, ebx_1)
        
        if (edx_12 s> edx_10 || (edx_12 s>= edx_10 && eax_15 u> eax_13) || edx_10 s> edx_12
                || (edx_10 s>= edx_12 && eax_13 u> eax_15))
            eax_16 = arg4
            break
        
        eax_16 = arg4
        ebp += 0x38
        
        if (ebp u>= eax_16)
            break
        
        continue
    
    esi_2 = var_10
    var_1c = ebp

void* ebx_2 = esi_2
void* edi_2 = ebp
void* var_14_3 = ebx_2

while (true)
    void* var_10_2 = edi_2
    
    while (true)
        if (edi_2 u< eax_16)
            uint32_t ebx_3 = data_75d564
            
            do
                int32_t eax_17
                uint32_t edx_13
                eax_17, edx_13 = __allmul(*(edi_2 + 0x30), *(edi_2 + 0x34), 0x3e8, 0)
                uint32_t eax_18
                int32_t edx_14
                eax_18, edx_14 = __alldiv(eax_17, edx_13, data_75d560, ebx_3)
                int32_t eax_19
                uint32_t edx_15
                eax_19, edx_15 = __allmul(*(esi_2 + 0x30), *(esi_2 + 0x34), 0x3e8, 0)
                uint32_t eax_20
                int32_t edx_16
                eax_20, edx_16 = __alldiv(eax_19, edx_15, data_75d560, ebx_3)
                
                if (edx_16 s<= edx_14 && (edx_16 s< edx_14 || eax_20 u<= eax_18))
                    if (edx_14 s> edx_16)
                        break
                    
                    if (edx_14 s>= edx_16 && eax_18 u> eax_20)
                        break
                    
                    void* eax_21 = ebp
                    ebp += 0x38
                    
                    if (eax_21 != edi_2)
                        sub_5b5cd0(ebp - 0x38, edi_2)
                        ebx_3 = data_75d564
                
                edi_2 += 0x38
            while (edi_2 u< arg4)
            
            ebx_2 = var_14_3
            var_1c = ebp
            var_10_2 = edi_2
        
        bool cond:3_1 = ebx_2 != arg2
        
        if (ebx_2 u> arg2)
            int32_t ebp_2 = data_75d560
            uint32_t edi_4 = data_75d564
            void* eax_29
            
            do
                int32_t eax_23
                uint32_t edx_18
                eax_23, edx_18 = __allmul(*(ebx_2 - 8), *(ebx_2 - 4), 0x3e8, 0)
                uint32_t eax_24
                int32_t edx_19
                eax_24, edx_19 = __alldiv(eax_23, edx_18, ebp_2, edi_4)
                int32_t eax_25
                uint32_t edx_20
                eax_25, edx_20 = __allmul(*(esi_2 + 0x30), *(esi_2 + 0x34), 0x3e8, 0)
                uint32_t eax_26
                int32_t edx_21
                eax_26, edx_21 = __alldiv(eax_25, edx_20, ebp_2, edi_4)
                
                if (edx_19 s<= edx_21 && (edx_19 s< edx_21 || eax_24 u<= eax_26))
                    if (edx_21 s> edx_19 || (edx_21 s>= edx_19 && eax_26 u> eax_24))
                        eax_29 = arg2
                        break
                    
                    esi_2 -= 0x38
                    
                    if (esi_2 != ebx_2 - 0x38)
                        sub_5b5cd0(esi_2, ebx_2 - 0x38)
                        edi_4 = data_75d564
                        ebp_2 = data_75d560
                
                eax_29 = arg2
                ebx_2 -= 0x38
            while (eax_29 u< ebx_2)
            
            edi_2 = var_10_2
            cond:3_1 = ebx_2 != eax_29
            ebp = var_1c
            var_14_3 = ebx_2
        
        if (cond:3_1)
            ebx_2 -= 0x38
            var_14_3 = ebx_2
            
            if (edi_2 != arg4)
                sub_5b5cd0(edi_2, ebx_2)
                eax_16 = arg4
                edi_2 += 0x38
                break
            
            esi_2 -= 0x38
            
            if (ebx_2 != esi_2)
                sub_5b5cd0(ebx_2, esi_2)
            
            ebp -= 0x38
            var_1c = ebp
            sub_5b5cd0(esi_2, ebp)
            eax_16 = arg4
        else
            if (edi_2 == arg4)
                *arg3 = esi_2
                arg3[1] = ebp
                return arg3
            
            if (ebp != edi_2)
                sub_5b5cd0(esi_2, ebp)
            
            void* edx_25 = edi_2
            ebp += 0x38
            edi_2 += 0x38
            var_1c = ebp
            void* ecx_10 = esi_2
            var_10_2 = edi_2
            esi_2 += 0x38
            sub_5b5cd0(ecx_10, edx_25)
            eax_16 = arg4
