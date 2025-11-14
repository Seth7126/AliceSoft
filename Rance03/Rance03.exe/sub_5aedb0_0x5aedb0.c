// 函数: sub_5aedb0
// 地址: 0x5aedb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg4
int32_t var_34 = arg5
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((edi - arg2) s/ 0x24)
int32_t* ebx_1 = &arg2[((eax_4 - edx_2) s>> 1) * 9]
int32_t* eax_8 = edi - 0x24
int32_t* var_18 = ebx_1
sub_5afc20(eax_8, ebx_1, arg2, eax_8)
int32_t* edx_4 = &ebx_1[9]
int32_t* var_20 = edx_4

if (arg2 u< ebx_1)
    do
        int32_t ecx_1 = ebx_1[-9]
        int32_t esi_2 = *ebx_1
        
        if (ecx_1 s< esi_2)
            break
        
        if (esi_2 s< ecx_1)
            break
        
        ebx_1 = &ebx_1[-9]
    while (arg2 u< ebx_1)
    
    var_18 = ebx_1

if (edx_4 u< edi)
    int32_t ecx_2 = *ebx_1
    
    do
        int32_t eax_9 = *edx_4
        
        if (eax_9 s< ecx_2)
            break
        
        if (ecx_2 s< eax_9)
            break
        
        edx_4 = &edx_4[9]
    while (edx_4 u< edi)
    
    var_20 = edx_4

int32_t* eax_10 = ebx_1
int32_t* ebp_1 = edx_4
int32_t* var_1c = eax_10

