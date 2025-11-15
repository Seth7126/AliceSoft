// 函数: sub_6ad240
// 地址: 0x6ad240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = 0xffffffff
void* eax = *(arg3 + 0x29c)

if (eax != 0 && eax u< 0xffffffff)
    ecx = eax

void* ebx = arg4

if (ecx u< ebx + 1)
    if (*(arg3 + 0x9c) == 0)
        *(arg3 + 0x9c) = "insufficient memory"
    
    return 0xfffffffc

int32_t* ebp = arg5
void* ecx_1 = ecx + 0xffffffff - ebx

if (ecx_1 u< *ebp)
    *ebp = ecx_1

void* eax_3
int32_t ecx_3
eax_3, ecx_3 = sub_6acfe0(arg3, *(arg3 + 0x11c))

if (eax_3 != 0)
    if (eax_3 == 1)
        return 0xfffffff9
    
    return eax_3

int32_t edx_1 = *(arg3 + 0x11c)
void* eax_5 = arg2 - ebx
int32_t* var_20 = ebp
arg4 = eax_5
int32_t* eax_7 = *(arg3 + 0x2b8) + ebx
int32_t esi_1 = sub_6ad100(eax_7, edx_1, arg3, ecx_3, eax_7, &arg4, eax_3)

if (esi_1 == 1)
    if (sub_6a0650(arg3 + 0x84) != 0)
        sub_6a4ab0(arg3, 1)
        *(arg3 + 0x80) = 0
        return 0xfffffff9
    
    int32_t eax_10 = *ebp
    void* eax_12 = eax_10 + 1 + ebx
    char* ebp_1 = sub_6a7b70(arg3, eax_12)
    
    if (ebp_1 == 0)
        esi_1 = 0xfffffffc
        
        if (*(arg3 + 0x9c) == 0)
            *(arg3 + 0x9c) = "insufficient memory"
            *(arg3 + 0x80) = 0
            return 0xfffffffc
    else
        int32_t* var_20_1 = arg5
        int32_t* ecx_9 = *(arg3 + 0x2b8) + ebx
        esi_1 = sub_6ad100(&arg4, *(arg3 + 0x11c), arg3, ecx_9, ecx_9, &arg4, ebx + ebp_1)
        
        if (esi_1 == 1)
            void* eax_17 = *arg5
            
            if (eax_10 != eax_17)
                esi_1 = 0xfffffff9
            else
                *(eax_17 + ebp_1 + ebx) = 0
                
                if (ebx != 0)
                    sub_700660(ebp_1, *(arg3 + 0x2b8), ebx)
                
                char* eax_18 = *(arg3 + 0x2b8)
                *(arg3 + 0x2b8) = ebp_1
                ebp_1 = eax_18
                *(arg3 + 0x2bc) = eax_12
        else if (esi_1 == 0)
            esi_1 = 0xfffffff9
        
        sub_6a7cf0(arg3, ebp_1)
        
        if (esi_1 == 1 && eax_5 != arg4)
            sub_6a77d0(arg3, "extra compressed data")
            *(arg3 + 0x80) = 0
            return esi_1
else if (esi_1 == 0)
    esi_1 = 0xfffffff9

*(arg3 + 0x80) = 0
return esi_1
