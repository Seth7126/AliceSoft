// 函数: sub_5515c0
// 地址: 0x5515c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg4
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((edi - arg2) s>> 5)
int32_t* eax_5 = edi - 0x20
int32_t* i = &arg2[((eax_3 - edx) s>> 1) * 8]
sub_552190(eax_5, i, arg2, eax_5, arg5)
int32_t* ebp = &i[8]
int32_t* var_14 = ebp

for (; arg2 u< i; i = &i[-8])
    int32_t ecx_1 = i[-8]
    int32_t edx_2 = *i
    
    if (ecx_1 s< edx_2)
        break
    
    if (edx_2 s< ecx_1)
        break

if (ebp u< edi)
    int32_t ecx_2 = *i
    
    do
        int32_t eax_6 = *ebp
        
        if (eax_6 s< ecx_2)
            break
        
        if (ecx_2 s< eax_6)
            break
        
        ebp = &ebp[8]
    while (ebp u< edi)
    
    var_14 = ebp

int32_t* i_1 = i
int32_t* ebx_1 = ebp
int32_t* i_3 = i_1

while (true)
    int32_t* var_10_1 = ebx_1
    
    while (true)
        if (ebx_1 u< edi)
            void* ecx_3 = &ebp[-5]
            
            do
                int32_t edx_3 = *i
                int32_t eax_7 = *ebx_1
                
                if (edx_3 s>= eax_7)
                    if (eax_7 s< edx_3)
                        break
                    
                    int32_t* eax_8 = ebp
                    ecx_3 += 0x20
                    ebp = &ebp[8]
                    var_14 = ebp
                    
                    if (eax_8 != ebx_1)
                        int32_t edi_1 = *(ecx_3 - 0xc)
                        int32_t edx_4 = *(ecx_3 - 8)
                        int128_t xmm1_1 = *ecx_3
                        int32_t ecx_4 = *(ecx_3 + 0x10)
                        *(ecx_3 - 0xc) = *ebx_1
                        *(ecx_3 - 8) = ebx_1[1]
                        *ecx_3 = *(ebx_1 + 0xc)
                        *(ecx_3 + 0x10) = ebx_1[7]
                        ebp = var_14
                        *ebx_1 = edi_1
                        edi = arg4
                        ebx_1[1] = edx_4
                        *(ebx_1 + 0xc) = xmm1_1
                        ebx_1[7] = ecx_4
                
                ebx_1 = &ebx_1[8]
            while (ebx_1 u< edi)
            
            i_1 = i_3
            var_10_1 = ebx_1
        
        bool cond:0_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* ebx_2 = &i[3]
            void* ebp_3 = &i_1[-5]
            int32_t* ecx_8
            
            do
                int32_t ecx_6 = *(ebp_3 - 0xc)
                int32_t edx_5 = *i
                
                if (ecx_6 s>= edx_5)
                    if (edx_5 s< ecx_6)
                        ecx_8 = arg2
                        break
                    
                    i -= 0x20
                    ebx_2 -= 0x20
                    
                    if (i != ebp_3 - 0xc)
                        int32_t edi_2 = *i
                        int32_t edx_6 = *(ebx_2 - 8)
                        int128_t xmm1_2 = *ebx_2
                        int32_t ecx_7 = *(ebx_2 + 0x10)
                        *i = *(ebp_3 - 0xc)
                        *(ebx_2 - 8) = *(ebp_3 - 8)
                        *ebx_2 = *ebp_3
                        *(ebx_2 + 0x10) = *(ebp_3 + 0x10)
                        *(ebp_3 - 0xc) = edi_2
                        *(ebp_3 - 8) = edx_6
                        *ebp_3 = xmm1_2
                        *(ebp_3 + 0x10) = ecx_7
                    
                    i_1 = i_3
                
                ecx_8 = arg2
                i_1 -= 0x20
                ebp_3 -= 0x20
                i_3 = i_1
            while (ecx_8 u< i_1)
            
            ebx_1 = var_10_1
            cond:0_1 = i_1 != ecx_8
            ebp = var_14
            edi = arg4
        
        if (cond:0_1)
            i_3 = i_1 - 0x20
            
            if (ebx_1 != edi)
                int32_t edi_7 = *ebx_1
                int32_t edx_11 = ebx_1[1]
                int128_t xmm1_7 = *(ebx_1 + 0xc)
                int32_t ecx_13 = ebx_1[7]
                *ebx_1 = *(i_1 - 0x20)
                ebx_1[1] = i_3[1]
                *(ebx_1 + 0xc) = *(i_3 + 0xc)
                ebx_1[7] = i_3[7]
                ebx_1 = &ebx_1[8]
                i_1 = i_3
                *i_1 = edi_7
                edi = arg4
                i_1[1] = edx_11
                *(i_1 + 0xc) = xmm1_7
                i_1[7] = ecx_13
                break
            
            i -= 0x20
            
            if (i_1 - 0x20 != i)
                int32_t edi_5 = *(i_1 - 0x20)
                int32_t edx_9 = *(i_1 - 0x1c)
                int128_t xmm1_5 = *(i_1 - 0x14)
                int32_t ecx_11 = *(i_1 - 4)
                *i_3 = *i
                i_3[1] = i[1]
                *(i_3 + 0xc) = *(i + 0xc)
                i_3[7] = i[7]
                ebx_1 = var_10_1
                *i = edi_5
                i[1] = edx_9
                *(i + 0xc) = xmm1_5
                i[7] = ecx_11
            
            int32_t eax_28 = ebp[-8]
            ebp -= 0x20
            int32_t edi_6 = *i
            int32_t edx_10 = i[1]
            int128_t xmm1_6 = *(i + 0xc)
            int32_t ecx_12 = i[7]
            *i = eax_28
            i[1] = ebp[1]
            var_14 = ebp
            *(i + 0xc) = *(ebp + 0xc)
            i[7] = ebp[7]
            i_1 = i_3
            *ebp = edi_6
            edi = arg4
            ebp[1] = edx_10
            *(ebp + 0xc) = xmm1_6
            ebp[7] = ecx_12
        else
            if (ebx_1 == edi)
                *arg3 = i
                arg3[1] = ebp
                return arg3
            
            if (ebp != ebx_1)
                int32_t edi_3 = *i
                int32_t edx_7 = i[1]
                int128_t xmm1_3 = *(i + 0xc)
                int32_t ecx_9 = i[7]
                *i = *ebp
                i[1] = ebp[1]
                *(i + 0xc) = *(ebp + 0xc)
                i[7] = ebp[7]
                *ebp = edi_3
                ebp[1] = edx_7
                *(ebp + 0xc) = xmm1_3
                ebp[7] = ecx_9
            
            var_14 = &ebp[8]
            int32_t* ebp_5 = ebx_1
            int32_t* i_2 = i
            i = &i[8]
            var_10_1 = &var_10_1[8]
            int32_t edi_4 = *i_2
            int32_t edx_8 = i_2[1]
            int128_t xmm1_4 = *(i_2 + 0xc)
            int32_t ecx_10 = i_2[7]
            *i_2 = *ebp_5
            i_2[1] = ebp_5[1]
            *(i_2 + 0xc) = *(ebp_5 + 0xc)
            i_2[7] = ebp_5[7]
            ebx_1 = var_10_1
            i_1 = i_3
            *ebp_5 = edi_4
            edi = arg4
            ebp_5[1] = edx_8
            *(ebp_5 + 0xc) = xmm1_4
            ebp_5[7] = ecx_10
            ebp = var_14
