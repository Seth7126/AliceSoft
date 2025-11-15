// 函数: sub_6796b0
// 地址: 0x6796b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_3 = arg4
int32_t ebp = arg3 + eax_3

if (ebp u> arg2[1] || eax_3 u> arg2[3] || *arg2 == 0)
    *(*arg1 + 0x14) = 0x17
    eax_3 = (**arg1)(arg1)

int32_t ecx = arg2[6]

if (arg3 u>= ecx)
    eax_3 = arg2[4] + ecx

if (arg3 u< ecx || ebp u> eax_3)
    if (*(arg2 + 0x22) == 0)
        *(*arg1 + 0x14) = 0x47
        eax_3 = (**arg1)(arg1)
    
    if (*(arg2 + 0x21) != 0)
        eax_3 = sub_679590(eax_3, arg2, arg1, 1)
        *(arg2 + 0x21) = 0
    
    if (arg3 u<= arg2[6])
        eax_3 = 0
        
        if (ebp - arg2[4] s>= 0)
            eax_3 = ebp - arg2[4]
        
        arg2[6] = eax_3
    else
        arg2[6] = arg3
    
    sub_679590(eax_3, arg2, arg1, 0)

int32_t edi_1 = arg2[7]

if (edi_1 u>= ebp)
label_6797b5:
    
    if (arg5 != 0)
        *(arg2 + 0x21) = 1
else
    int32_t eax_8 = arg3
    
    if (edi_1 u< eax_8)
        if (arg5 != 0)
            *(*arg1 + 0x14) = 0x17
            (**arg1)(arg1)
            eax_8 = arg3
        
        edi_1 = eax_8
    
    eax_8.b = arg5
    
    if (eax_8.b != 0)
        arg2[7] = ebp
    
    if (arg2[8].b != 0)
        int32_t ebp_1 = ebp - arg2[6]
        int32_t i = edi_1 - arg2[6]
        void* ebx_1 = arg2[2]
        
        for (; i u< ebp_1; i += 1)
            _memset(*(*arg2 + (i << 2)), 0, ebx_1)
        
        goto label_6797b5
    
    if (eax_8.b == 0)
        *(*arg1 + 0x14) = 0x17
        (**arg1)(arg1)
        return *arg2 + ((arg3 - arg2[6]) << 2)
    
    *(arg2 + 0x21) = 1

return *arg2 + ((arg3 - arg2[6]) << 2)
