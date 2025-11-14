// 函数: sub_69ceb0
// 地址: 0x69ceb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1
char* ebx = arg2

if (ebx u<= ecx)
    return 

int32_t i_2 = arg3
int32_t edx_1 = ecx + i_2

do
    int32_t esi_1 = edx_1
    int32_t edi_1 = ecx
    
    if (esi_1 u<= ebx)
        do
            if (arg4(esi_1, edi_1) s> 0)
                edi_1 = esi_1
            
            i_2 = arg3
            esi_1 += i_2
        while (esi_1 u<= ebx)
        
        ecx = arg1
    
    int32_t i_1 = i_2
    char* edx_2 = ebx
    
    if (edi_1 != ebx && i_2 != 0)
        void* edi_2 = edi_1 - ebx
        int32_t i
        
        do
            i_2.b = *edx_2
            edx_2 = &edx_2[1]
            ecx.b = *(edi_2 + edx_2 - 1)
            *(edi_2 + edx_2 - 1) = i_2.b
            edx_2[0xffffffff] = ecx.b
            i = i_1
            i_1 -= 1
        while (i != 1)
        i_2 = arg3
        ecx = arg1
    
    ebx -= i_2
    edx_1 = ecx + i_2
while (ebx u> ecx)