while (true)
    int32_t* var_14_1 = ebp_1
    
    while (true)
        if (ebp_1 u< edi)
            void* edi_1 = &ebp_1[6]
            void* var_14_2 = edi_1
            void* ecx_3 = &edx_4[-3]
            
            do
                int32_t esi_3 = *ebx_1
                int32_t eax_11 = *ebp_1
                
                if (esi_3 s>= eax_11)
                    if (eax_11 s< esi_3)
                        break
                    
                    int32_t* eax_12 = edx_4
                    ecx_3 += 0x24
                    edx_4 = &edx_4[9]
                    var_20 = edx_4
                    
                    if (eax_12 != ebp_1)
                        int64_t xmm2_1 = *(ecx_3 - 0xc)
                        int32_t esi_4 = *(ecx_3 - 4)
                        int32_t xmm3_1 = *ecx_3
                        int32_t xmm1_1 = *(ecx_3 + 4)
                        int32_t edi_2 = *(ecx_3 - 0x18)
                        int32_t edx_5 = *(ecx_3 - 0x14)
                        int32_t ecx_4 = *(ecx_3 + 8)
                        *(ecx_3 - 0x18) = *ebp_1
                        *(ecx_3 - 0x14) = *(var_14_2 - 0x14)
                        *(ecx_3 - 0xc) = *(var_14_2 - 0xc)
                        *(ecx_3 - 4) = *(var_14_2 - 4)
                        *ecx_3 = *var_14_2
                        *(ecx_3 + 4) = *(var_14_2 + 4)
                        *(ecx_3 + 8) = *(var_14_2 + 8)
                        ebx_1 = var_18
                        *ebp_1 = edi_2
                        edi_1 = var_14_2
                        *(edi_1 - 0x14) = edx_5
                        edx_4 = var_20
                        *(edi_1 - 0xc) = xmm2_1
                        *(edi_1 - 4) = esi_4
                        *edi_1 = xmm3_1
                        *(edi_1 + 4) = xmm1_1
                        *(edi_1 + 8) = ecx_4
                
                ebp_1 = &ebp_1[9]
                edi_1 += 0x24
                var_14_2 = edi_1
            while (ebp_1 u< arg4)
            
            eax_10 = var_1c
            var_14_1 = ebp_1
        
        int32_t* edi_3 = arg2
        bool cond:0_1 = eax_10 != edi_3
        
        if (eax_10 u> edi_3)
            void* ecx_5 = &ebx_1[6]
            void* ebp_2 = &eax_10[-3]
            
            do
                int32_t edx_6 = *(ebp_2 - 0x18)
                int32_t esi_5 = *ebx_1
                
                if (edx_6 s>= esi_5)
                    if (esi_5 s< edx_6)
                        break
                    
                    ebx_1 -= 0x24
                    ecx_5 -= 0x24
                    var_18 = ebx_1
                    
                    if (ebx_1 != ebp_2 - 0x18)
                        int64_t xmm2_2 = *(ecx_5 - 0xc)
                        int32_t esi_6 = *(ecx_5 - 4)
                        int32_t xmm3_2 = *ecx_5
                        int32_t xmm1_2 = *(ecx_5 + 4)
                        int32_t edi_4 = *ebx_1
                        int32_t edx_7 = *(ecx_5 - 0x14)
                        int32_t ecx_6 = *(ecx_5 + 8)
                        *ebx_1 = *(ebp_2 - 0x18)
                        *(ecx_5 - 0x14) = *(ebp_2 - 0x14)
                        *(ecx_5 - 0xc) = *(ebp_2 - 0xc)
                        *(ecx_5 - 4) = *(ebp_2 - 4)
                        *ecx_5 = *ebp_2
                        *(ecx_5 + 4) = *(ebp_2 + 4)
                        *(ecx_5 + 8) = *(ebp_2 + 8)
                        ebx_1 = var_18
                        *(ebp_2 - 0x18) = edi_4
                        edi_3 = arg2
                        *(ebp_2 - 0x14) = edx_7
                        *(ebp_2 - 0xc) = xmm2_2
                        *(ebp_2 - 4) = esi_6
                        *ebp_2 = xmm3_2
                        *(ebp_2 + 4) = xmm1_2
                        *(ebp_2 + 8) = ecx_6
                    
                    eax_10 = var_1c
                
                eax_10 -= 0x24
                ebp_2 -= 0x24
                var_1c = eax_10
            while (edi_3 u< eax_10)
            
            ebp_1 = var_14_1
            cond:0_1 = eax_10 != edi_3
        
        if (cond:0_1)
            var_1c = eax_10 - 0x24
            
            if (ebp_1 != arg4)
                int64_t xmm1_7 = *(ebp_1 + 0xc)
                int32_t esi_11 = ebp_1[5]
                int32_t xmm2_7 = ebp_1[6]
                int32_t xmm3_7 = ebp_1[7]
                int32_t edi_9 = *ebp_1
                int32_t edx_12 = ebp_1[1]
                int32_t ecx_11 = ebp_1[8]
                *ebp_1 = *(eax_10 - 0x24)
                ebp_1[1] = var_1c[1]
                *(ebp_1 + 0xc) = *(var_1c + 0xc)
                ebp_1[5] = var_1c[5]
                ebp_1[6] = var_1c[6]
                ebp_1[7] = var_1c[7]
                ebp_1[8] = var_1c[8]
                ebp_1 = &ebp_1[9]
                eax_10 = var_1c
                *eax_10 = edi_9
                edi = arg4
                eax_10[1] = edx_12
                edx_4 = var_20
                *(eax_10 + 0xc) = xmm1_7
                eax_10[5] = esi_11
                eax_10[6] = xmm2_7
                eax_10[7] = xmm3_7
                eax_10[8] = ecx_11
                break
            
            ebx_1 -= 0x24
            var_18 = ebx_1
            
            if (eax_10 - 0x24 != ebx_1)
                int64_t xmm1_5 = *(eax_10 - 0x18)
                int32_t esi_9 = *(eax_10 - 0x10)
                int32_t xmm2_5 = *(eax_10 - 0xc)
                int32_t xmm3_5 = *(eax_10 - 8)
                int32_t edi_7 = *(eax_10 - 0x24)
                int32_t edx_10 = *(eax_10 - 0x20)
                int32_t ecx_9 = *(eax_10 - 4)
                *var_1c = *ebx_1
                var_1c[1] = ebx_1[1]
                *(var_1c + 0xc) = *(ebx_1 + 0xc)
                var_1c[5] = ebx_1[5]
                var_1c[6] = ebx_1[6]
                var_1c[7] = ebx_1[7]
                var_1c[8] = ebx_1[8]
                ebp_1 = var_14_1
                *ebx_1 = edi_7
                ebx_1[1] = edx_10
                *(ebx_1 + 0xc) = xmm1_5
                ebx_1[5] = esi_9
                ebx_1[6] = xmm2_5
                ebx_1[7] = xmm3_5
                ebx_1[8] = ecx_9
            
            int64_t xmm1_6 = *(ebx_1 + 0xc)
            int32_t esi_10 = ebx_1[5]
            int32_t xmm2_6 = ebx_1[6]
            int32_t xmm3_6 = ebx_1[7]
            int32_t edi_8 = *ebx_1
            int32_t edx_11 = ebx_1[1]
            void* eax_60 = var_20 - 0x24
            int32_t ecx_10 = ebx_1[8]
            var_20 = eax_60
            *ebx_1 = *eax_60
            ebx_1[1] = var_20[1]
            *(ebx_1 + 0xc) = *(var_20 + 0xc)
            ebx_1[5] = var_20[5]
            ebx_1[6] = var_20[6]
            ebx_1[7] = var_20[7]
            ebx_1[8] = var_20[8]
            var_20[1] = edx_11
            edx_4 = var_20
            *var_20 = edi_8
            eax_10 = var_1c
            edi = arg4
            *(edx_4 + 0xc) = xmm1_6
            edx_4[5] = esi_10
            edx_4[6] = xmm2_6
            edx_4[7] = xmm3_6
            edx_4[8] = ecx_10
        else
            int32_t* eax_32 = var_20
            
            if (ebp_1 == arg4)
                *arg3 = ebx_1
                arg3[1] = eax_32
                return arg3
            
            if (eax_32 != ebp_1)
                int64_t xmm1_3 = *(ebx_1 + 0xc)
                int32_t esi_7 = ebx_1[5]
                int32_t xmm2_3 = ebx_1[6]
                int32_t xmm3_3 = ebx_1[7]
                int32_t edi_5 = *ebx_1
                int32_t edx_8 = ebx_1[1]
                int32_t ecx_7 = ebx_1[8]
                *ebx_1 = *eax_32
                ebx_1[1] = var_20[1]
                *(ebx_1 + 0xc) = *(var_20 + 0xc)
                ebx_1[5] = var_20[5]
                ebx_1[6] = var_20[6]
                ebx_1[7] = var_20[7]
                ebx_1[8] = var_20[8]
                eax_32 = var_20
                *eax_32 = edi_5
                eax_32[1] = edx_8
                *(eax_32 + 0xc) = xmm1_3
                eax_32[5] = esi_7
                eax_32[6] = xmm2_3
                eax_32[7] = xmm3_3
                eax_32[8] = ecx_7
            
            int64_t xmm1_4 = *(ebx_1 + 0xc)
            int32_t esi_8 = ebx_1[5]
            int32_t xmm2_4 = ebx_1[6]
            int32_t xmm3_4 = ebx_1[7]
            int32_t edi_6 = *ebx_1
            int32_t edx_9 = ebx_1[1]
            int32_t ecx_8 = ebx_1[8]
            var_18 = &var_18[9]
            var_14_1 = &var_14_1[9]
            var_20 = &eax_32[9]
            *ebx_1 = *ebp_1
            ebx_1[1] = ebp_1[1]
            *(ebx_1 + 0xc) = *(ebp_1 + 0xc)
            ebx_1[5] = ebp_1[5]
            ebx_1[6] = ebp_1[6]
            ebx_1[7] = ebp_1[7]
            ebx_1[8] = ebp_1[8]
            ebx_1 = var_18
            eax_10 = var_1c
            *ebp_1 = edi_6
            edi = arg4
            ebp_1[1] = edx_9
            edx_4 = var_20
            *(ebp_1 + 0xc) = xmm1_4
            ebp_1[5] = esi_8
            ebp_1[6] = xmm2_4
            ebp_1[7] = xmm3_4
            ebp_1[8] = ecx_8
            ebp_1 = var_14_1
