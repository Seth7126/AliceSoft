// 函数: sub_4d9db0
// 地址: 0x4d9db0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_20 = arg5
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q((arg4 - arg2) s/ 0x84)
void* i = ((eax_4 - edx_2) s>> 1) * 0x84 + arg2
sub_4da080(arg4 - 0x84, i, arg2, arg4 - 0x84)
void** ebp = i + 0x84
int32_t ecx_1

for (; arg2 u< i; i -= 0x84)
    int32_t eax_8 = *(i - 0x54)
    ecx_1 = *(i + 0x30)
    
    if (eax_8 s< ecx_1)
        break
    
    if (ecx_1 s< eax_8)
        break

void* edx_4 = arg4

if (ebp u< edx_4)
    ecx_1 = *(i + 0x30)
    
    do
        int32_t eax_9 = ebp[0xc]
        
        if (eax_9 s< ecx_1)
            break
        
        if (ecx_1 s< eax_9)
            break
        
        ebp = &ebp[0x21]
    while (ebp u< edx_4)

void** edi_1 = ebp
void* i_2 = i

while (true)
    void** var_c_1 = edi_1
    
    while (true)
        if (edi_1 u< edx_4)
            do
                int32_t eax_10 = *(i + 0x30)
                int32_t ecx_3 = edi_1[0xc]
                
                if (eax_10 s>= ecx_3)
                    if (ecx_3 s< eax_10)
                        break
                    
                    void** eax_11 = ebp
                    ebp = &ebp[0x21]
                    
                    if (eax_11 != edi_1)
                        sub_4da700(&ebp[-0x21], edi_1)
                        edx_4 = arg4
                
                edi_1 = &edi_1[0x21]
            while (edi_1 u< edx_4)
            
            var_c_1 = edi_1
        
        bool cond:0_1 = i_2 != arg2
        
        if (i_2 u> arg2)
            do
                int32_t eax_13 = *(i_2 - 0x54)
                int32_t ecx_5 = *(i + 0x30)
                
                if (eax_13 s>= ecx_5)
                    if (ecx_5 s< eax_13)
                        break
                    
                    i -= 0x84
                    
                    if (i != i_2 - 0x84)
                        sub_4da700(i, i_2 - 0x84)
                
                i_2 -= 0x84
            while (arg2 u< i_2)
            
            cond:0_1 = i_2 != arg2
            edi_1 = var_c_1
            edx_4 = arg4
        
        if (cond:0_1)
            i_2 -= 0x84
            
            if (edi_1 != edx_4)
                sub_4da700(edi_1, i_2)
                edx_4 = arg4
                edi_1 = &edi_1[0x21]
                break
            
            i -= 0x84
            
            if (i_2 != i)
                sub_4da700(i_2, i)
            
            ebp -= 0x84
            sub_4da700(i, ebp)
            edx_4 = arg4
        else
            if (edi_1 == edx_4)
                *arg3 = i
                arg3[1] = ebp
                return arg3
            
            if (ebp != edi_1)
                sub_4da700(i, ebp)
            
            void** edx_8 = edi_1
            void** i_1 = i
            edi_1 = &edi_1[0x21]
            ebp = &ebp[0x21]
            i += 0x84
            var_c_1 = edi_1
            sub_4da700(i_1, edx_8)
            edx_4 = arg4
