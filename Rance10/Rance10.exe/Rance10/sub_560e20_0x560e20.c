// 函数: sub_560e20
// 地址: 0x560e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
int32_t edx = arg1[1]
int32_t ecx

if (edi u< edx)
    ecx = *arg1

struct partsengine::CTextDecoration::VTable** ecx_6

if (edi u>= edx || ecx u> edi)
    int32_t ebx_3 = arg1[2]
    
    if (edx == ebx_3 && (ebx_3 - edx) s>> 6 u< 1)
        int32_t ecx_3 = *arg1
        int32_t edx_5 = (edx - ecx_3) s>> 6
        
        if (0x3ffffff - edx_5 u< 1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_6 = edx_5 + 1
        int32_t ebx_5 = (ebx_3 - ecx_3) s>> 6
        int32_t ecx_4 = 0
        uint32_t eax_11 = ebx_5 u>> 1
        
        if (0x3ffffff - eax_11 u>= ebx_5)
            ecx_4 = eax_11 + ebx_5
        
        if (ecx_4 u>= edx_6)
            edx_6 = ecx_4
        
        sub_560f60(arg1, edx_6)
    
    ecx_6 = arg1[1]
    
    if (ecx_6 != 0)
        goto label_560ee8
else
    int32_t ebx = arg1[2]
    
    if (edx == ebx && (ebx - edx) s>> 6 u< 1)
        int32_t edx_2 = (edx - ecx) s>> 6
        
        if (0x3ffffff - edx_2 u< 1)
            sub_6d0927("vector<T> too long")
            noreturn
        
        int32_t edx_3 = edx_2 + 1
        int32_t ebx_2 = (ebx - ecx) s>> 6
        int32_t ecx_1 = 0
        uint32_t eax_5 = ebx_2 u>> 1
        
        if (0x3ffffff - eax_5 u>= ebx_2)
            ecx_1 = eax_5 + ebx_2
        
        if (ecx_1 u>= edx_3)
            edx_3 = ecx_1
        
        sub_560f60(arg1, edx_3)
    
    ecx_6 = arg1[1]
    
    if (ecx_6 != 0)
        edi = ((edi - ecx) & 0xffffffc0) + *arg1
    label_560ee8:
        *ecx_6 = &partsengine::CTextDecoration::`vftable'
        ecx_6[1] = &textsurface::CTextSurfaceProperty::`vftable'
        ecx_6[2] = *(edi + 8)
        ecx_6[3] = *(edi + 0xc)
        *(ecx_6 + 0x10) = *(edi + 0x10)
        ecx_6[8] = *(edi + 0x20)
        ecx_6[9] = *(edi + 0x24)
        *(ecx_6 + 0x28) = *(edi + 0x28)
        ecx_6[0xe] = *(edi + 0x38)
        ecx_6[0xf] = *(edi + 0x3c)
arg1[1] += 0x40
