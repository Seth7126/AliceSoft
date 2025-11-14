// 函数: sub_551c20
// 地址: 0x551c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg4
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((edi - arg2) s/ 0x14)
int32_t* eax_8 = edi - 0x14
int32_t* i = &arg2[((eax_4 - edx_2) s>> 1) * 5]
sub_552820(eax_8, i, arg2, eax_8, arg5)
int32_t* ebx = &i[5]
int32_t* var_1c = ebx
void* ecx_1

for (; arg2 u< i; i = &i[-5])
    ecx_1 = i[-5]
    int32_t edx_4 = *i
    
    if (ecx_1 s< edx_4)
        break
    
    if (edx_4 s< ecx_1)
        break

if (ebx u< edi)
    ecx_1 = *i
    
    do
        int32_t eax_9 = *ebx
        
        if (eax_9 s< ecx_1)
            break
        
        if (ecx_1 s< eax_9)
            break
        
        ebx = &ebx[5]
    while (ebx u< edi)
    
    var_1c = ebx

int32_t* i_1 = i
int32_t* ebp_1 = ebx
int32_t* i_3 = i_1

while (true)
    int32_t* var_14_1 = ebp_1
    
    while (true)
        if (ebp_1 u< edi)
            ecx_1 = &ebx[-2]
            
            do
                int32_t edx_5 = *i
                int32_t eax_10 = *ebp_1
                
                if (edx_5 s>= eax_10)
                    if (eax_10 s< edx_5)
                        break
                    
                    int32_t* eax_11 = ebx
                    ecx_1 += 0x14
                    ebx = &ebx[5]
                    var_1c = ebx
                    
                    if (eax_11 != ebp_1)
                        int32_t ebx_1 = *(ecx_1 - 0xc)
                        int32_t edx_6 = *(ecx_1 - 8)
                        int32_t edi_1 = *ecx_1
                        int32_t ecx_2 = *(ecx_1 + 4)
                        *(ecx_1 - 0xc) = *ebp_1
                        *(ecx_1 - 8) = ebp_1[1]
                        *ecx_1 = ebp_1[3]
                        *(ecx_1 + 4) = ebp_1[4]
                        *ebp_1 = ebx_1
                        ebx = var_1c
                        ebp_1[1] = edx_6
                        ebp_1[3] = edi_1
                        edi = arg4
                        ebp_1[4] = ecx_2
                
                ebp_1 = &ebp_1[5]
            while (ebp_1 u< edi)
            
            i_1 = i_3
            var_14_1 = ebp_1
        
        int32_t* ebx_5 = arg2
        bool cond:0_1 = i_1 != ebx_5
        
        if (i_1 u> ebx_5)
            void* ebp_2 = &i_1[-2]
            
            do
                int32_t ecx_4 = *(ebp_2 - 0xc)
                int32_t edx_7 = *i
                
                if (ecx_4 s>= edx_7)
                    if (edx_7 s< ecx_4)
                        break
                    
                    i -= 0x14
                    
                    if (i != ebp_2 - 0xc)
                        int32_t ebx_6 = *i
                        int32_t edi_2 = i[1]
                        int32_t edx_8 = i[3]
                        int32_t ecx_5 = i[4]
                        *i = *(ebp_2 - 0xc)
                        i[1] = *(ebp_2 - 8)
                        i[3] = *ebp_2
                        i[4] = *(ebp_2 + 4)
                        *(ebp_2 - 0xc) = ebx_6
                        ebx_5 = arg2
                        *(ebp_2 - 8) = edi_2
                        *ebp_2 = edx_8
                        *(ebp_2 + 4) = ecx_5
                    
                    i_1 = i_3
                
                i_1 -= 0x14
                ebp_2 -= 0x14
                i_3 = i_1
            while (ebx_5 u< i_1)
            
            ebp_1 = var_14_1
            cond:0_1 = i_1 != ebx_5
            edi = arg4
        
        if (cond:0_1)
            i_3 = i_1 - 0x14
            
            if (ebp_1 != edi)
                int32_t ebx_11 = *ebp_1
                int32_t edi_7 = ebp_1[1]
                int32_t edx_13 = ebp_1[3]
                ecx_1 = ebp_1[4]
                *ebp_1 = *(i_1 - 0x14)
                ebp_1[1] = i_3[1]
                ebp_1[3] = i_3[3]
                ebp_1[4] = i_3[4]
                ebp_1 = &ebp_1[5]
                i_1 = i_3
                *i_1 = ebx_11
                ebx = var_1c
                i_1[1] = edi_7
                edi = arg4
                i_1[3] = edx_13
                i_1[4] = ecx_1
                break
            
            i -= 0x14
            
            if (i_1 - 0x14 != i)
                int32_t ebx_9 = *(i_1 - 0x14)
                int32_t edi_5 = *(i_1 - 0x10)
                int32_t edx_11 = *(i_1 - 8)
                int32_t ecx_7 = *(i_1 - 4)
                *i_3 = *i
                i_3[1] = i[1]
                i_3[3] = i[3]
                i_3[4] = i[4]
                ebp_1 = var_14_1
                *i = ebx_9
                i[1] = edi_5
                i[3] = edx_11
                i[4] = ecx_7
            
            int32_t ebx_10 = *i
            void* eax_45 = var_1c - 0x14
            int32_t edi_6 = i[1]
            int32_t edx_12 = i[3]
            ecx_1 = i[4]
            var_1c = eax_45
            *i = *eax_45
            i[1] = var_1c[1]
            i[3] = var_1c[3]
            i[4] = var_1c[4]
            *var_1c = ebx_10
            ebx = var_1c
            i_1 = i_3
            ebx[1] = edi_6
            edi = arg4
            ebx[3] = edx_12
            ebx[4] = ecx_1
        else
            int32_t* eax_21 = var_1c
            
            if (ebp_1 == edi)
                *arg3 = i
                arg3[1] = eax_21
                return arg3
            
            if (eax_21 != ebp_1)
                int32_t ebx_7 = *i
                int32_t edi_3 = i[1]
                int32_t edx_9 = i[3]
                int32_t ecx_6 = i[4]
                *i = *eax_21
                i[1] = var_1c[1]
                i[3] = var_1c[3]
                i[4] = var_1c[4]
                eax_21 = var_1c
                *eax_21 = ebx_7
                eax_21[1] = edi_3
                eax_21[3] = edx_9
                eax_21[4] = ecx_6
            
            var_1c = &eax_21[5]
            int32_t* i_2 = i
            i = &i[5]
            var_14_1 = &var_14_1[5]
            int32_t ebx_8 = *i_2
            int32_t edi_4 = i_2[1]
            int32_t edx_10 = i_2[3]
            ecx_1 = i_2[4]
            *i_2 = *ebp_1
            i_2[1] = ebp_1[1]
            i_2[3] = ebp_1[3]
            i_2[4] = ebp_1[4]
            int32_t* eax_38 = ebp_1
            ebp_1 = var_14_1
            *eax_38 = ebx_8
            ebx = var_1c
            eax_38[1] = edi_4
            edi = arg4
            eax_38[3] = edx_10
            eax_38[4] = ecx_1
            i_1 = i_3
