// 函数: sub_643050
// 地址: 0x643050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg4
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((edi - arg2) s>> 2)
int32_t** var_24 = arg3
int32_t* i = &arg2[(eax_3 - edx) s>> 1]
sub_6433f0(edi - 4, i, arg2, edi - 4)
int32_t* ebp = &i[1]

for (; arg2 u< i; i = &i[-1])
    int32_t edx_2 = *(*(i[-1] + 0x60) + 8)
    int32_t eax_11 = *(*(*i + 0x60) + 8)
    
    if (edx_2 s> eax_11)
        break
    
    if (eax_11 s> edx_2)
        break

if (ebp u< edi)
    int32_t ecx_1 = *(*(*i + 0x60) + 8)
    
    do
        int32_t eax_16 = *(*(*ebp + 0x60) + 8)
        
        if (eax_16 s> ecx_1)
            break
        
        if (ecx_1 s> eax_16)
            break
        
        ebp = &ebp[1]
    while (ebp u< edi)

int32_t* i_1 = i
int32_t* ecx_2 = ebp
int32_t* i_3 = i_1

while (true)
    int32_t* var_c_1 = ecx_2
    
    while (true)
        if (ecx_2 u< edi)
            do
                void* edi_1 = *ecx_2
                int32_t edx_3 = *(*(*i + 0x60) + 8)
                int32_t eax_20 = *(*(edi_1 + 0x60) + 8)
                
                if (edx_3 s<= eax_20)
                    if (eax_20 s> edx_3)
                        break
                    
                    int32_t* eax_21 = ebp
                    ebp = &ebp[1]
                    
                    if (eax_21 != ecx_2)
                        int32_t eax_22 = ebp[-1]
                        ebp[-1] = edi_1
                        *ecx_2 = eax_22
                
                ecx_2 = &ecx_2[1]
            while (ecx_2 u< arg4)
            
            i_1 = i_3
            var_c_1 = ecx_2
        
        bool cond:0_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* edx_4 = &i_1[-1]
            
            do
                int32_t edi_2 = *(*(*edx_4 + 0x60) + 8)
                int32_t eax_28 = *(*(*i + 0x60) + 8)
                
                if (edi_2 s<= eax_28)
                    if (eax_28 s> edi_2)
                        break
                    
                    i -= 4
                    
                    if (i != edx_4)
                        int32_t eax_29 = *i
                        *i = *edx_4
                        *edx_4 = eax_29
                
                i_1 -= 4
                edx_4 -= 4
            while (arg2 u< i_1)
            
            cond:0_1 = i_1 != arg2
            ecx_2 = var_c_1
            i_3 = i_1
        
        if (not(cond:0_1))
            if (ecx_2 == arg4)
                arg3[1] = ebp
                *arg3 = i
                return arg3
            
            if (ebp != ecx_2)
                int32_t eax_31 = *i
                *i = *ebp
                *ebp = eax_31
            
            int32_t* edi_4 = ecx_2
            int32_t* i_2 = i
            ebp = &ebp[1]
            i = &i[1]
            ecx_2 = &ecx_2[1]
            int32_t eax_32 = *i_2
            *i_2 = *edi_4
            i_1 = i_3
            *edi_4 = eax_32
            edi = arg4
            break
        
        edi = arg4
        i_1 -= 4
        i_3 = i_1
        
        if (ecx_2 != edi)
            int32_t eax_35 = *ecx_2
            *ecx_2 = *i_1
            ecx_2 = &ecx_2[1]
            *i_1 = eax_35
            break
        
        i -= 4
        
        if (i_1 != i)
            int32_t eax_33 = *i_1
            *i_1 = *i
            *i = eax_33
        
        int32_t eax_34 = *i
        ebp -= 4
        *i = *ebp
        *ebp = eax_34
