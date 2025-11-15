// 函数: sub_5dbf60
// 地址: 0x5dbf60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebx_2 = arg1[1]

if (arg2 u< __saved_ebx_2)
    void* eax = *arg1
    
    if (eax u<= arg2)
        if (__saved_ebx_2 == arg1[2])
            int32_t __saved_ebx_3 = __saved_ebx_2
            sub_5dc010(arg1)
        
        struct sealengine::CSphereVolume::VTable** edi_2 = arg1[1]
        
        if (edi_2 != 0)
            int32_t ecx_1 = *arg1
            int32_t edx_2 = (arg2 - eax) s/ 0x14 * 5
            *edi_2 = &sealengine::CSphereVolume::`vftable'
            *(edi_2 + 4) = *(ecx_1 + (edx_2 << 2) + 4)
            edi_2[3] = *(ecx_1 + (edx_2 << 2) + 0xc)
            edi_2[4] = *(ecx_1 + (edx_2 << 2) + 0x10)
        
        arg1[1] += 0x14
        return 

if (__saved_ebx_2 == arg1[2])
    int32_t __saved_ebx_1 = __saved_ebx_2
    sub_5dc010(arg1)

struct sealengine::CSphereVolume::VTable** ecx_3 = arg1[1]

if (ecx_3 != 0)
    *ecx_3 = &sealengine::CSphereVolume::`vftable'
    *(ecx_3 + 4) = *(arg2 + 4)
    ecx_3[3] = *(arg2 + 0xc)
    ecx_3[4] = *(arg2 + 0x10)

arg1[1] += 0x14
