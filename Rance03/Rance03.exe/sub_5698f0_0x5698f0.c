// 函数: sub_5698f0
// 地址: 0x5698f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx = arg1[1]
void* eax

if (arg2 u< ecx)
    eax = *arg1

if (arg2 u>= ecx || eax u> arg2)
    if (ecx == arg1[2])
        int32_t var_c_2 = ecx
        sub_5699c0(arg1)
    
    int32_t* ecx_5 = arg1[1]
    
    if (ecx_5 != 0)
        *ecx_5 = *arg2
        ecx_5[1] = arg2[1]
        ecx_5[2] = &sealengine::CEmitterRotate::`vftable'
        ecx_5[3] = arg2[3]
        ecx_5[4] = arg2[4]
        ecx_5[5] = arg2[5]
        ecx_5[6] = arg2[6]
else
    if (ecx == arg1[2])
        int32_t var_c_1 = ecx
        sub_5699c0(arg1)
    
    int32_t* edx_4 = arg1[1]
    int32_t ecx_3 = (arg2 - eax) s/ 0x1c * 7
    int32_t edi_5 = *arg1
    
    if (edx_4 != 0)
        *edx_4 = *(edi_5 + (ecx_3 << 2))
        edx_4[1] = *(edi_5 + (ecx_3 << 2) + 4)
        edx_4[2] = &sealengine::CEmitterRotate::`vftable'
        edx_4[3] = *(edi_5 + (ecx_3 << 2) + 0xc)
        edx_4[4] = *(edi_5 + (ecx_3 << 2) + 0x10)
        edx_4[5] = *(edi_5 + (ecx_3 << 2) + 0x14)
        edx_4[6] = *(edi_5 + (ecx_3 << 2) + 0x18)
        arg1[1] += 0x1c
        return 

arg1[1] += 0x1c
