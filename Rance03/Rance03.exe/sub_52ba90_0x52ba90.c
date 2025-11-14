// 函数: sub_52ba90
// 地址: 0x52ba90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg4
int32_t var_24 = arg5
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q((edi - arg2) s>> 2)
int32_t* i = &arg2[(eax_3 - edx) s>> 1]
int32_t* eax_6 = edi - 4
sub_52bc10(eax_6, i, arg2, eax_6)
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
int32_t* ebx_2 = ebp
int32_t* i_3 = i_1

while (true)
    int32_t* var_c_1 = ebx_2
    
    while (true)
        if (ebx_2 u< edi)
            do
                int32_t eax_8 = *i
                int32_t ecx_3 = *ebx_2
                
                if (eax_8 s>= ecx_3)
                    if (ecx_3 s< eax_8)
                        break
                    
                    int32_t* eax_9 = ebp
                    ebp = &ebp[1]
                    
                    if (eax_9 != ebx_2)
                        int32_t eax_10 = ebp[-1]
                        ebp[-1] = ecx_3
                        *ebx_2 = eax_10
                
                ebx_2 = &ebx_2[1]
            while (ebx_2 u< edi)
            
            var_c_1 = ebx_2
        
        bool cond:0_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* ecx_4 = &i_1[-1]
            
            do
                int32_t edi_1 = *ecx_4
                int32_t eax_12 = *i
                
                if (edi_1 s>= eax_12)
                    if (eax_12 s< edi_1)
                        break
                    
                    i -= 4
                    
                    if (i != ecx_4)
                        int32_t eax_13 = *i
                        *i = edi_1
                        *ecx_4 = eax_13
                
                i_1 -= 4
                ecx_4 -= 4
            while (arg2 u< i_1)
            
            cond:0_1 = i_1 != arg2
            ebx_2 = var_c_1
            edi = arg4
            i_3 = i_1
        
        if (not(cond:0_1))
            if (ebx_2 == edi)
                *arg3 = i
                arg3[1] = ebp
                return arg3
            
            if (ebp != ebx_2)
                int32_t ecx_5 = *i
                *i = *ebp
                *ebp = ecx_5
            
            int32_t* edi_2 = ebx_2
            int32_t* i_2 = i
            ebp = &ebp[1]
            i = &i[1]
            ebx_2 = &ebx_2[1]
            int32_t ecx_6 = *i_2
            *i_2 = *edi_2
            i_1 = i_3
            *edi_2 = ecx_6
            edi = arg4
            break
        
        i_1 -= 4
        i_3 = i_1
        
        if (ebx_2 != edi)
            int32_t ecx_9 = *ebx_2
            *ebx_2 = *i_1
            ebx_2 = &ebx_2[1]
            *i_1 = ecx_9
            break
        
        i -= 4
        
        if (i_1 != i)
            int32_t ecx_7 = *i_1
            *i_1 = *i
            *i = ecx_7
        
        int32_t ecx_8 = *i
        ebp -= 4
        *i = *ebp
        *ebp = ecx_8
