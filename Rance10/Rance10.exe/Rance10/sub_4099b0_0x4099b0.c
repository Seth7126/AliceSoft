// 函数: sub_4099b0
// 地址: 0x4099b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_2 = arg1
int32_t* ebx = arg2
int32_t eax = arg1[4]

if (eax u< ebx)
    sub_6d0947("invalid string position")
    noreturn

void** ebp = arg4
int32_t edi = ebp[4]

if (edi u< arg5)
    sub_6d0947("invalid string position")
    noreturn

int32_t* ecx = arg3
int32_t* edx_1 = eax - ebx

if (ecx u> edx_1)
    ecx = edx_1

void* edi_1 = edi - arg5
void* edi_2 = arg6
arg3 = ecx

if (edi_2 u> edi_1)
    edi_2 = edi_1

void* eax_1 = eax - ecx

if (not.d(edi_2) u<= eax_1)
    sub_6d0927("string too long")
    noreturn

void* edx_2 = edx_1 - ecx
void* eax_5 = eax_1 + edi_2
void* var_4_1 = edx_2
void* eax_6 = arg1[4]

if (eax_6 u< eax_5)
    if (eax_5 u> 0xfffffffe)
        sub_6d0927("string too long")
        noreturn
    
    ebx = arg2
    
    if (arg1[5] u< eax_5)
        sub_403830(arg1, eax_5, eax_6)
        ecx = arg3
        edx_2 = var_4_1
    else if (eax_5 == 0)
        arg1[4] = 0
        char* eax_7
        
        if (arg1[5] u< 0x10)
            eax_7 = arg1
        else
            eax_7 = *arg1
        
        *eax_7 = 0

if (edi_2 == ecx)
    if (ebp[5] u>= 0x10)
        ebp = *ebp
    
    int32_t* ecx_2
    
    if (arg1[5] u< 0x10)
        ecx_2 = arg1
    else
        ecx_2 = *arg1
    
    if (edi_2 != 0)
        sub_6feca0(ecx_2 + ebx, arg5 + ebp, edi_2)
else if (arg1 != ebp)
    int32_t eax_11 = arg1[5]
    
    if (eax_11 u< 0x10)
        arg3 = arg1
    else
        arg3 = *arg1
        ebp = arg4
    
    if (eax_11 u< 0x10)
        arg2 = arg1
    else
        arg2 = *arg1
    
    if (edx_2 != 0)
        sub_6feca0(arg2 + ebx + edi_2, arg3 + ebx + ecx, edx_2)
    
    if (ebp[5] u>= 0x10)
        ebp = *ebp
    
    int32_t* ecx_3
    
    if (arg1[5] u< 0x10)
        ecx_3 = arg1
    else
        ecx_3 = *arg1
    
    if (edi_2 != 0)
        sub_700660(ecx_3 + ebx, arg5 + ebp, edi_2)
else if (edi_2 u< ecx)
    int32_t eax_22 = arg1[5]
    int32_t* ebp_2
    
    if (eax_22 u< 0x10)
        ebp_2 = arg1
    else
        ebp_2 = *arg1
    
    int32_t* edx_3
    
    if (eax_22 u< 0x10)
        edx_3 = arg1
    else
        edx_3 = *arg1
    
    if (edi_2 != 0)
        sub_6feca0(edx_3 + ebx, arg5 + ebp_2, edi_2)
        ecx = arg3
    
    int32_t eax_26 = arg1[5]
    int32_t* ebp_3
    
    if (eax_26 u< 0x10)
        ebp_3 = arg1
    else
        ebp_3 = *arg1
    
    int32_t* edx_4
    
    if (eax_26 u< 0x10)
        edx_4 = arg1
    else
        edx_4 = *arg1
    
    if (var_4_1 != 0)
        sub_6feca0(edx_4 + ebx + edi_2, ebx + ebp_3 + ecx, var_4_1)
else if (arg5 u> ebx)
    int32_t eax_41 = arg1[5]
    
    if (ebx + ecx u> arg5)
        int32_t* ebp_9
        
        if (eax_41 u< 0x10)
            ebp_9 = arg1
        else
            ebp_9 = *arg1
        
        int32_t* edx_8
        
        if (eax_41 u< 0x10)
            edx_8 = arg1
        else
            edx_8 = *arg1
        
        if (ecx != 0)
            sub_6feca0(edx_8 + ebx, arg5 + ebp_9, ecx)
            ecx = arg3
        
        int32_t eax_54 = arg1[5]
        int32_t* ebp_10
        
        if (eax_54 u< 0x10)
            ebp_10 = arg1
        else
            ebp_10 = *arg1
        
        int32_t* edx_9
        
        if (eax_54 u< 0x10)
            edx_9 = arg1
        else
            edx_9 = *arg1
        
        if (var_4_1 != 0)
            sub_6feca0(edx_9 + ebx + edi_2, ebx + ebp_10 + ecx, var_4_1)
        
        int32_t eax_60 = arg1[5]
        int32_t* ebp_11
        
        if (eax_60 u< 0x10)
            ebp_11 = arg1
        else
            ebp_11 = *arg1
        
        int32_t* edx_10
        
        if (eax_60 u< 0x10)
            edx_10 = arg1
        else
            edx_10 = *arg1
        
        if (edi_2 != arg3)
            sub_6feca0(edx_10 + ebx + arg3, arg5 + ebp_11 + edi_2, edi_2 - arg3)
    else
        if (eax_41 u< 0x10)
            arg2 = arg1
        else
            arg2 = *arg1
        
        int32_t* ebp_8
        
        if (eax_41 u< 0x10)
            ebp_8 = arg1
        else
            ebp_8 = *arg1
        
        if (edx_2 != 0)
            sub_6feca0(ebx + ebp_8 + edi_2, arg2 + ebx + ecx, edx_2)
            ecx = arg3
        
        int32_t edx_6 = arg1[5]
        int32_t* eax_47
        
        if (edx_6 u< 0x10)
            eax_47 = arg1
        else
            eax_47 = *arg1
        
        int32_t* edx_7
        
        if (edx_6 u< 0x10)
            edx_7 = arg1
        else
            edx_7 = *arg1
        
        if (edi_2 != 0)
            sub_6feca0(edx_7 + ebx, eax_47 - ecx + arg5 + edi_2, edi_2)
else
    int32_t eax_31 = arg1[5]
    
    if (eax_31 u< 0x10)
        arg3 = arg1
    else
        arg3 = *arg1
    
    int32_t* ebp_6
    
    if (eax_31 u< 0x10)
        ebp_6 = arg1
    else
        ebp_6 = *arg1
    
    if (edx_2 != 0)
        sub_6feca0(ebx + ebp_6 + edi_2, arg3 + ebx + ecx, edx_2)
    
    int32_t eax_37 = arg1[5]
    int32_t* edx_5
    
    if (eax_37 u< 0x10)
        edx_5 = arg1
    else
        edx_5 = *arg1
    
    int32_t* ecx_4
    
    if (eax_37 u< 0x10)
        ecx_4 = arg1
    else
        ecx_4 = *arg1
    
    if (edi_2 != 0)
        sub_6feca0(ecx_4 + ebx, arg5 + edx_5, edi_2)

bool cond:3 = arg1[5] u< 0x10
arg1[4] = eax_5

if (not(cond:3))
    *(*arg1 + eax_5) = 0
    return arg1

char* eax_69 = arg1
*(eax_69 + eax_5) = 0
return eax_69
