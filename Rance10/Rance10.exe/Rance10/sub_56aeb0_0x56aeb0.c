// 函数: sub_56aeb0
// 地址: 0x56aeb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg4
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((edi - arg2) s>> 2)
int32_t** var_24 = arg3
int32_t* i = &arg2[(eax_3 - edx) s>> 1]
int32_t* eax_6 = edi - 4
sub_56b140(eax_6, i, arg2, eax_6)
int32_t* ebp = &i[1]

for (; arg2 u< i; i = &i[-1])
    int32_t ecx_1 = i[-1]
    int32_t edx_2 = *i
    
    if (ecx_1 s< edx_2)
        break
    
    if (edx_2 s< ecx_1)
        break

if (ebp u< edi)
    int32_t ecx_2 = *i
    
    do
        int32_t eax_7 = *ebp
        
        if (eax_7 s< ecx_2)
            break
        
        if (ecx_2 s< eax_7)
            break
        
        ebp = &ebp[1]
    while (ebp u< edi)

int32_t* i_1 = i
int32_t* eax_8 = ebp
int32_t* i_3 = i_1

while (true)
    int32_t* var_c_1 = eax_8
    
    while (true)
        if (eax_8 u< edi)
            do
                int32_t ecx_3 = *i
                int32_t edx_3 = *eax_8
                
                if (ecx_3 s>= edx_3)
                    if (edx_3 s< ecx_3)
                        break
                    
                    int32_t* ecx_4 = ebp
                    ebp = &ebp[1]
                    
                    if (ecx_4 != eax_8)
                        int32_t ecx_5 = ebp[-1]
                        ebp[-1] = edx_3
                        *eax_8 = ecx_5
                
                eax_8 = &eax_8[1]
            while (eax_8 u< edi)
            
            var_c_1 = eax_8
        
        bool cond:0_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* edx_4 = &i_1[-1]
            
            do
                int32_t edi_1 = *edx_4
                int32_t ecx_7 = *i
                
                if (edi_1 s>= ecx_7)
                    if (ecx_7 s< edi_1)
                        break
                    
                    i -= 4
                    
                    if (i != edx_4)
                        int32_t ecx_8 = *i
                        *i = edi_1
                        *edx_4 = ecx_8
                
                i_1 -= 4
                edx_4 -= 4
            while (arg2 u< i_1)
            
            cond:0_1 = i_1 != arg2
            eax_8 = var_c_1
            edi = arg4
            i_3 = i_1
        
        if (not(cond:0_1))
            if (eax_8 == edi)
                arg3[1] = ebp
                *arg3 = i
                return arg3
            
            if (ebp != eax_8)
                int32_t edx_5 = *i
                *i = *ebp
                *ebp = edx_5
            
            int32_t* edi_2 = eax_8
            int32_t* i_2 = i
            ebp = &ebp[1]
            i = &i[1]
            eax_8 = &eax_8[1]
            int32_t edx_6 = *i_2
            *i_2 = *edi_2
            i_1 = i_3
            *edi_2 = edx_6
            edi = arg4
            break
        
        i_1 -= 4
        i_3 = i_1
        
        if (eax_8 != edi)
            int32_t edx_9 = *eax_8
            *eax_8 = *i_1
            eax_8 = &eax_8[1]
            *i_1 = edx_9
            break
        
        i -= 4
        
        if (i_1 != i)
            int32_t edx_7 = *i_1
            *i_1 = *i
            *i = edx_7
        
        int32_t edx_8 = *i
        ebp -= 4
        *i = *ebp
        *ebp = edx_8
